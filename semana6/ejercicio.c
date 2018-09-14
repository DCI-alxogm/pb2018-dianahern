//Creado por Diana Aiñed Hernández Bustos el 10/09/18

#include<stdio.h>

int main(){

	int n=10, genero[n], semestres[n], edad[n], count=0, count2=0, i, j;
	float promedio=0, total, calificaciones[n];

	for(i=0; i<n; i++){

		printf("Escribe la edad de cada estudiante: \n");
		scanf("%i", &edad[i]);
	
		printf("Escribe el sexo de los alumnos, (0 para hombres, 1 para mujeres): \n");
		scanf("%i", &genero[i]);

		printf("Escribe el semestre de los alumnos (del 1-9): \n");
		scanf("%i", &semestres[i]);
	
		printf("Escribe las calificaciones de los alumnos: \n \n");
		scanf("%f", &calificaciones[i]);

		}

	for(i=0; i<n; i++){
	total=total+calificaciones[i];
	promedio=total/n;
	}

		for(j=1; j<=9; j++){
			count=0;
			count2=0;
			for(i=0; i<n; i++){
			
				if(semestres[i]==j){
					if(genero[i]==0){
					count++;
					}

					if (genero[i]==1){
					count2++;
					}
				}
			}

		printf("El semestre es:%i \n ", j);
		printf("Hay %i mujeres en este semestre \n", count2);
		printf("Hay %i hombres en este semestre \n", count);
		}
		
		
	printf("El promedio de los alumnos es %f \n", promedio);
		
return 0;
}
		

		

	


