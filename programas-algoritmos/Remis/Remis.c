#include <stdio.h>
#include <stdlib.h>
int kms_ent, coste;
float kms, resto;
main(){
	printf("Ingrese la distancia en kilometros de su viaje: ");
	scanf("%f",&kms);
	kms_ent=kms;
	resto=kms-kms_ent;
	if(resto>=0.5)
	{
		kms=kms_ent+0.5;
	}
	if(resto<0.5)
	{
		kms=kms_ent;
	}
	if(kms<=12)
	{
		if(kms<=6)
		{
			coste=kms/0.5*350+1000;
		}
		else
		{
			coste=(kms-6)/0.5*250+5200;
		}
	}
	if(kms>12)
	{
		coste=(kms_ent-12)*250+8200;
	}
	printf("La cantidad a pagar de su viaje es de $%d",coste);
}
