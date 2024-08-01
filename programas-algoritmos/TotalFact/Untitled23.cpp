//Se almacenan en un vector los totales facturados en un negocio en 5 dias. La posicion de memoria corresponde al dia, informar:
//1. porcentaje de los dias en los que se facturo mas de 3400 pesos
//2. dias en los cuales la facturacion supero el promedio
//3. dia de menor facturacion
//4. promedio entre los dias en los que la facturacion fue mayor a 10 mil
//5. si hubo algun dia en donde la facturacion sido 1234. en caso afirmativo, informar que dia fue 

#include <stdio.h>
main(){
	for(i=0;i<n;i++){
		printf("ingresar el total facturado: ", i);
		scanf("%f", &vector[i]);
		
		if(i==0||men_fac>vector[i]){
			men_fac=vector[i];
			dia_m=i++
		}
		
		acum=acum+vector[i];
		
		if(vector[i]>3400){
			cont1++;
		}
		
		
	}
	prom_may=acum/n
	
	for(i=0;i<n;i++){
		
		if(vector[i]>prom_may){
			cont2++;
			printf("-%d  ", i); 
		}
	}
	
}
