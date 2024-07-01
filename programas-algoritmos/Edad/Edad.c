#include <stdio.h>
#include <stdlib.h>
#define anio_act 2024
int anio_nac, edad;
main(){
	printf("Ingrese su a%co de nacimiento: ",164);
	scanf("%d",&anio_nac);
	edad=anio_act-anio_nac;
	printf("Su edad aproximada es %d",edad);
	getch();
}
