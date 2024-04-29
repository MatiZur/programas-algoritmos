#include <stdio.h>
#include <stdlib.h>
float num;
main()
{
	printf("Ingrese su numero: ");
	scanf("%f",&num);
	if(num>0)
	{
		printf("Su numero es positivo.");
	}
	else
	{
		if(num==0)
		{
			printf("Su numero es cero.");
		}
		else
		{
			printf("Su numero es negativo.");
		}
	}
	getch();
}
