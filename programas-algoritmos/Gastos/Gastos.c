/* Realizar un programa para procesar los gastos de una persona. Puede ser que no tenga gastos ese día
y se dispone de un presupuesto diario de 5000 pe. Mostrar:
1. Gasto máximo y qué número de operación fue.
2. Porcentaje de los gastos mayores a 1000 pe.
3. Promedio entre los gastos menores a 1000 pe.
4. Gasto promedio por operación.
Finaliza el programa al ingresar 0 como gasto. Repetir lo anterior para 5 dias hábiles y mostrar:
5. Promedio de gasto por día.
6. Qué día se gastó menos.
7. Porcentaje de los días en los que el gasto total superó los 2500 pe. */
#include <stdio.h>
int i, N=5, cont=0, dia=1, gasto, presu=5000, max, maxNum, min, minDia;
float mil=0, menosMil=0, acumMil=0, acum=0, acumTotal=0, contTotal=0, porcMil, promMil, promOpe, dosMil=0, promDias, porcDia;
main(){
	printf("Bienvenido a este programa. Eee si eso.\n\n");
	for(i=0;i<N;i++){
		do{
			printf("Ingrese el gasto %d del dia %d: ",cont+1,dia);
			scanf("%d",&gasto);
			if(gasto>presu){
				printf("No dispones del dinero suficiente para realizar ese gasto.\n");
			}
		}while(gasto>presu && gasto!=0);
		while(gasto!=0){
			cont++;
			if(cont==1 || gasto>max){
				max=gasto;
				maxNum=cont;
			}
			if(gasto>1000){
				mil++;
			}
			else if(gasto<1000){
				menosMil++;
				acumMil=gasto+acumMil;
			}
			acum=gasto+acum;
			acumTotal=gasto+acumTotal;
			contTotal++;
			presu=presu-gasto;
			do{
				printf("Ingrese el gasto %d del dia %d: ",cont+1,dia);
				scanf("%d",&gasto);
				if(gasto>presu){
					printf("No dispones del dinero suficiente para realizar ese gasto.\n");
				}
			}while(gasto>presu && gasto!=0);
		}
		porcMil=mil*100/cont;
		promMil=acumMil/menosMil;
		promOpe=acum/cont;
		if(dia==1 || acum<min){
			min=acum;
			minDia=dia;
		}
		if(acum>2500){
			dosMil++;
		}
		printf("\nEl gasto maximo fue el %d con %d pesos gastados.",maxNum,max);
		printf("\nEl %f%c de los gastos fue mayor a 1000 pesos.",porcMil,37);
		printf("\nEl promedio entre los gastos menores a 1000 pesos fue de %f.",promMil);
		printf("\nEl gasto promedio por operacion fue de %f pesos.\n\n",promOpe);
		cont=0;
		max=0;
		mil=0;
		menosMil=0;
		acumMil=0;
		acum=0;
		dia++;
		presu=5000;
	}
	promDias=acumTotal/dia;
	porcDia=dosMil*100/dia;
	printf("\nEl promedio de gasto por dia fue de %f pesos.",promDias);
	printf("\nEl dia en el que menos se gasto fue el %d con %d pesos gastados.",minDia,min);
	printf("\nEl %f%c de los dias el gasto total supero los 2500 pesos.",porcDia,37);
}
