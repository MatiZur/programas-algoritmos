/* Enzo Pastrana necesita un programa para su consultorio médico donde se atienden pacientes por presentación espontánea.
Se atienden tres especialidades: 1. Guardia, 2. Odontología, 3. Dermatología. Como máximo se atienden 10 pacientes.
Se leen la edad de cada paciente, y si tiene o no obra social. Finaliza el programa al ingresar 0 como especialidad. Mostrar:
1. Que porcentaje asistio a cada especialidad
2. Edad minima y por que especialidad consulta
3. Porcentaje de los menores de edad que se presentaron a la guardia
4. Rango de edades que se presentaron en odontología y si tenian o no cobertura
5. Entre los que tienen obra social, que porcentaje se atendieron en dermatologia. Mostrar el promedio de edades
6. Si Enzo Pastrana se la come */
#include <stdio.h>
int esp, pac, edad, obra, min, espMin, minOdon, minObra, maxOdon, maxObra;
float total=0, guardia=0, odon=0, derma=0, menor=0, menorGuardia=0, conObra=0, obraDerma=0, acumDerma=0, porcGuardia=0, porcOdon=0, porcDerma=0, porcMenor=0, porcObraDerma=0, promDerma=0;
main(){
	printf("Hola Enzo, aca te hice el programita, acordate que:\n1: Guardia - 2: Odontologia - 3: Dermatologia.\n1: Con obra social - 2: Sin obra social.\n\n");
	do{
		printf("Ingrese la especialidad del paciente 1: ");
		scanf("%d",&esp);
		if(esp!=0 && esp!=1 && esp!=2 && esp!=3){
			printf("\nPor favor, ingrese una opcion valida.\n\n");
		}
	}while(esp!=0 && esp!=1 && esp!=2 && esp!=3);
	while(esp!=0 && total<10){
		total++;
		pac=total;
		printf("Ingrese la edad del paciente %d: ",pac);
		scanf("%d",&edad);
		do{
			printf("Ingrese si el paciente %d tiene obra social o no: ",pac);
			scanf("%d",&obra);
			if(obra!=1 && obra!=2){
				printf("\nPor favor, ingrese una opcion valida.\n\n");
			}
		}while(obra!=1 && obra!=2);
		if(esp==1){
			guardia++;
		}
		else if(esp==2){
			odon++;
			if(odon==1 || edad<minOdon){
			minOdon=edad;
			minObra=obra;
			}
			if(odon==1 || edad>maxOdon){
			maxOdon=edad;
			maxObra=obra;
			}
		}
		else if(esp==3){
			derma++;
		}
		if(total==1 || edad<min){
			min=edad;
			espMin=esp;
		}
		if(edad<18){
			menor++;
			if(esp==1){
				menorGuardia++;
			}
		}
		if(obra==1){
			conObra++;
			if(esp==3){
				obraDerma++;
				acumDerma=edad+acumDerma;
			}
		}
		do{
			printf("\nIngrese la especialidad del paciente %d: ",pac+1);
			scanf("%d",&esp);
			if(esp!=0 && esp!=1 && esp!=2 && esp!=3){
				printf("\nPor favor, ingrese una opcion valida.\n\n");
			}
		}while(esp!=0 && esp!=1 && esp!=2 && esp!=3);
	}
	if(total!=0){
		porcGuardia=guardia*100/total;
		porcOdon=odon*100/total;
		porcDerma=derma*100/total;
		porcMenor=menorGuardia*100/menor;
		porcObraDerma=obraDerma*100/conObra;
		promDerma=acumDerma/obraDerma;
		printf("\nEl %f%c asistio a Guardia, el %f%c a Odontologia y el %f%c a Dermatologia\n",porcGuardia,37,porcOdon,37,porcDerma,37);
		printf("La edad minima fue de %d quien consulto por ",min);
		if(espMin==1){
			printf("Guardia.");
		}
		else if(espMin==2){
			printf("Odontologia.");
		}
		else if(espMin==3){
			printf("Dermatologia.");
		}
		if(menor!=0){
			printf("\nEntre los menores de edad, el %f%c se presento a Guardia.",porcMenor,37);
		}
		else{
			printf("\nNo se presentaron menores de edad.");
		}
		if(odon!=0){
			printf("\nEn Odontologia la edad menor fue %d quien ",minOdon);
			if(minObra==2){
				printf("no ");
			}
			printf("tenia obra social y la mayor fue %d quien ",maxOdon);
			if(maxObra==1 && minObra==1){
				printf("tambien ");
			}
			else if(maxObra==2){
				printf("no ");
			}
			printf("tenia obra social.\n");
		}
		else{
			printf("\nNadie se presento a Odontologia.\n");
		}
		if(conObra!=0){
			printf("Entre los que tienen obra social, el %f%c se atendio en Dermatologia.",porcObraDerma,37);
			if(obraDerma!=0){
				printf(" El promedio de edad entre ellos fue de %f a%cos.",promDerma,164);
			}
		}
		else{
			printf("Ninguno de los registrados tenia obra social.");
		}
		printf("\nEnzo Pastrana se la re come.");
	}
	else{
		printf("\nPancho");
	}
}
