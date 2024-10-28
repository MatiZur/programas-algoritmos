/* Se almacenan en una matriz los datos de un teatro. Hay tres espectáculos
en tres días. Mostrar mediante un menú:
1. Cantidad de entradas por espectáculo y espectáculo que vendió más entradas.
2. Promedio de entradas por día y que espectáculo vendió más entradas cada día.
3. Diagonal principal, valor mínimo de la matriz y posiciones de memoria.
4. Porcentaje de espectáculos que vendieron más de 200 entradas en total.
Almacenar en un vector los nombres de los espectáculos. */
#include <stdio.h>
int i, j, N=3, entradas[3][3], opc, acum=0, max, maxEsp, maxXDia, maxEspDia, min, minI, minJ; // i espetaculo j diaz
float prom;
char nombres[3][12];
main(){
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("Ingresa las entradas que vendio el espectaculo %d en el dia %d: ",i+1,j+1);
			scanf("%d",&entradas[i][j]);
		}
		printf("\n");
	}
	do{
		printf("Ingresa 1 para ver la cantidad de entradas por espectaculo y espectaculo que vendio mas entradas.\n");
		printf("Ingresa 2 para ver el promedio de entradas por dia y que espectaculo vendio mas entradas cada dia.\n");
		printf("Ingresa 3 para ver la diagonal principal, valor minimo de la matriz y posiciones de memoria.\n");
		printf("Ingresa 4 para ver el porcentaje de espectaculos que vendieron mas de 200 entradas en total.\n");
		printf("Ingresa 5 para terminar el programa.\n");
		printf("\nIngrese su opcion: ");
		scanf("%d",&opc);
		switch(opc){
			case 1:
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						acum=acum+entradas[i][j];
					}
					printf("\nEl espectaculo %d vendio un total de %d entradas.",i+1,acum);
					if(i==0 || acum>max){
						max=acum;
						maxEsp=i;
					}
					acum=0;
				}
				printf("\nEl espectaculo que vendio mas entradas fue el %d con %d entradas vendidas.\n\n\n",maxEsp+1,max);
				break;
			case 2:
				for(j=0;j<N;j++){
					for(i=0;i<N;i++){
						acum=acum+entradas[i][j];
						if(i==0 || entradas[i][j]>maxXDia){
							maxXDia=entradas[i][j];
							maxEspDia=i;
						}
					}
					prom=acum/N;
					printf("\nEl promedio de entradas del dia %d es de %f.",j+1,prom);
					printf("\nEl espectaculo que vendio mas entradas en el dia %d fue el %d con %d entradas vendidas.",j+1,maxEspDia+1,maxXDia);
					acum=0;
				}
				printf("\n\n\n");
				break;
			case 3:
				printf("\nLa diagonal principal es");
				for(i=0;i<N;i++){
					for(j=0;j<N;j++){
						if(i==j){
							printf(" %d",entradas[i][j]);
							if((i==0 && j==0) || entradas[i][j]<min){
								min=entradas[i][j];
								minI=i;
								minJ=j;
							}
						}
					}
				}
				printf(".\nEl valor minimo de la matriz fue %d con posicion de memoria (%d;%d).\n\n\n",min,minI,minJ);
			case 4:
				// alta paja terminarlo no
		}
	}while(opc<5);
}
