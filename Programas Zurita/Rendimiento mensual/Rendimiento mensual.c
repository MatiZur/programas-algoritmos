#include <stdio.h>
#include <stdlib.h>
float dinero_disp, rendi_anual, rendi_mensual;
main()
{
	printf("Ingrese el dinero disponible: ");
	scanf("%f",&dinero_disp);
	printf("Ingrese el rendimiento anual de su billetera virtual: ");
	scanf("%f",&rendi_anual);
	rendi_mensual=(rendi_anual/12)*dinero_disp/100;
	printf("Su rendimiento mensual es $%f",rendi_mensual);
	getch();
}
