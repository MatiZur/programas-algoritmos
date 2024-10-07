#include <stdio.h>
int matriz[3][3], i, j, N=3;
main(){
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("Ingrese valor para la fila %d columna %d: ",i,j);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			printf("%d ",matriz[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for(i=0;i<N;i++){
		for(j=0;j<N;j++){
			if(i==j){
				printf("%d ",matriz[i][j]);
			}
		}
	}
}
