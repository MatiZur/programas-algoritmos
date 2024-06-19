/* Se ingresan la cantidad de ventas y el monto total facturado en un negocio por dia a lo largo de una semana. Mostrar:
1. Día en el que hubo más ventas y cuánto se facturó.
2. Día en el que más se facturó.
3. Cuántos días se realizaron más de 10 ventas. Expresar en porcentaje.
4. Promedio de los días en los que se facturó más de 5.000 pesos.
5. Promedio de ventas los días en los que se facturó menos de 10.000 pesos. */
#include <stdio.h>
int i, N=7, dia, dia_max_ventas, dia_monto_max;
float ventas, monto, max, monto_dia_max_ventas, monto_max, may_diez, may_cincomil, acum_cincomil, may_diezmil, acum_diezmil, porc, prom_cincomil, prom_ventas_diezmil;
main(){
	for(i=0;i<N;i++){
		dia=i+1;
		printf("Ingrese la cantidad de ventas del dia %d: ",dia);
		scanf("%f",&ventas);
		printf("Ingrese el monto total facturado del dia %d: ",dia);
		scanf("%f",&monto);
		if(i==0 || ventas>max){
			max=ventas;
			dia_max_ventas=dia;
			monto_dia_max_ventas=monto;
		}
		if(i==0 || monto>max){
			monto_max=monto;
			dia_monto_max=dia;
		}
		if(ventas>10){
			may_diez=may_diez+1;
		}
		if(monto>5000){
			may_cincomil=may_cincomil+1;
			acum_cincomil=acum_cincomil+monto;
			if(monto>10000){
				may_diezmil=may_diezmil+1;
				acum_diezmil=acum_diezmil+ventas;
			}
		}
	}
	porc=may_diez*100/N;
	prom_cincomil=acum_cincomil/may_cincomil;
	prom_ventas_diezmil=acum_diezmil/may_diezmil;
	printf("El dia en el que hubo mas ventas fue el %d donde se facturo %f pesos.\nEl dia en el que mas se facturo fue el %d.\nEl porcentaje de dias con mas de 10 ventas es de %f.\n",dia_max_ventas,monto_dia_max_ventas,dia_monto_max,porc);
	if(may_cincomil>0){
		printf("El promedio de los montos en los dias en los que se facturo mas de 5000 pesos es de %f.",prom_cincomil);
		if(may_diezmil>0){
			printf("\nEl promedio de cantidad de ventas en los dias en los que se facturo mas de 10000 pesos es de %f.",prom_ventas_diezmil);
		}
		else{
			printf("\nNo hubo dias en los que se facturo mas de 10000 pesos.");
		}
	}
	else{
			printf("No hubo dias en los que se facturo mas de 5000 ni 10000 pesos.");
	}
}
