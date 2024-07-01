#include <stdio.h>
#include <stdlib.h>
#define pi 3.141592
float sup_circ, rad_circ;
main()
{
	printf("Ingrese el radio del circulo: ");
	scanf("%f", & rad_circ);
	sup_circ=rad_circ *rad_circ*pi;
	printf("La superficie aproximada de su circulo es %f",sup_circ);
	getch();
}
