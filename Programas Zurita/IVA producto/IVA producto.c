#include <stdio.h>
#include <stdlib.h>
float precio, iva;
main()
{
	printf("Ingrese el precio del producto: ");
	scanf("%f",&precio);
	iva=21*precio/100;
	printf("El IVA de su producto es $%f",iva);
	getch();
}
