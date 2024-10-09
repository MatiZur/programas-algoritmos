/* Se almacena en una matriz la cantidad de animales que atiende
una veterinaria en cuatro gabinetes durante cuatro días. Mostrar:
1. Total de animales por gabinete y cuál atendió a más mascotas.
2. Promedio de mascotas atendidas por día.
3. Mostrar por día qué gabinete atendió a menos mascotas.
4. Diagonal principal, mínimo valor de la matriz y su posición de memoria. */
#include <stdio.h>
int animales[4][4], N=4, i, j, acumInt, max, maxGab, min, minGab, minTot, minI, minJ;
float acum=0, prom;
main(){
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("Ingrese animales atendidos en el dia %d en el gabinete %d: ",i+1,j+1);
			scanf("%d",&animales[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<N;j++){
		for(i=0;i<N;i++){
			acum=acum+animales[i][j];
		}
		if(j==0 || acum>max){
				max=acum;
				maxGab=j;
		}
		acumInt=acum;
		printf("\nUn total de %d animales se atendieron en el gabinete %d.",acumInt,j+1);
		acum=0;
	}
	printf("\nEl gabinete %d fue el que atendio a mas mascotas (%d).\n",maxGab,max);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			acum=acum+animales[i][j];
		}
		prom=acum/N;
		printf("\nEl promedio de animales atendidos en el dia %d fue de %f.",i+1,prom);
		acum=0;
	}
	printf("\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			acum=acum+animales[i][j];
			if(j==0 || animales[i][j]<min){
				min=animales[i][j];
				minGab=j;
			}
		}
		printf("\nEl gabinete que atendio a menos animales en el dia %d fue el gabinete %d con %d mascotas.",i+1,minGab,min);
		acum=0;
	}
	printf("\n\nLa diagonal principal es");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j){
				printf(" %d",animales[i][j]);
			}
			if((i==0 && j==0) || animales[i][j]<minTot){
				minTot=animales[i][j];
				minI=i;
				minJ=j;
			}
		}
	}
	printf(".\nEl minimo valor de la matriz es %d con posicion (%d;%d).",minTot,minI,minJ);
}
