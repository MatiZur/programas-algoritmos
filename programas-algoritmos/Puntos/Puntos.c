/* Se almacena en un vector los puntos que obtuvieron los deportistas de 10 paises en fulbo. El n° de pais corresponde a la
posicion de memoria. Informar:
1. Numero de pais ganador
2. Paises cuyo puntaje supero al del promedio
3. Porcentaje de los paises que obtuvieron mas de 30 puntos
4. Ordenar el vector de menor a mayor */
#include <stdio.h>
int i, N=10, puntos[10], max, iMax, treinta, j, aux;
float acumTotal, promTotal, porcTreinta;
main(){
	for(i=0;i<N;i++){
		printf("Ingrese los puntos que obtuvo el pais %d: ",i);
		scanf("%d",&puntos[i]);
		if(i==0 || puntos[i]>max){
			max=puntos[i];
			iMax=i;
		}
		if(puntos[i]>30){
			treinta=treinta+1;
		}
		acumTotal=puntos[i]+acumTotal;
	}
	promTotal=acumTotal/N;
	porcTreinta=treinta*100/N;
	printf("El numero del pais ganador es el %d.\n",iMax);
	printf("Los numeros de los paises que superaron el promedio de puntos (%f) son:",promTotal);
	for(i=0;i<N;i++){
		if(puntos[i]>promTotal){
			printf(" %d",i);
		}
	}
	printf(".\nEl porcentaje de los paises que obtuvieron mas de 30 puntos fue de %f porciento.",porcTreinta);
	printf("\nLos puntos de los paises ordenados de menor a mayor queda:");
	for(j=1;j<N;j++){
		for(i=0;i<N-j;i++){
			if(puntos[i]>puntos[i+1]){
				aux=puntos[i];
				puntos[i]=puntos[i+1];
				puntos[i+1]=aux;
			}
		}
	}
	for(i=0;i<N;i++){
		printf(" %d",puntos[i]);
	}
}
