/* Modificar el programa anterior leyendo también si hubo precipitaciones o no. Informar:
1. Porcentaje de los días con lluvia.
2. Promedio de las temperaturas de los días que no llovió.
3. Temperatura mínima. */
#include <stdio.h>
#include <stdlib.h>
int i, N=7, supveinti, lluvia;
float temp, prom=0, porc=0, mendiez=0, mayveinte=0, acum=0, diaslluvia=0, nolluvia=0, acumnolluvia=0, promnolluvia=0, porclluvia=0, min=0;
main(){
	for(i=0;i<N;i++){
		printf("Ingrese temperatura: ");
		scanf("%f",&temp);
		printf("Ingrese 1 si no llovio, si llovio ingrese 2: ");
		scanf("%d",&lluvia);
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
		if(lluvia==1){
			nolluvia=nolluvia+1;
			acumnolluvia=acumnolluvia+temp;
		}
		else if(lluvia==2){
			diaslluvia=diaslluvia+1;
		}
		if(i==0 || temp<min){
			min=temp;
		}
	}
	prom=acum/mendiez;
	porc=mayveinte*100/7;
	promnolluvia=acumnolluvia/nolluvia;
	porclluvia=diaslluvia*100/7;
	if(mendiez==0){
		printf("\nNo hubo temperaturas menores a 10 grados.");
	}
	else{
		printf("\nEl promedio de las temperaturas menores a 10 grados es de %f grados.",prom);
	}
    printf("\nEl porcentaje de las mayores a 20 grados es de %f porciento.\nLa temperatura supero los 25 grados %d dias.\n\n",porc,supveinti);
    if(nolluvia==0){
		printf("No hubo dia sin lluvia.");
	}
	else{
		printf("El promedio de las temperaturas de los dias sin lluvia es de %f grados.",promnolluvia);
	}
	printf("\nEl porcentaje de los dias con lluvia es de %f porciento.\nLa temperatura minima fue de %f grados.",porclluvia,min);
	getch();
}
