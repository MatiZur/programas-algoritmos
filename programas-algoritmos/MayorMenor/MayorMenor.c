#include <stdio.h>
#include <stdlib.h>
float edad;
main()
{
	printf("Ingrese su edad: ");
	scanf("%f",&edad);
	if(edad>=18)
	{
		printf("Usted es mayor de edad.");
	}
	else
	{
		printf("Usted es menor de edad.");
	}
	getch();
}
