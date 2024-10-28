/* Un negocio de ropa registra las ventas de tres vendedores durante tres dias. Mostrar mediante un menú:
1. Total vendido por vendedor y que vendedor vendio menos.
2. Total vendido durante cada dia y que dia se vendio mas.
3. Por dia, mostrar que vendedor vendio mas y cuanto vendio.
4. Porcentaje de los dias en lo que las ventas superaron los 20000.
5. Maximo valor de la matriz, posiciones de memoria y diagonal principal. */

#include <stdio.h>
int i, N=3, j, ventas[3][3], opc, acum=0, min, minVen, max, maxDia, maxXDia, maxVen, dosca, maxVal, maxI, maxJ; // i dia j vendedor
float porc;
main(){
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("Ingrese la venta del dia %d del vendedor %d: ",i+1,j+1);
			scanf("%d",&ventas[i][j]);
		}
		printf("\n");
	}
	do{
		printf("\n\nIngrese 1 para ver el total vendido por vendedor y que vendedor vendio menos.");
		printf("\nIngrese 2 para ver el total vendido durante cada dia y que dia se vendio mas.");
		printf("\nIngrese 3 para ver, por dia, que vendedor vendio mas y cuanto vendio.");
		printf("\nIngrese 4 para ver el porcentaje de los dias en lo que las ventas superaron los 20000.");
		printf("\nIngrese 5 para ver el maximo valor de la matriz, posiciones de memoria y diagonal principal.");
		printf("\nIngrese 6 para terminar el programa.");
		printf("\n\nIngrese su opcion: ");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				for(j=0;j<N;j++){
					for(i=0;i<N;i++){
						acum=acum+ventas[i][j];
					}
					printf("\nEl vendedor %d vendio un total de %c%d.",j+1,36,acum);
					if(j==0 || acum<min){
						min=acum;
						minVen=j;
					}
					acum=0;
				}
				printf("\nEl vendedor que menos vendio fue el %d con %c%d vendido.\n",minVen+1,36,min);
				break;
			case 2:
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						acum=acum+ventas[i][j];
					}
					printf("\nEl dia %d se vendio un total de %c%d.",i+1,36,acum);
					if(i==0 || acum>max){
						max=acum;
						maxDia=i;
					}
					acum=0;
				}
				printf("\nEl dia en el que mas se vendio fue el %d con %c%d vendido.\n",maxDia+1,36,max);
				break;
			case 3:
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						if(j==0 || ventas[i][j]>maxXDia){
							maxXDia=ventas[i][j];
							maxVen=j;
						}
					}
					printf("\nEn el dia %d el vendedor que mas vendio fue el %d con %c%d vendido.",i+1,maxVen+1,36,maxXDia);
				}
				printf("\n");
				break;
			case 4:
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						acum=acum+ventas[i][j];
					}
					if(acum>20000){
						dosca++;
					}
					acum=0;
				}
				porc=dosca*100/N;
				printf("\nEl %f%c de los dias las ventas superaron los 20000.\n",porc,37);
				break;
			case 5:
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						if((i==0 && j==0) || ventas[i][j]>maxVal){
							maxVal=ventas[i][j];
							maxI=i;
							maxJ=j;
						}
					}
				}
				printf("\nEl maximo valor de la matriz fue de %d con posicion de memoria (%d;%d).",maxVal,maxI,maxJ);
				printf("\nLa diagonal principal es");
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						if(i==j){
							printf(" %d",ventas[i][j]);
						}
					}
				}
				printf(".\n");
				break;
			case 6:
				printf("\nTerminando programa...");
		}
	}while(opc<6);
}
