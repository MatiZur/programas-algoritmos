/* Se leen los valores de las precipitaciones a lo largo de un mes en milimetros. Finaliza la carga al ingresar un valor negativo. Puede ser
que ese mes no se hayan provocado lluvias. Indicar:
1. Porcentaje de las lluvias que superaron los 3 milimetros
2. Dia en el que mas llovio
3. Promedio entre las precipitaciones menores a 3 milimetros
4. Entre los dias en los que las lluvias fueron menores a 5 milimetros, que porcentaje supero los 3.5 milimetros
*/
#include <stdio.h>
int preci, dia=1, max, diaMax;
float cont, contTres, contMeTres, acumTres, contCinco, contTresCinco, porcTres, promTres, porcTresCinco;
main(){
	printf("Ingrese la precipitacion del dia %d (en mm): ",dia);
	scanf("%d",&preci);
	while(preci>=0 && cont<30){
		cont++;
		dia++;
		if(preci>3){
			contTres=contTres+1;
		}
		else{
			contMeTres=contMeTres+1;
			acumTres=acumTres+preci;
		}
		if(dia==2 || preci>max){
			max=preci;
			diaMax=cont;
		}
		if(preci<5){
			contCinco=contCinco+1;
			if(preci>3.5){
				contTresCinco=contTresCinco+1;
			}
		}
		printf("Ingrese la precipitacion del dia %d (en mm): ",dia);
		scanf("%d",&preci);
	}
	if(cont!=0){
		porcTres=contTres*100/cont;
		if(acumTres!=0){
			promTres=acumTres/contMeTres;
		}
		porcTresCinco=contTresCinco*100/contCinco;
		printf("\nEl porcentaje de las lluvias que superaron los 3mm es de %f%c.",porcTres,37);
		printf("\nEl dia en el que mas llovio fue el %d con precipitacion de %dmm.\n",diaMax,max);
		if(contMeTres!=0){
				printf("El promedio entre las precipitaciones menores a 3mm es de %fmm.",promTres);
		}
		else{
			printf("No hubo precipitaciones menores a 3mm.");	
		}
		printf("\n");
		if(contCinco!=0){
			printf("Entre los dias en los que las lluvias fueron menores a 5mm, el %f%c supero los 3.5mm.",porcTresCinco,37);
		}
		else{
			printf("No hubo precipitaciones menores a 5mm");
		}
	}
	else{
		printf("\nSos boludo?");
	}
}
