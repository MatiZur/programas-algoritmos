/* Una agencia de turismo vende paquetes para viajes nacionales e internacionales. Se leen la cantidad de días que desea viajar el cliente
junto con las personas que viajan. Mostrar:
1. Porcentaje de viajes internacionales.
2. Promedio de personas que viajan a destinos nacionales.
3. Dentro de los viajes en los que viajan tres personas o más, qué porcentaje fue a cada destino.
4. Dentro de los que viajan más de 7 días, cuál es el rango de personas y a qué destinos van.
5. Qué destino eligieron los que viajan más días.
Puede ser que no haya consultas y finaliza el programa al ingresar 0 como destino. Como máximo se pueden realizar 20 consultas. */
#include <stdio.h>
int i=0, dest, dias, perso, min, destMin, max, destMax, maxDias, destDias;
float inter=0, nac=0, acumNac=0, tres=0, tresNac=0, tresInter=0, siete=0, porcInter, promNac, porcTresNac, porcTresInter;
main(){
	printf("Que onda rey? Vienvenido escribia re mal no bienvenido al programita este como todos los otros. Acordate que 1: Nacional - 2: Internacional\nIngrese el destino del viaje %d: ",i+1);
	scanf("%d",&dest);
	while(dest!=0 && i<20){
		i++;
		printf("Ingrese cantidad de dias que durara el viaje %d: ",i);
		scanf("%d",&dias);
		printf("Ingrese las personas que viajan en el viaje %d: ",i);
		scanf("%d",&perso);
		if(dest==1){
			nac++;
			acumNac=perso+acumNac;
		}
		else if(dest==2){
			inter++;
		}
		if(perso>=3){
			tres++;
			if(dest==1){
				tresNac++;
			}
			else if(dest==2){
				tresInter++;
			}
		}
		if(dias>7){
			siete++;
			if(siete==1 || perso<min){
				min=perso;
				destMin=dest;
			}
			if(siete==1 || perso>max){
				max=perso;
				destMax=dest;
			}
		}
		if(i==0 || dias>maxDias){
			maxDias=dias;
			destDias=dest;
		}
		if(i!=20){
			printf("\nIngrese el destino del viaje %d: ",i+1);
			scanf("%d",&dest);
		}
	}
	if(i!=0){
		porcInter=inter*100/i;
		promNac=acumNac/nac;
		porcTresNac=tresNac*100/tres;
		porcTresInter=tresInter*100/tres;
		printf("\nEl porcentaje de viajes internacionales fue de %f%c.\n",porcInter,37);
		if(nac!=0){
			printf("El promedio de las personas que viajan a destinos nacionales es de %f personas.\n",promNac);
		}
		else{
			printf("No hubo viajes a destinos nacionales pa.\n");
		}
		if(tres!=0){
			printf("Dentro de los viajes en los que viajan tres personas o mas, el %f%c fueron nacionales y el %f%c fueron internacionales.",porcTresNac,37,porcTresInter,37);
		}
		else{
			printf("No hubo viajes donde viajaran tres personas o mas.");
		}
		if(siete!=0){
			printf("\nDentro de los que viajan mas de 7 dias, el rango de personas fue de %d con destino ",min);
			if(destMin==2){
				printf("inter");
			}
			printf("nacional hasta %d con destino ",max);
			if(destMax==2){
				printf("inter");
			}
			printf("nacional.");
		}
		else{
			printf("\nNo hubo viaje mayor a 7 dias.");
		}
		printf("\nLos que viajan mas dias (%d) eligieron un destino ",maxDias);
		if(destDias==2){
			printf("inter");
		}
		printf("nacional.");
	}
	else{
		printf("\npene");
	}
}
