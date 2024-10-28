/* Se almacenan las ventas de 4 vendedores en 4 dias en una matriz. Guardar los nombres de los vendedores en un vector.
Realizar un programa que, mediante un menu, muestre:
1. Promedio de ventas por dia y que dia hubo menos ventas.
2. Total de ventas por vendedor y que dia cada vendedor tuvo mas ventas.
3. Diagonal principal, maximo valor de matriz y posiciones de memoria.
4. Porcentaje de vendedores que vendieron mas de 3000 en total. */
#include <stdio.h>
int i, j, N=4, ventas[4][4], opc, min=0, minDia, max=0, maxDia, acumInt, maxI, maxJ, tres=0; // i = dias | j = vendedores
float acum=0, prom, porc;
char vendedores[4][12];
main(){
	for(j=0;j<N;j++){
		printf("Ingrese el nombre del vendedor %d: ",j+1);
		scanf("%s",vendedores[j]);
	}
	printf("\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("Ingrese la venta del dia %d del vendedor %s: ",i+1,vendedores[j]);
			scanf("%d",&ventas[i][j]);
		}
		printf("\n");
	}
	do{
		printf("\nIngrese 1 para ver el promedio de ventas por dia y que dia hubo menos ventas.");
		printf("\nIngrese 2 para ver el total de ventas por vendedor y que dia cada vendedor tuvo mas ventas.");
		printf("\nIngrese 3 para ver la diagonal principal, maximo valor de matriz y posiciones de memoria.");
		printf("\nIngrese 4 para ver el porcentaje de vendedores que vendieron mas de 3000 en total.");
		printf("\nIngrese cualquier otro valor para finalizar el programa.");
		printf("\nIngrese su opcion: ");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						acum=acum+ventas[i][j];
					}
					prom=acum/N;
					if(i==0 || acum<min){
						min=acum;
						minDia=i;
					}
					printf("\nEl promedio de ventas del dia %d fue de %f.",i+1,prom);
					acum=0;
				}
				printf("\nEl dia en el que hubo menos ventas fue el %d con %d vendido.\n\n",minDia+1,min);
				min=0;
				break;
			case 2:
				for(j=0;j<N;j++){
					for(i=0;i<N;i++){
						acum=acum+ventas[i][j];
						if(i==0 || ventas[i][j]>max){
							max=ventas[i][j];
							maxDia=i;
						}
					}
					acumInt=acum;
					printf("\nEl vendedor %s vendio un total de %d y tuvo mas ventas el dia %d con %d vendido.",vendedores[j],acumInt,maxDia+1,max);
					acum=0;
					max=0;
				}
				printf("\n\n");
				break;
			case 3:
				printf("\nLa diagonal principal es");
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						if(i==j){
							printf(" %d",ventas[i][j]);
						}
						if((i==0 && j==0) || ventas[i][j]>max){
							max=ventas[i][j];
							maxI=i;
							maxJ=j;
						}
					}
				}
				printf(".\nEl maximo valor de la matriz es %d con posicion de memoria (%d;%d).\n\n",max,maxI,maxJ);
				max=0;
				break;
			case 4:
				for(j=0;j<N;j++){
					for(i=0;i<N;i++){
						acum=acum+ventas[i][j];
					}
					if(acum>3000){
						tres++;
					}
					acum=0;
				}
				porc=tres*100/N;
				printf("\nEl %f%c de los vendedores vendieron mas de 3000 en total.\n\n",porc,37);
				tres=0;
				break;
			default:
				printf("\nTerminando programa...");
		}
	}while(opc>0 && opc<5);
}
