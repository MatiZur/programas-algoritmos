/* Un programa almacena las edades de las personas que viajan en avión. Se leen 10 edades. Informar:
1. Porcentaje de jubilados (edad mayor a 65 años).
2. Promedio de edad y posiciones de memoria de las edades menores al promedio.
3. Rango de edades y sus posiciones de memoria.
4. Buscar una edad. Informar si se encontró o no. En caso afirmativo imprimir su posición de memoria. */
#include <stdio.h>
int vector[10], i, N=10, jubi, min, iMin, max, iMax, buscar, encontrado;
float acumTotal, porcJubi, promTotal;
main(){
	for(i=0;i<N;i++){
		printf("Ingrese la edad de la posicion %d: ",i);
		scanf("%d",&vector[i]);
		if(vector[i]>65){
			jubi=jubi+1;
		}
		if(i==0 || vector[i]<min){
			min=vector[i];
			iMin=i;
		}
		if(i==0 || vector[i]>max){
			max=vector[i];
			iMax=i;
		}
		acumTotal=vector[i]+acumTotal;
	}
	porcJubi=jubi*100/N;
	promTotal=acumTotal/N;
	printf("El porcentaje de jubilados es de %f porciento.\n",porcJubi);
	printf("El promedio de edad es de %f anios.\n",promTotal);
	printf("La posicion de memoria de las personas menores a dicho promedio son:");
	for(i=0;i<N;i++){
		if(vector[i]<promTotal){
			printf(" %d",i);
		}
	}
	printf("\nEl rango de edades va de %d (posicion %d) hasta %d (posicion %d).\n",min,iMin,max,iMax);
	printf("\nIngrese una edad para buscar: ");
	scanf("%d",&buscar);
	for(i=0;i<N;i++){
		if(buscar==vector[i]){
			printf("Se encontro una persona con la edad ingresada en la posicion %d.\n",i);
			encontrado=1;
		}
	}
	if(encontrado==0){
		printf("No se encontro una persona con dicha edad.");
	}
}
