/* Ah� la tiene Marcus Rashford, lo marca Mikolenko... Afuera esta Dalot coloca el centro Dalooot... GARNACHOOOOOOOOOOOOOOOOOOOOOOOOOO
Se almacenan en un vectorga los totales facturados en un negocio en cinco dias. La posici�n de memoria corresponde al d�a. Informar:
1. Porcentaje de los d�as en los que se facturo m�s de 3.500 peso.
2. D�az en los cuales la facturaci�n super� el promedio.
3. D�a de menor facturaci�n.
4. Promedio entre los d�az en los que la facturaci�n fue mayor a 10.000 peso.
5. Si hubo alg�n d�a en donde la facturaci�n haya sido 1.234 peso. En caso afirmativo, informar qu� d�a fue. */
#include <stdio.h>
int fact[5], i, N=5, min, dia_min, raro, contProm;
float tresMilQui, contDiezMil, acumDiezMil, contTotal, acumTotal, promTotal, porcTresMilQui, promDiezMil;
main(){
	for(i=0;i<N;i++){
		printf("Ingrese el total facturado del dia %d: ",i);
		scanf("%d",&fact[i]);
		if(fact[i]>3500){
			tresMilQui=tresMilQui+1;
		}
		if(i==0 || fact[i]<min){
			min=fact[i];
			dia_min=i;
		}
		if(fact[i]>10000){
			contDiezMil=contDiezMil+1;
			acumDiezMil=acumDiezMil+fact[i];
		}
		if(fact[i]==1234){
			raro=i;
		}
		contTotal=contTotal+1;
		acumTotal=acumTotal+fact[i];
	}
	promTotal=acumTotal/contTotal;
	for(i=0;i<N;i++){
		if(fact[i]>promTotal){
			contProm=contProm+1;
		}
	}
	porcTresMilQui=tresMilQui*100/N;
	if(contDiezMil>0){
		promDiezMil=acumDiezMil/contDiezMil;
	}
	printf("El porcentaje de los dias en los que se facturo mas de 3500 pesos fue del %f porciento.\n",porcTresMilQui);
	printf("La facturacion promedio (%f) fue superada %d de los 5 dias.\n",promTotal,contProm);
	printf("El dia de menor facturacion fue el %d con %d pesos facturados.\n",dia_min,min);
	if(contDiezMil>0){
		printf("El promedio entre los dias en los que la facturacion fue mayor a 10000 pesos fue de %f.\n",promDiezMil);
	}
	else{
		printf("No hubo dia/s en los que la facturacion haya sido mayor a 10000 pesos.\n");
	}
	if(raro==0){
		printf("No hubo dia/s en los que la facturacion haya sido de 1234 pesos.");
	}
	if(raro>0){
		printf("La facturacion fue de 1234 pesos el dia %d.",raro);
	}
}
