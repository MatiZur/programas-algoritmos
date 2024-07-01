/* Se desea realizar un programa para procesar la cantidad de personas que usan el tren. En cada estación, se lee la cantidad de personas que ingresan.
Son 10 estaciones. Mostrar:
1. Porcentaje de las estaciones donde subieron más de 100 personas.
2. Número de estación en la que subió menos gente.
3. Promedio de las personas que suben por estación.
4. Promedio entre las estaciones en las que subieron más de 250 personas.
5. Máximo de personas entre las estaciones que hubo más de 250 pasajeros. */
#include <stdio.h>
int i, N=10, est, min_est, max;
float pasajeros, min, cien, acum, porc_cien, cont, acum_tot, prom_tot, prom;
main(){
	for(i=0;i<N;i++){
		est=i+1;
		printf("Ingrese la cantidad de personas que ingresaron en la estacion %d: ",est);
		scanf("%f",&pasajeros);
		if(pasajeros>100){
			cien=cien+1;
		}
		if(i==0 || pasajeros<min){
			min=pasajeros;
			min_est=est;
		}
		if(pasajeros>250){
			acum=acum+pasajeros;
			cont=cont+1;
			if(i==0 || pasajeros>max){
				max=pasajeros;
			}
		}
		acum_tot=acum_tot+pasajeros;
	}
	porc_cien=cien*100/N;
	prom_tot=acum_tot/N;
	prom=acum/cont;
	printf("El porcentaje de las estaciones donde subieron mas de 100 personas es de %f porciento.\nLa estacion en la que subio menos gente fue la %d.\nEl promedio de las personas que subieron por estacion es de %f.\n",porc_cien,min_est,prom_tot);
	if(cont>0){
		printf("El promedio entre las estaciones en las que subieron mas de 250 personas es de %f.\nLa maxima cantidad de personas que subieron entre las estaciones donde subieron mas de 250 es de %d.",prom,max);
	}
	else{
		printf("No hubo estaciones en las que subieron mas de 250 personas.");
	}
}
