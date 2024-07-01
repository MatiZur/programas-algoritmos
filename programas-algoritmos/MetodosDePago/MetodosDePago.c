#include <stdio.h>
#include <stdlib.h>
float precio, metodo, precio_desc, precio6, cuotas;
main()
{
	printf("Ingrese el precio del producto: ");
	scanf("%f",&precio);
	printf("Ingrese el numero correspondiente al metodo de pago que elija. \n 1. En efectivo. \n 2. En 3 cuotas. \n 3. En 6 cuotas. \n Metodo elegido: ");
	scanf("%f",&metodo);
	if(metodo==1)
	{
		precio_desc=precio-precio*0.2;
		printf("El total a pagar es %f.",precio_desc);
	}
	else
	{
		if(metodo==2)
		{
			cuotas=precio/3;
			printf("El total a pagar es %f (%f por cuota).",precio,cuotas);
		}
		else
		{
			if(metodo==3)
			{
				precio6=precio+precio*0.2;
				cuotas=precio6/6;
				printf("El total a pagar es %f (%f por cuota).",precio6,cuotas);
			}
			else
			{
				printf("El numero ingresado no corresponde con ningun metodo.");
			}
		}
	}
	getch();
}
