/*
Realizar un programa que lea las edades de 10 personas e indique:
1. Porcentaje de mayores de edad.
2. Cantidad de mayores de 60 años.
3. Promedio de los menores de edad.
*/
#include <stdio.h>
#include <stdlib.h>
float porc, prom, acum;
int i, n=10, edad, mayor, menor, viejo;
main()
{
	for(i=0;i<n;i++)
	{
		printf("Ingrese edad: ");
		scanf("%d",&edad);
		if(edad>=18)
		{
			mayor=mayor+1;
			if(edad>60)
			{
				viejo=viejo+1;
			}
		}
		else
		{
			menor=menor+1;
			acum=acum+edad;
		}
	}
	porc=mayor*100/10;
	prom=acum/menor;
	printf("El porcentaje de mayores de edad es de %f porciento.\nLa cantidad de mayores de 60 anios es de %d personas.\nEl promedio de los menores de edad es de %f anios.",porc,viejo,prom);
	getch();
}
