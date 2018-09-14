//Creado por Diana Ailed Hernández Bustos el 12/09/18

#include<stdio.h>

int main(){

	FILE*estudiantes.txt;
	FILE*resumen.txt;
	int n=10, genero[2], semestres[9], edad[100], count=0, count2=0, i, j;
	float promedio=0, total, calificaciones[10];

	for(i=0; i<n; i++){
	
	archivo=fopen("\estudiantes.txt", "w");
	fputs("En el semestre 1 



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

		fputs("En el semestre 1 hay: %i hombres y %i mujeres. \n En el semestre 2 hay: %i hombres y %i mujeres. \n En el semestre 3
printf("El semestre es:%i \n ", j);
		printf("Hay %i mujeres en este semestre \n", count2);
		printf("Hay %i hombres en este semestre \n", count);
		}
		
return 0;
}
