/* Realizar un programa que lea 3 notas e imprima el promedio, modificar el programa para mostrar cuantas de estas
notas estan aprobadas, mostrar porcentaje de desaprobadas */
#include <stdio.h>
#include <stdlib.h>
float nota, acum=0, prom=0, porc=0;
int i, n=3, cont, desapro;
main()
{
	for(i=0;i<3;i++)
	{
		printf("Ingrese nota: ");
		scanf("%f",&nota);
		acum=acum+nota;
		if(nota>=6)
		{
			cont=cont+1;
		}
		else
		{
			desapro=desapro+1;
		}
	}	
	prom=acum/n;
	porc=desapro*100/n;
	printf("Su promedio es de %f. Usted aprobo %d prueba/s. El porcentaje de pruebas desaprobadas es de %f porciento.",prom,cont,porc);
}
