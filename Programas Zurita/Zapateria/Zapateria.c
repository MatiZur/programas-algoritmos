#include <stdio.h>
#include <stdlib.h>
int reg, numcuotas, porcdesc;
float valor, total, descu, cuota;
main(){
	printf("%cEs usted un cliente registrado? \n 1. S%c\n 2. No\nIngrese el n%cmero correspondiente: ",168,161,163);
	scanf("%d",&reg);
	if (reg == 1 || reg == 2){
		printf("Ingrese el precio de su compra: ");
		scanf("%f",&valor);
		printf("Ingrese la cantidad de cuotas en las que desea pagar: ");
		scanf("%d",&numcuotas);
		total=valor;
		if(valor>100000){
			if(valor>200000){
				if(valor>300000){
					porcdesc=30;
				}
				else{
					porcdesc=25;
				}
			}
			else{
					porcdesc=10;
			}
		}
		else{
			porcdesc=0;
		}
		if(reg == 1){
			porcdesc=porcdesc+5;
		}
		total=valor-(valor/100*porcdesc);
		descu=valor/100*porcdesc;
		printf("El total a pagar es $%f.\nSu descuento es de $%f.",total,descu);
		if(numcuotas != 1){
			cuota=total/numcuotas;
			printf("\nEl precio de cada cuota es de $%f.",cuota);
		}
	}
	else{
		printf("El n%cmero ingresado no corresponde con ninguna de las opciones.",163);
	}
	getch();
}
