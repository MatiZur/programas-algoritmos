#include <stdio.h>
#include <stdlib.h>
#define anio_act 2024
#define mes_act 4
#define dia_act 29
int anio_nac, mes_nac, dia_nac, edad;
main()
{
	printf("Ingrese su dia, mes y a%co de nacimiento separados con un espacio: ",164);
	scanf("%d %d %d",&dia_nac,&mes_nac,&anio_nac);
	edad=anio_act-anio_nac;
	if(mes_nac<=mes_act)
	{
		if(mes_nac=mes_act)
		{
			if(dia_nac<=dia_act)
			{
				printf("Su edad es %d",edad);
			}
			else
			{
				edad=edad-1;
				printf("Su edad es %d",edad);
			}
		}
		else
		{
			printf("Su edad es %d",edad);
		}
	}
	else
	{
		edad=edad-1;
		printf("Su edad es %d",edad);
	}
	getch();
}
