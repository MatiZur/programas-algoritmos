/* Una concesionaria tiene 4 sucursales y vende 4 modelos de autos diferentes. Mostrar mediante un menú:
1. Total de autos vendidos por sucursal y cuál vendió más autos.
2. Promedio por modelo y en qué sucursal se vendieron menos unidades de cada modelo.
3. Traza, mínimo valor de la matriz y su posición de memoria.
4. Qué porcentaje de las sucursales vendieron más de 200 autos en total.
Almacenar en un vector el nombre de los modelos de los autos. */

#include <stdio.h>
int i, j, N=4, autos[4][4], acum=0, max, maxSuc, traza=0, min, minSuc, minVal, minI, minJ, dosc=0;
float acumF=0, prom, porc;
main(){
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("Ingrese los autos vendidos del modelo %d de la sucursal %d: ",j+1,i+1);
			scanf("%d",&autos[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			acum=acum+autos[i][j];
		}
		printf("\nLa sucursal %d vendio un total de %d autos.",i+1,acum);
		if(i==0 || acum>max){
			max=acum;
			maxSuc=i;
		}
		acum=0;
	}
	printf("\nLa sucursal que mas autos vendio fue la %d con %d autos vendidos.\n",maxSuc+1,max);
	for(j=0;j<N;j++){
		for(i=0;i<N;i++){
			acumF=acumF+autos[i][j];
		}
		prom=acumF/N;
		printf("\nEl promedio de autos vendidos del modelo %d es de %f autos.",j+1,prom);
		if(j==0 || acumF<min){
			min=acumF;
			minSuc=i;
		}
		acumF=0;
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j){
				traza=traza+autos[i][j];
			}
			if((i==0 && j==0) || autos[i][j]<minVal){
				minVal=autos[i][j];
				minI=i;
				minJ=j;
			}
		}
	}
	printf("\n\nLa traza es de %d.\nEl minimo valor de la matriz fue de %d con posicion de memoria (%d;%d).",traza,minVal,minI,minJ);
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			acum=acum+autos[i][j];
		}
		if(acum>200){
			dosc++;
		}
		acum=0;
	}
	porc=dosc*100/N;
	printf("\n\nEl %f%c de las sucursales vendieron mas de 200 autos en total.",porc,37);
}
