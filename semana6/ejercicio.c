//Creado por Diana Aiñed Hernández Bustos el 10/09/18

#include<stdio.h> //Se pone la librería que se va a usar 

int main(){ //SE inicia el programa

	int n=10, genero[n], semestres[n], edad[n], count=0, count2=0, i, j; //SE hace la declaración de variables enteras. En este caso se ponen variables con [] que indican que tienen 10 elementos ya que son 10 alumnos 
	float promedio=0, total, calificaciones[n]; //Tipo de vraiables con decimales

	for(i=0; i<n; i++){ //Este FOR me ayuda a pedir 10 veces la info. necesaria al usuario

		printf("Escribe la edad de cada estudiante: \n"); //SE pide la info. necesaria y se asigna un número a cada elemento de los 10 que tiene edad
		scanf("%i", &edad[i]);
	
		printf("Escribe el sexo de los alumnos, (0 para hombres, 1 para mujeres): \n");//SE pide la info. necesaria y se asigna un número a cada elemento de los 10 que tiene género
		scanf("%i", &genero[i]);

		printf("Escribe el semestre de los alumnos (del 1-9): \n");//SE pide la info. necesaria y se asigna un número a cada elemento de los 10 que tiene semestres
		scanf("%i", &semestres[i]);
	
		printf("Escribe las calificaciones de los alumnos: \n \n");//SE pide la info. necesaria y se asigna un número a cada elemento de los 10 que tiene calificaciones
		scanf("%f", &calificaciones[i]);

		}

	for(i=0; i<n; i++){ //Este FOR se va a correr 10 veces de 1 en 1
	total=total+calificaciones[i]; //Se calcula el promedio, con sumatoria de calificaciones de los 10 datos que nos da el usuario
	promedio=total/n;
	}

		for(j=1; j<=9; j++){ //Este FOR se va a correr 9 veces, ya que sólo hay 9 semestres de 1 en 1
			count=0; //Los contadores de género deben empezar en 0 para que no se sumen con el anterior.
			count2=0;
			for(i=0; i<n; i++){  //Este FOR se va a correr 10 veces de 1 en 1, para que registre todos los datos introducidos por el usuario
			
				if(semestres[i]==j){ //ESta condición indica que si el semestre introducido en los datos del usuario es igual a j (que va de 1-9) haga lo siguiente
					if(genero[i]==0){ //Si el género de los datos es 0, entonces se hace la sumatoria de los hombres que hay en este semestre
					count++;//Sumatoria de contadores
					}

					if (genero[i]==1){ //Si el género de los datos es 0, entonces se hace la sumatoria de las mujeres que hay en este semestre
					count2++;
					}
				}
			}
		
		printf("El semestre es:%i \n ", j); //Se imprimen los resultados por cada semestre
		printf("Hay %i mujeres en este semestre \n", count2);
		printf("Hay %i hombres en este semestre \n", count);
		}
		
		
	printf("El promedio de los alumnos es %f \n", promedio); //Se imprime el promedio general de todos los alumnos
		
return 0; //Se cierra el programa
}
		

		

	


