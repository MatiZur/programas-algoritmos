/* Para procesar a lo celso la policia necesita un programa que procese los datos de 8 personas maximo (por que, no?). Se leen de cada persona su genero y edad.
Puede ser que lo celso no sea procesado. Finaliza el programa al ingresar 0 como edad. Mostrar:
1. Porcentaje de cada genero
2. Edad menor masculina y edad mayor entre todos los censados
3. Promiedo de las edades entre todos los censados y promiedo de edades masculinas
4. Que porcentaje de las mujeres son menores a 40 años
5. Entre los mayores a 50, que porcentaje son varones
6. Si Lo Celso va a ser detenido */
#include <stdio.h>
int i, edad, genero, min, max;
float hombres, mujeres, acumHombres, acumTotal, cuarenta, cincuenta, viejo, porcHom, porcMuj, promTot, promHom, porcCua, porcCin;
main(){
	printf("Hola, bienvenido al programa para procesar a Giovanni Lo Celso. Recuerde que 1 es hombre y 2 es mujer.\n");
	do{
		printf("Ingrese edad: ");
		scanf("%d",&edad);
		if(edad!=0){
			i++;
			printf("Ingrese genero: ");
			scanf("%d",&genero);
			if(genero==1){
				hombres=hombres+1;
				if(hombres==1 || edad<min){
					min=edad;
				}
				acumHombres=edad+acumHombres;
			}
			else{
				mujeres=mujeres+1;
				if(edad<40){
					cuarenta=cuarenta+1;
				}
			}
			if(i==1 || edad>max){
				max=edad;
			}
			acumTotal=edad+acumTotal;
			if(edad>50){
				cincuenta=cincuenta+1;
				if(genero==1){
					viejo=viejo+1;
				}
			}
		}
	}while(i<8 && edad!=0);
	if(i>0){
		porcHom=hombres*100/i;
		porcMuj=mujeres*100/i;
		promTot=acumTotal/i;
		promHom=acumHombres/hombres;
		porcCua=cuarenta*100/mujeres;
		porcCin=viejo*100/cincuenta;
		printf("\nEl porcentaje de hombres es de %f%c y el de mujeres %f%c.",porcHom,37,porcMuj,37);
		printf("\nLa edad menor masculina fue de %d a%cos y la edad mayor entre todos los censados fue de %d a%cos.",min,164,max,164);
		printf("\nEl promedio de las edades de todos los censados fue de %f a%cos y el de los hombres fue de %f a%cos.\n",promTot,164,promHom,164);
		if(mujeres!=0){
			printf("El porcentaje de las mujeres que son menores a 40 a%cos fue de %f%c.",164,porcCua,37);
		}
		else{
			printf("No hubo mujeres menores a 40 a%cos.",164);
		}
		if(cincuenta!=0){
			printf("\nEntre los mayores a 50, el %f%c son varones.",porcCin,37);
		}
		else{
			printf("\nNo hubo personas mayores a 50 a%cos.",164);
		}
	}
	printf("\nLo Celso va a ser detenido.");
}
