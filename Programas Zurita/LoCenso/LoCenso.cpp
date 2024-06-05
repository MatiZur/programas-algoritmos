/* Se desea procesar los datos de un censo. Se leen la edad y el género de 10 personas. Informar:
1. Qué porcentaje de varones son menores de edad.
2. Qué porcentaje de mayores de edad son mujeres.
3. Porcentaje de personas no binarias.
4. Edad máxima y a qué género corresponde.
5. Promedio de edad de las mujeres.
6. Edad máxima de los hombres. */
#include <stdio.h>
#include <stdlib.h>
int i, N=10, edad, sexo, max, maxVar, maxEdad;
float cantVar=0, cantVarMen=0, cantMay=0, cantMayMuj=0, cantNoBin=0, cantMuj=0, acumMuj=0, porcVarMen=0, porcMayMuj=0, porcNoBin=0, promMuj=0;
main(){
	for(i=0;i<N;i++){
		printf("Ingrese edad: ");
		scanf("%d",&edad);
		printf("Ingrese 1 si es hombre, 2 si es mujer, 3 si es no binario: ");
		scanf("%d",&sexo);
		if(sexo==1){
			cantVar=cantVar+1;
			if(edad<18){
				cantVarMen=cantVarMen+1;
			}
			if(i==0 || edad>maxVar){
				maxVar=edad;
			}
		}
		if(edad>=18){
			cantMay=cantMay+1;
			if(sexo==2){
				cantMayMuj=cantMayMuj+1;
			}
		}
		if(sexo==3){
			cantNoBin=cantNoBin+1;
		}
		if(i==0 || edad>max){
			max=edad;
			if(sexo==1){
				maxEdad=1;
			}
			if(sexo==2){
				maxEdad=2;
			}
			if(sexo==3){
				maxEdad=3;
			}
		}
		if(sexo==2){
			cantMuj=cantMuj+1;
			acumMuj=acumMuj+edad;
		}
	}
	if(cantVar==0){
		cantVar=1;
	}
	if(cantMay==0){
		cantMay=1;
	}
	porcVarMen=cantVarMen*100/cantVar;
	porcMayMuj=cantMayMuj*100/cantMay;
	porcNoBin=cantNoBin*100/10;
	promMuj=acumMuj/cantMuj;
	printf("\nEl porcentaje de los varones menores de edad es de %f porciento.\nEl porcentaje de mayores de edad que son mujeres es de %f porciento.\nEl porcentaje de las personas no binarias es de %f porciento.\nLa edad maxima fue de %d anio/s",porcVarMen,porcMayMuj,porcNoBin,max);
	if(maxEdad==1){
		printf(", quien era hombre.");
	}
	else if(maxEdad==2){
		printf(", quien era mujer.");
	}
	else if(maxEdad==3){
		printf(", quien era no binario.");
	}
	if(cantMuj==0){
		printf("\nNo hay promedio de edad de mujeres ya que ninguno de los censados era mujer.");
	}
	else{
		printf("\nEl promedio de edad de las mujeres es de %f anio/s.",promMuj);
	}
	if(cantVar==0){
		printf("\nNo hay edad maxima de hombres ya que ninguno de los censados era hombre.");
	}
	else{
		printf("\nLa edad maxima de los hombres es de %d anio/s.",maxVar);
	}
}
