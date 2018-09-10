//Creado por Diana Aiñed Hernández Bustos el 10/09/18

#include<stdio.h>

int main(){

	int n=10, genero[2], j, semestres[9], edad[10], count=0, count2=0;
	float promedio=0, calificaciones[n];

	for(i=0; i<n; i++){

		printf("Escribe la edad de cada estudiante: \n");
		scanf("%i", &edad);
	
		printf("Escribe el sexo de los alumnos, (0 para hombres, 1 para mujeres): \n");
|		scanf("%i", &genero);

		printf("Escribe el semestre de los alumnos (del 1-9): \n");
		scanf("%i", &semestres);
	
		printf("Escribe las calificaciones de los alumnos: \n");
		scanf("%f", &calificaciones);

		}

	for(i=0; i<n; i++){
		promedio=promedio+calificaciones[i]/n;  //Esto es igual a poner promedio+=calificaciones[i]/n
		
		if(genero[i]==0){
		count++;

		}
		if(genero[i]==1){
		count2++;
		}

		j=semestres[i];

		for(j=1; j<=9; j++){
			printf("El semestre es: %i,\n ", j);
		}
	}

return 0;
}
		

		

	


