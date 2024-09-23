/* Este programa transcurre en una guardia médica. Se leen la cantidad de doctores que tomaron la guardia. Cada médico atiende a cuatro
pacientes máximo y puede no atender a ninguno. Se leen la edad de cada paciente y si tiene o no obra social. Mostrar:
1. Edad del paciente más joven, qué número de doctor lo atendió y si tenía obra social.
2. Porcentaje de pacientes sin cobertura por doctor.
3. Porcentaje de pacientes mayores de 80 años por médico y entre todos los médicos.
4. Edad del paciente más joven por doctor.
5. Promedio de edad entre los pacientes por cada médico. */
#include <stdio.h>
int doc, i, edad, pac=0, obra, min, minTotal, minDoc, minObra;
float totalPac, sinObra, ochenta, ochentaTotal, acumEdad, porcSinObra, porcOchenta, promEdad, porcOchentaTotal;
main(){
	printf("Cuantos doctores tomaron guardia pa?: ");
	scanf("%d",&doc);
	for(i=1;i<doc+1;i++){
		printf("\nIngrese la edad del paciente %d doctor %d: ",pac+1,i);
		scanf("%d",&edad);
		while(edad!=0 && pac<4){
			pac++;
			totalPac++;
			printf("Ingrese si el paciente %d doctor %d tiene obra social o no: ",pac,i);
			scanf("%d",&obra);
			if(pac==1 || edad<min){
				min=edad;
				if(pac==1 || edad<minTotal){
					minTotal=edad;
					minDoc=doc;
					minObra=obra;
				}
			}
			if(obra==2){
				sinObra++;
			}
			if(edad>80){
				ochenta++;
				ochentaTotal++;
			}
			acumEdad=edad+acumEdad;
			if(pac<4){
				printf("Ingrese la edad del paciente %d doctor %d: ",pac+1,i);
				scanf("%d",&edad);
			}
		}
		porcSinObra=sinObra*100/pac;
		porcOchenta=ochenta*100/pac;
		promEdad=acumEdad/pac;
		printf("\nEl %f%c de los pacientes no tenia cobertura.\n",porcSinObra,37);
		printf("El %f%c de los pacientes tenia mas de 80 anios.\n",porcOchenta,37);
		printf("El paciente mas joven fue de %d anios.\n",min);
		printf("El promedio de edad entre los pacientes fue de %f.\n",promEdad);
		pac=0;
		min=0;
		sinObra=0;
		ochenta=0;
		acumEdad=0;
	}
	porcOchentaTotal=ochentaTotal*100/totalPac;
	printf("\n\nEl paciente mas joven fue de %d anios, quien fue atendido por el doctor %d y ",minTotal,minDoc);
	if(minObra==2){
		printf("no ");
	}
	printf("tenia cobertura medica.");
	printf("\nEl porcentaje de pacientes mayores de 80 anios entre todos los medicos fue de %f%c",porcOchentaTotal,37);
}
