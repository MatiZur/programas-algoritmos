/* Para procesar las personas que viajan a Cruzeiro (crucero), indicar:
1. Porcentaje que viajan a cada destino.
2. En el destino 1, cuántas personas de entre 21 y 35 años viajan. Expresar en porcentaje.
3. Entre las mujeres, cuantas viajan al destino 3. Expresar en porcentaje.
4. Promedio de edades entre los varones.
5. Edad máxima en el destino 1 y mínima en el 3 y a qué género corresponden.
Se leen la edad de cada uno, si viajan hasta el destino 1, 2 o 3, el género y si se siguen cargando
datos. Como máximo viajan 20 personas y el usuario indica el fin de la carga. */
#include <stdio.h>
int pasa, edad, dest, gen, max, genMax, min, genMin, sigue;
float contTotal=0, destUno=0, destDos=0, destTres=0, unoEntre=0, mujer=0, mujerTres=0, hombre=0, acumHombres=0, porcUno=0, porcDos=0, porcTres=0, porcEntre=0, porcMujerTres=0, promHombres=0;
main(){
	printf("Bienvenido al hiper mega programa para procesar personas viajando en un crucero. Recuerde que:\nDestino 1: Cruzeiro - Destino 2: Fluminense - Destino 3: River\nG%cnero 1: Hombre - G%cnero 2: Mujer\nIngrese 1 para continuar la carga de datos y 2 para pararla.\n",130,130);
	do{
		contTotal++;
		pasa=contTotal;
		printf("\nIngrese la edad del pasajero %d: ",pasa);
		scanf("%d",&edad);
		printf("Ingrese el destino del pasajero %d: ",pasa);
		scanf("%d",&dest);
		if(dest!=1 && dest!=2 && dest!=3){
			printf("\nPon%c un destino v%clido, pajero.",130,160);
			return 0;
		}
		printf("Ingrese el g%cnero del pasajero %d: ",130,pasa);
		scanf("%d",&gen);
		if(gen!=1 && gen!=2){
			printf("\nPon%c un g%cnero v%clido, pajero.",130,130,160);
			return 0;
		}
		if(dest==1){
			destUno++;
			if(edad>21 && edad<35){
				unoEntre++;
			}
			if(destUno==1 || edad>max){
				max=edad;
				genMax=gen;
			}
		}
		else if(dest==2){
			destDos++;
		}
		else if(dest==3){
			destTres++;
			if(destTres==1 || edad<min){
				min=edad;
				genMin=gen;
			}
		}
		if(gen==1){
			hombre++;
			acumHombres=edad+acumHombres;
		}
		else if(gen==2){
			mujer++;
			if(dest==3){
				mujerTres++;
			}
		}
		printf("%cSeguimos cargando datos pa?: ",168);
		scanf("%d",&sigue);
		if(sigue!=1 && sigue!=2){
			printf("\n%cSos pelotudo?",168);
			return 0;
		}
	}while(sigue==1 && contTotal<20);
	porcUno=destUno*100/contTotal;
	porcDos=destDos*100/contTotal;
	porcTres=destTres*100/contTotal;
	porcEntre=unoEntre*100/destUno;
	porcMujerTres=mujerTres*100/mujer;
	promHombres=acumHombres/hombre;
	printf("\nEl %f%c de las personas viaja al destino 1, el %f%c al 2 y el %f%c al 3.\n",porcUno,37,porcDos,37,porcTres,37);
	if(destUno!=0){
		printf("De los que viajan al destino 1, el %f%c tiene entre 21 y 35 a%cos.\n",porcEntre,37,164);
	}
	else{
		printf("Nadie viaja al destino 1.\n");
	}
	if(mujer!=0){
		printf("Entre las mujeres, el %f%c viajan al destino 3.\n",porcMujerTres,37);
	}
	else{
		printf("Ninguno de los pasajeros es mujer.\n");
	}
	if(hombre!=0){
		printf("El promedio de edad entre los varones es de %f a%cos.\n",promHombres,164);
	}
	else{
		printf("Ninguno de los pasajeros es hombre.\n");
	}
	if(destUno!=0){
		printf("La edad m%cxima de los que viajan al destino 1 es un",160);
		if(genMax==1){
			printf(" var%cn de ",162);
		}
		else if(genMax==2){
			printf("a mujer de ");
		}
		printf("%d a%cos. ",max,164);
	}
	else{
		printf("Nadie viaja al destino 1. ");
	}
	if(destTres!=0){
		printf("La edad m%cnima de los que viajan al destino 3 es un",161);
		if(genMin==1){
			printf(" var%cn de ",162);
		}
		else if(genMin==2){
			printf("a mujer de ");
		}
		printf("%d a%cos.",min,164);
	}
	else{
		printf("Nadie viaja al destino 3.");
	}
}
