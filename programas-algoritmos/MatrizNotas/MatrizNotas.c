/* Realizar un programa para procesar las notas de tres alumnos en tres materias. Mostrar:
1. Promedio por alumno.
2. Promedio por materia.
3. Traza. */
#include <stdio.h>
int matriz[3][3], N=3, i, j, traza=0;
float acum=0, prom;
main(){
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("Ingrese valor de la fila %d columna %d: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			acum=matriz[i][j]+acum;
		}
		prom=acum/N;
		printf("\nEl promedio del alumno %d es de %f",i,prom);
		acum=0;
	}
	for(j=0;j<N;j++){
		for(i=0;i<N;i++){
			acum=matriz[i][j]+acum;
		}
		prom=acum/N;
		printf("\nEl promedio de la materia %d es de %f",j,prom);
		acum=0;
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j){
				traza=matriz[i][j]+traza;
			}
		}
	}
	printf("\nLa traza es de %d.",traza);
}
