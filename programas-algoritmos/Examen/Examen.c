/* Se almacenan en un vector las calificaciones de 5 examenes. Mostrar:
1. Entre los aprobados, que porcentajes fueron 9s y 10s
2. Nota maxima entre los desaprobados y su posicion de memoria
3. Posiciones de memoria de las notas menores al promedio
4. Posiciones de memoria de las notas mayores a un valor que ingrese el usuario
5. Mostrar el vector ordenado de menor a mayor */
#include <stdio.h>
int i, N=5, notas[5], apro, alto, maxDesapro, iMaxDesapro, j, aux, buscado, encontrado;
float acumTotal, porcAlto, promTotal;
main(){
	for(i=0;i<N;i++){
		printf("Ingrese la nota del examen %d: ",i);
		scanf("%d",&notas[i]);
		if(notas[i]>=6){
			apro=apro+1;
			if(notas[i]>=9){
				alto=alto+1;
			}
		}
		if(notas[i]<6){
			if(notas[i]>maxDesapro){
				maxDesapro=notas[i];
				iMaxDesapro=i;
			}
		}
		acumTotal=notas[i]+acumTotal;
	}
	porcAlto=alto*100/apro;
	promTotal=acumTotal/N;
	printf("Entre los aprobados, el porcentaje de 9s y 10s es de %f porciento.",porcAlto);
	printf("\nLa nota maxima entre los desaprobados fue un %d del examen %d.",maxDesapro,iMaxDesapro);
	printf("\nLas posiciones de memoria de las notas menores al promedio (%f) son:",promTotal);
	for(i=0;i<N;i++){
		if(notas[i]<promTotal){
			printf(" %d",i);
		}
	}
	printf(".\nLas notas ordenadas de menor a mayor quedan:");
	for(j=1;j<N;j++){
		for(i=0;i<N-j;i++){
			if(notas[i]>notas[i+1]){
				aux=notas[i];
				notas[i]=notas[i+1];
				notas[i+1]=aux;
			}
		}
	}
	for(i=0;i<N;i++){
		printf(" %d",notas[i]);
	}
	printf(".\n\nIngrese una nota: ");
	scanf("%d",&buscado);
	for(i=0;i<N;i++){
		if(buscado<notas[i]){
			printf("Se encontro una nota mayor a la ingresada en la posicion %d\n",i);
			encontrado=1;
		}
	}
	if(encontrado==0){
		printf("No se encontro una nota mayor a la ingresada.");
	}
}
