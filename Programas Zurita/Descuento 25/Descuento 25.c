#include <stdio.h>
#include <stdlib.h>
float precio_prod, precio_descu, descu;
main()
{
	printf("Ingrese el precio del producto: ");
	scanf("%f",&precio_prod);
	descu=precio_prod*25/100;
	printf("El monto del descuento es $%f. ",descu);
	precio_descu=precio_prod-descu;
	printf("El total a pagar es $%f",precio_descu);
	getch();
}
