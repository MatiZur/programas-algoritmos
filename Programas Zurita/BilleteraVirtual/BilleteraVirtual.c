/* Se ingresan las tasas de rendimiento anual de una billetera virtual y un plazo fijo. Leer el plazo en meses y el monto a depositar e imprimir el total
que retiraría el cliente. */
#include <stdio.h>
int i, N;
float rend, rend_mes, monto, monto_mes, acum;
main(){
	printf("Ingrese la tasa de rendimiento anual de la billetera virtual: ");
	scanf("%f",&rend);
	printf("Ingrese el plazo fijo en meses: ");
	scanf("%d",&N);
	printf("Ingrese el monto a depositar: ");
	scanf("%f",&monto);
	rend_mes=rend/12;
	if(i=0){
		monto_mes=monto;
	}
	for(i=0;i<N;i++){
		monto_mes=monto_mes+(monto/100*rend_mes);
		acum=acum+monto_mes;
	}
	printf("El total a retirar es de %f",acum);
}
