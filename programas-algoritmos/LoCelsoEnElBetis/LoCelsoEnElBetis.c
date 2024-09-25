/* Para procesar a Lo Celso se necesita un programa que determine:
1. El promedio de edad.
2. Qué porcentaje de los censados es de género masculino.
3. La edad máxima de las mujeres.
4. Qué porcentaje de los mayores de edad son varones.
Se cargan por cada censado su género y edad. Finaliza la carga al ingresar 0 como edad. Pueden existir 0 o más censados.
Modificar el programa anterior para poder calcular lo solicitado anteriormente en tres (perrito) barrios. Mostrar también en
qué barrio se censaron más personas, edad mínima entre todos los (perrito) barrios y a qué barrio pertenece. */
#include <stdio.h>
int i, N=3, num=0, bar=1, edad, gen, max, min, minBar, maxPer, maxBar;
float acumEdad=0, hom=0, muj=0, may=0, mayHom=0, promEdad, porcHom, porcMayHom;
main(){
	printf("Bienvenido al segundo programa para procesar a Lo Celso, actual jugador del Betis.\n");
	for(i=0;i<N;i++){
		printf("\n\n\nIngrese la edad del censado %d del barrio %d: ",num+1,bar);
		scanf("%d",&edad);
		while(edad>0){
			num++;
			printf("Ingrese el genero del censado %d del barrio %d: ",num,bar);
			scanf("%d",&gen);
			acumEdad=edad+acumEdad;
			if(gen==1){
				hom++;
			}
			else if(gen==2){
				muj++;
				if(muj==1 || edad>max){
					max=edad;
				}
			}
			if(edad>=18){
				may++;
				if(gen==1){
					mayHom++;
				}
			}
			if(num==1 || edad<min){
				min=edad;
				minBar=bar;
			}
			printf("\nIngrese la edad del censado %d del barrio %d: ",num+1,bar);
			scanf("%d",&edad);
		}
		if(num!=0){
			if(bar==1 || num>maxPer){
				maxPer=num;
				maxBar=bar;
			}
			promEdad=acumEdad/num;
			porcHom=hom*100/num;
			porcMayHom=mayHom*100/may;
			printf("\nEl promedio de edad es de %f a%cos.",promEdad,164);
			printf("\nEl %f%c de los censados es de genero masculino.",porcHom,37);
			printf("\nLa edad maxima de las mujeres es de %d a%cos.",max,164);
			printf("\nEl %f%c de los mayores de edad son varones.\n",porcMayHom,37);
		}
		num=0;
		hom=0;
		muj=0;
		may=0;
		mayHom=0;
		acumEdad=0;
		bar++;
	}
	printf("\n\n\nSe censaron mas personas en el barrio %d (%d).",maxBar,maxPer);
	printf("\nLa edad minima entre todos los barrios es de %d a%cos del barrio %d.",min,164,minBar);
}
