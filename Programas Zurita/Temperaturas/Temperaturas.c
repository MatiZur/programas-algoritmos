/* Realizar un programa para procesar las temperaturas de una semana. Informar:
1. Promedio de las temperaturas menos a 10º
2. Porcentaje de las temperaturas mayores a 20º
3. Cuantos días la temperatura superó los 25º */
#include <stdio.h>
#include <stdlib.h>
int i, N=7, supveinti;
float temp, prom=0, porc=0, mendiez=0, mayveinte=0, acum=0;
main(){
	for(i=0;i<N;i++){
		printf("Ingrese temperatura: ");
		scanf("%f",&temp);
		if(temp>20){
			mayveinte=mayveinte+1;
			if(temp>25){
				supveinti=supveinti+1;
			}
		}
		else if(temp<10){
			mendiez=mendiez+1;
			acum=acum+temp;
		}
	}
	prom=acum/mendiez;
	porc=mayveinte*100/7;
	if(mendiez==0){
		printf("No hubo temperaturas menores a 10 grados.");
	}
	else{
		printf("El promedio de las temperaturas menores a 10 grados es de %f.",prom);
	}
    printf("\nEl porcentaje de las mayores a 20 grados es de %f porciento.\nLa temperatura supero los 25 grados %d dias.",porc,supveinti);
	getch();
}
