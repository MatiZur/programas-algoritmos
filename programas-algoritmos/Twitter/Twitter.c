/* Una cuenta recibe interacciones a lo largo de un dia. Pueden ser de tres tipos: 1. Seguimientos - 2. Mensajes - 3. Likes. Las interraciones
pueden ser de cuentas publicas o privadas. Termina el dia al ingresar 0 como interaccion. Mostrar:
1. Que porcentaje de las interacciones fueron seguimientos
2. Que porcentaje de los seguimientos fueron de cuentas publicas
3. Cuantas interacciones de cada tipo tuvo la cuenta
Puede ser que no tenga interacciones y tiene como maximo 10 interacciones en total.
Repetir esto para cuatro dias. Mostrar:
1. Dia en el que hubo mas mensajes
2. Que porcentaje de los dias hubo nuevos seguidores
3. Promedio de likes por dia */
#include <stdio.h>
int i, N=4, dia=0, inter, cuenta, num=0, intSegui, intMensa, intLike, max, diaMax;
float contTotal=0, segui=0, seguiPubli=0, mensa=0, like=0, porcSegui=0, porcPubli=0, diasSegui=0, acumLikes=0, porcSeguis=0, promLikes=0;
main(){
	printf("Bienvenido papi. 1: Seguimiento - 2: Mensaje - 3: Like. 1: Cuenta publica - 2: Cuenta privada.\n\n");
	for(i=0;i<N;i++){
		dia++;
		do{
			printf("Ingrese el tipo de la interaccion %d del dia %d: ",num+1,dia);
			scanf("%d",&inter);
			if(inter!=0 && inter!=1 && inter!=2 && inter!=3){
				printf("Ingresa un dato valido pajarito valverde\n");
			}
		}while(inter!=0 && inter!=1 && inter!=2 && inter!=3);
		while(inter!=0 && contTotal<10){
			contTotal++;
			num++;
			do{
				printf("Ingrese el tipo de cuenta de la interaccion %d del dia %d: ",num,dia);
				scanf("%d",&cuenta);
				if(cuenta!=1 && cuenta!=2){
					printf("Ingresa un dato valido pajarito valverde\n");
				}
			}while(cuenta!=1 && cuenta!=2);
			if(inter==1){
				segui++;
				if(cuenta==1){
					seguiPubli++;
				}
			}
			else if(inter==2){
				mensa++;
			}
			else if(inter==3){
				like++;
			}
			if(num!=10){
				do{
					printf("Ingrese el tipo de la interaccion %d del dia %d: ",num+1,dia);
					scanf("%d",&inter);
					if(inter!=0 && inter!=1 && inter!=2 && inter!=3){
						printf("Ingresa un dato valido pajarito valverde\n");
					}
				}while(inter!=0 && inter!=1 && inter!=2 && inter!=3);
			}
		}
		if(contTotal!=0){
			porcSegui=segui*100/contTotal;
			porcPubli=seguiPubli*100/segui;
			printf("\nEl %f%c de las interacciones fueron seguimientos.\n",porcSegui,37);
			if(segui!=0){
				printf("El %f%c de los seguimientos fueron de cuentas publicas.\n",porcPubli,37);
			}
			intSegui=segui;
			intMensa=mensa;
			intLike=like;
			printf("En el dia %d, la cuenta tuvo %d seguimientos, %d mensajes y %d likes.",dia,intSegui,intMensa,intLike);
			if(dia==1 || mensa>max){
				max=mensa;
				diaMax=dia;
			}
			if(segui!=0){
				diasSegui++;
			}
			acumLikes=like+acumLikes;
		}
		printf("\n\n");
		num=0;
		contTotal=0;
		segui=0;
		seguiPubli=0;
		mensa=0;
		like=0;
	}
	porcSeguis=diasSegui*100/4;
	promLikes=acumLikes/4;
	printf("El dia con mas mensajes fue el %d con %d mensajes.\n",diaMax,max);
	printf("El %f%c de los dias hubo nuevos seguidores.\n",porcSeguis,37);
	printf("El promedio de likes por dia fue de %f.",promLikes);
}
