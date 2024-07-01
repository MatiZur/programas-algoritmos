/* Realizar un programa que lea si una persona estudia, trabaja o ambas y cuánto gasta en trasporte por día. Realizar esto para 10 personas. Informar:
1. Promedio de gastos de las personas que trabajan.
2. Porcentaje de las personas que sólo estudian.
3. Promedio de gastos de las personas que estudian y trabajan.
4. Gasto máximo y mínimo y qué actividad realizan.
5. Porcentaje dentro de los que gastan más de 1.000 pesos que sólo estudian. */
#include <stdio.h>
int i, N=10, opcion, cont_trab, cont_est, cont_ambas, min_act, max_act, cont_diez, cont_diez_est;
float gasto, acum_trab, acum_ambas, min, max, prom_trab, porc_est, prom_ambas, porc_diez;
main(){
	printf("Bienvenido. Por favor, ingrese:\n 1. Si estudia.\n 2. Si trabaja.\n 3. Ambas.\n\n");
	for(i=0;i<N;i++){
		printf("Ingrese el numero correspondiente: ");
		scanf("%d",&opcion);
		printf("Ingrese los pesos que gasta en transporte por dia: ");
		scanf("%f",&gasto);
		if(opcion==2){
			cont_trab=cont_trab+1;
			acum_trab=acum_trab+gasto;
		}
		if(opcion==1){
			cont_est=cont_est+1;
		}
		if(opcion==3){
			cont_ambas=cont_ambas+1;
			acum_ambas=acum_ambas+gasto;
		}
		if(i==0 || gasto<min){
			min=gasto;
			if(opcion==1){
				min_act=1;
			}
			if(opcion==2){
				min_act=2;
			}
			if(opcion==3){
				min_act=3;
			}
		}
		if(i==0 || gasto>max){
			max=gasto;
			if(opcion==1){
				max_act=1;
			}
			if(opcion==2){
				max_act=2;
			}
			if(opcion==3){
				max_act=3;
			}
		}
		if(gasto>1000){
			cont_diez=cont_diez+1;
			if(opcion==1){
				cont_diez_est=cont_diez_est+1;
			}
		}
	}
	prom_trab=acum_trab/cont_trab;
	porc_est=cont_est*100/N;
	prom_ambas=acum_ambas/cont_ambas;
	porc_diez=cont_diez_est*100/cont_diez;
	printf("\nEl promedio de gastos de las personas que trabajan es de %f pesos.\nEl porcentaje de las personas que solo estudian es de %f porciento.\nEl promedio de gastos de las personas que estudian y trabajan es de %f pesos.\nEl gasto maximo fue de %f pesos, quien ",prom_trab,porc_est,prom_ambas, max);
	if(max_act==1){
		printf("solo estudiaba.");
	}
	else if(max_act==2){
		printf("solo trabajaba.");
	}
	else if(max_act==3){
		printf("estudiaba y trabajaba.");
	}
	printf("\nEl gasto minimo fue de %f pesos, quien ",min);
	if(min_act==1){
		printf("solo estudiaba.");
	}
	else if(min_act==2){
		printf("solo trabajaba.");
	}
	else if(min_act==3){
		printf("estudiaba y trabajaba.");
	}
	printf("\nEl porcentaje que solo estudian dentro de los que gastan mas de 1.000 pesos es de %f porciento.",porc_diez);
	
}
