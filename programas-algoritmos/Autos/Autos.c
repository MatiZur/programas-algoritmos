/* Se desean procesar los datos de los vehículos que ingresan a un taller durante 5 días. Por día, mostrar:
1. Porcentaje de autos particulares.
2. Valor promedio de la atención a autos comerciales.
3. Costo del service más barato y a qué tipo de vehículo fue.
4. Dentro de los servicios que superaron los $200.000, cuántos corresponden a particulares. Expresar en porcentaje.
Por cada cliente se leen el precio del servicio y si el auto es particular o comercial. Puede ser que no haya clientes.
Entre todos los días, mostrar:
5. Valores de los service mínimos y máximos.
6. Valor de atención promedio.
7. Porcentaje de autos particulares.
8. Porcentaje de los días en los que la facturación superó los $600.000.
Finaliza la carga del día al ingresar 0 como auto. */
#include <stdio.h>
int i, N=5, cont=0, dia=1, tipo, valor, min, minTipo, minTotal, maxTotal;
float part=0, comer=0, acumComer=0, dosc=0, doscPart=0, porcPart, promComer, porcDosc, contTotal=0, acumTotal=0, partTotal=0, acum=0, seis=0, promTotal, porcPartTotal, porcSeis;
main(){
	printf("Darwin Gabriel N%c%cez Ribeiro es un futbolista uruguayo que juega como delantero en el Liverpool F. C. de la Premier League de Inglaterra.\n\n\n\n",163,164);
	for(i=0;i<N;i++){
		do{
			printf("Ingrese el tipo de auto del servicio %d dia %d: ",cont+1,dia);
			scanf("%d",&tipo);
			if(tipo<0 || tipo>2){
				printf("\nIngresa una opcion valida. Recorda que 1: Particular, 2: Comercial.\n\n");
			}
		}while(tipo<0 || tipo>2);
		while(tipo!=0){
			cont++;
			contTotal++;
			printf("Ingrese el precio del servicio %d dia %d: ",cont,dia);
			scanf("%d",&valor);
			if(tipo==1){
				part++;
				partTotal++;
			}
			else if(tipo==2){
				comer++;
				acumComer=valor+acumComer;
			}
			if(cont==1 || valor<min){
				min=valor;
				minTipo=tipo;
				if((cont==1 && dia==1) || valor<minTotal){
					minTotal=valor;
				}
			}
			if((cont==1 && dia==1) || valor>maxTotal){
				maxTotal=valor;
			}
			if(valor>200000){
				dosc++;
				if(tipo==1){
					doscPart++;
				}
			}
			acum=valor+acum;
			acumTotal=valor+acumTotal;
			do{
				printf("\nIngrese el tipo de auto del servicio %d dia %d: ",cont+1,dia);
				scanf("%d",&tipo);
				if(tipo<0 || tipo>2){
					printf("\nIngresa una opcion valida. Recorda que 1: Particular, 2: Comercial.\n\n");
				}
			}while(tipo<0 || tipo>2);
		}
		if(cont!=0){
			porcPart=part*100/cont;
			promComer=acumComer/comer;
			porcDosc=doscPart*100/dosc;
			if(acum>600000){
				seis++;
			}
			printf("\nEl %f%c de los servicios fue a autos particulares.",porcPart,37);
			printf("\nEl valor promedio de la atencion a autos comerciales fue de %f pesos.",promComer);
			printf("\nEl costo del service mas barato fue de %d pesos a un auto ",min);
			if(minTipo==1){
				printf("particular");
			}
			if(minTipo==2){
				printf("comercial");
			}
			printf(".\nDentro de los servicios que superaron los 200000 pesos, el %f%c eran particulares.\n\n\n",porcDosc,37);
		}
		else{
			printf("\n\n");
		}
		cont=0;
		part=0;
		comer=0;
		acumComer=0;
		min=0;
		dosc=0;
		doscPart=0;
		acum=0;
		dia++;
	}
	if(contTotal!=0){
		promTotal=acumTotal/contTotal;
		porcPartTotal=partTotal*100/contTotal;
		porcSeis=seis*100/N;
		printf("\nEl valor minimo de service fue de %d pesos y el maximo de %d.",minTotal,maxTotal);
		printf("\nEl valor de atencion promedio fue de %f pesos.",promTotal);
		printf("\nEl %f%c del total fueron autos particulares.",porcPartTotal,37);
		printf("\nEl %f%c de los dias la facturacion supero los 600000 pesos.",porcSeis,37);
	}
	else{
		printf("Pancho");
	}
}
