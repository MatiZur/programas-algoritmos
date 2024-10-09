/* Se almacenan en una matriz la cantidad de asistencias de los tres talleres que se dictan en un
espacio en tres turnos. Almacenar en un vector el nombre de cada taller e imprimir mediante un menú:
1. Total de asistencias por taller y a qué taller asistió más gente.
2. Total de asistencias por turno y en qué turno asistió menos gente.
3. Traza, valor máxima de la matriz y su posición de memoria.
4. Por taller mostrar en qué turno asistió menos gente. */
#include <stdio.h>
int asis[3][3], i, j, N=3, acum=0, max, maxTall, min, minTur, traza, maxTot, maxI, maxJ, minTall, minTallTur;
main(){
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("Ingrese las asistencias del taller %d en el turno %d: ",j+1,i+1);
			scanf("%d",&asis[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<N;j++){
		for(i=0;i<N;i++){
			acum=acum+asis[i][j];
		}
		if(j==0 || acum>max){
			max=acum;
			maxTall=j;
		}
		printf("\nEl total de asistencias en el taller %d fue de %d.",j+1,acum);
		acum=0;
	}
	printf("\nEl taller al que mas gente asistio fue el %d con %d persona/s.\n",maxTall+1,max);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			acum=acum+asis[i][j];
		}
		if(i==0 || acum<min){
			min=acum;
			minTur=i;
		}
		printf("\nEl total de asistencias en el turno %d fue de %d.",i+1,acum);
		acum=0;
	}
	printf("\nEl turno al que menos gente asistio fue el %d con %d persona/s.\n",minTur+1,min);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j){
				traza=traza+asis[i][j];
			}
			if((i==0 && j==0) || asis[i][j]>maxTot){
				maxTot=asis[i][j];
				maxI=i;
				maxJ=j;
			}
		}
	}
	printf("\nLa traza es de %d.",traza);
	printf("\nEl valor maximo de la matriz es %d con posicion de memoria (%d;%d).\n",maxTot,maxI,maxJ);
	for(j=0;j<N;j++){
		for(i=0;i<N;i++){
			if(i==0 || asis[i][j]<minTall){
				minTall=asis[i][j];
				minTallTur=i;
			}
		}
		printf("\nEl turno al que menos gente asistio en el taller %d fue el %d con %d persona/s",j+1,minTallTur+1,minTall);
	}
}
