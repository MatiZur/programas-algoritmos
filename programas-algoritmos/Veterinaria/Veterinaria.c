/* Se almacena en una matriz la cantidad de animales que atiende
una veterinaria en cuatro gabinetes durante cuatro días. Mostrar:
1. Total de animales por gabinete y cuál atendió a más mascotas.
2. Promedio de mascotas atendidas por día.
3. Mostrar por día qué gabinete atendió a menos mascotas.
4. Diagonal principal, mínimo valor de la matriz y su posición de memoria. */
#include <stdio.h>
int matriz[4][4], N=5, i, j, acumInt, max, maxGab, min, minGab, minTot, minI, minJ;
float acum=0, prom;
main(){
	for(i=1;i<N;i++){
		for(j=1;j<N;j++){
			printf("Ingrese animales atendidos en el dia %d en el gabinete %d: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	for(j=1;j<N;j++){
		for(i=1;i<N;i++){
			acum=acum+matriz[i][j];
		}
		if(j==1 || acum>max){
				max=acum;
				maxGab=j;
		}
		acumInt=acum;
		printf("\nUn total de %d animales se atendieron en el gabinete %d.",acumInt,j);
		acum=0;
	}
	printf("\nEl gabinete %d fue el que atendio a mas mascotas (%d).\n",maxGab,max);
	for(i=1;i<N;i++){
		for(j=1;j<N;j++){
			acum=acum+matriz[i][j];
		}
		prom=acum/4;
		printf("\nEl promedio de animales atendidos en el dia %d fue de %f.",i,prom);
		acum=0;
	}
	printf("\n");
	for(i=1;i<N;i++){
		for(j=1;j<N;j++){
			acum=acum+matriz[i][j];
			if(j==1 || matriz[i][j]<min){
				min=matriz[i][j];
				minGab=j;
			}
		}
		printf("\nEl gabinete que atendio a menos animales en el dia %d fue el gabinete %d con %d mascotas.",i,minGab,min);
		acum=0;
	}
	printf("\n\nLa diagonal principal es");
	for(i=1;i<N;i++){
		for(j=1;j<N;j++){
			if(i==j){
				printf(" %d",matriz[i][j]);
			}
			if((i==1 && j==1) || matriz[i][j]<minTot){
				minTot=matriz[i][j];
				minI=i;
				minJ=j;
			}
		}
	}
	printf(".\nEl minimo valor de la matriz es %d con posicion (%d;%d).",minTot,minI,minJ);
	
}
