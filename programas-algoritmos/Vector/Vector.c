#include <stdio.h>
float vector[5]; // habibi
int i, N=5;
main(){
	for(i=0;i<N;i++){
		printf("Ingrese valor para la posicion %d: ",i);
		scanf("%f",&vector[i]); // habibi
	}
	printf("Su vector es: |"); // habibi
	for(i=0;i<N;i++){
		printf("%f|",vector[i]); // habibi
	}
}
