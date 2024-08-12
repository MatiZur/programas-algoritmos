/* Se desea realizar un programa para procesar las edades y las notas de un curso. Se leen uno a uno los datos y finaliza el
programa al ingresar 0 como edad. El curso tiene 15 estudiantes y puede ser que ninguno se presente a la evaluacion. Informar
1. Porcentaje de aprobados
2. Promedio entre las calificaciones de los mayores a 18 años
3. Nota minima y a que edad corresponde
4. Promedio de edad entre los desaprobados */
#include <stdio.h>
int i=0, nota, edad, min, edadMin;
float contTotal, contApro, acumMay, contMay, acumDesapro, contDesapro, porcApro, promMay, promDesapro;
main(){
	do{
		i++;
		printf("Ingrese la edad del alumno %d: ",i);
		scanf("%d",&edad);
		if(edad!=0){
			printf("Ingrese la nota del alumno %d: ",i);
			scanf("%d",&nota);
			contTotal=contTotal+1;
			if(nota>=6){
				contApro=contApro+1;
			}
			if(edad>18){
				acumMay=nota+acumMay;
				contMay=contMay+1;
			}
			if(i==1 || nota<min){
				min=nota;
				edadMin=edad;
			}
			if(nota<6){
				acumDesapro=edad+acumDesapro;
				contDesapro=contDesapro+1;
			}
		}
	}while(edad!=0 && i<15);
	porcApro=contApro*100/contTotal;
	promMay=acumMay/contMay;
	promDesapro=acumDesapro/contDesapro;
	printf("\nEl porcentaje de aprobados es de %f porciento.",porcApro);
	printf("\nEl promedio entre las calificaciones de los mayores a 18 a%cos es de %f.",164,promMay);
	printf("\nLa nota m%cnima fue de %d de un alumno de %d a%cos.",161,min,edadMin,164);
	printf("\nEl promedio de edad entre los desaprobados es de %f a%cos.",promDesapro,164);
}
