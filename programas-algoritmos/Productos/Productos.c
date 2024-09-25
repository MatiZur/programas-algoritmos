/* Se desea llevar a cabo el registro de ventas en un negocio. Por cada venta se ingresan el código
de producto (1- Electrónicos | 2- Alimentos | 3- Ropa) y el valor de la venta. Continúa la lectura
hasta que se ingresa una venta con valor 0. Se realizan en un máximo de 10 ventas. Mostrar:
1. Valor de la venta más baja y su código de producto.
2. Porcentaje de las ventas de ropa y valor de la más cara.
3. Precio promedio de alimentos.
4. Dentro de los electrónicos, qué porcentaje superó los 20000 pesos.
Puede ser que no se registren ventas. Repetir esto para 3 sucursales e informar:
5. Monto total vendido por sucursal.
6. Qué sucursal vendió más.
7. Rango de los productos vendidos y a qué código pertenecen. */
#include <stdio.h>
int i, N=3, cont=0, sucu=1, valor, code, min, minCode, minTotal, minTotalCode, max, acumUno=0, acumDos=0, acumTres=0, maxCont, sucuMax, maxTotal, maxTotalCode;
float elec=0, elecVeinte=0, alim=0, acumAlim=0, ropa=0, porcRopa, promAlim, porcElec;
main(){
	printf("Antony Matheus dos Santos, conocido simplemente como Antony, es un futbolista brasilero. Pertenece al Manchester United de la Premier League de Inglaterra.\n\n\n");
	for(i=0;i<N;i++){
		printf("Ingrese el valor de la venta %d de la sucursal %d: ",cont+1,sucu);
		scanf("%d",&valor);
		while(valor!=0 && cont<10){
			cont++;
			do{
				printf("Ingrese el codigo de producto %d de la sucursal %d: ",cont,sucu);
				scanf("%d",&code);
				if(code<1 || code>3){
					printf("\nIngresa una opcion valida. Recorda que 1- Electronicos | 2- Alimentos | 3- Ropa.\n\n");
				}
			}while(code<1 || code>3);
			if(cont==1 || valor<min){
				min=valor;
				minCode=code;
				if((cont==1 && sucu==1) || valor<minTotal){
					minTotal=valor;
					minTotalCode=code;
				}
			}
			if(code==1){
				elec++;
				if(valor>20000){
					elecVeinte++;
				}
			}
			else if(code==2){
				alim++;
				acumAlim=valor+acumAlim;
			}
			else if(code==3){
				ropa++;
				if(ropa==1 || valor>max){
					max=valor;
				}
			}
			if(sucu==1){
				acumUno=valor+acumUno;
			}
			else if(sucu==2){
				acumDos=valor+acumDos;
			}
			else if(sucu==3){
				acumTres=valor+acumTres;
			}
			if((cont==1 && sucu==1) || valor>maxTotal){
				maxTotal=valor;
				maxTotalCode=code;
			}
			if(cont<10){
				printf("\nIngrese el valor de la venta %d de la sucursal %d: ",cont+1,sucu);
				scanf("%d",&valor);
			}
		}
		if(sucu==1 || cont>maxCont){
			maxCont=cont;
			sucuMax=sucu;
		}
		porcRopa=ropa*100/cont;
		promAlim=acumAlim/alim;
		porcElec=elecVeinte*100/elec;
		printf("\nLa venta mas baja fue de %d pesos con codigo de producto ",min);
		if(minCode==1){
			printf("electronicos");
		}
		else if(minCode==2){
			printf("alimentos");
		}
		else if(minCode==3){
			printf("ropa");
		}
		printf(".\nEl %f%c de las ventas fue de ropa siendo la mas cara de ellas de %d pesos.",porcRopa,37,max);
		printf("\nEl precio promedio de los alimentos fue de %f pesos.",promAlim);
		printf("\nDentro de los electronicos, el %f%c supero los 20000 pesos.\n\n\n",porcElec,37);
		cont=0;
		min=0;
		elec=0;
		elecVeinte=0;
		alim=0;
		acumAlim=0;
		ropa=0;
		max=0;
		sucu++;
	}
	printf("\nLa sucursal uno vendio un total de %d pesos, la dos %d y la tres %d.",acumUno,acumDos,acumTres);
	printf("\nLa sucursal que mas vendio fue la ");
	if(sucuMax==1){
		printf("uno");
	}
	else if(sucuMax==2){
		printf("dos");
	}
	else if(sucuMax==3){
		printf("tres");
	}
	printf(" con %d productos vendidos.",maxCont);
	printf("\nEl rango va de %d pesos codigo ",minTotal);
	if(minTotalCode==1){
		printf("electronicos");
	}
	else if(minTotalCode==2){
		printf("alimentos");
	}
	else if(minTotalCode==3){
		printf("ropa");
	}
	printf(" hasta %d pesos codigo ",maxTotal);
	if(maxTotalCode==1){
		printf("electronicos");
	}
	else if(maxTotalCode==2){
		printf("alimentos");
	}
	else if(maxTotalCode==3){
		printf("ropa");
	}
	printf(".");
}
