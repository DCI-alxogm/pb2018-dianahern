//Creado por Diana Ailed Hernández Bustos el 10/09/18

#include<stdio.h> //Incluyo librería

int main(){
 	FILE*fpest; //Hago la declaración de mi variable de documento a leer (ya existe)
	FILE*fpres; //Hago la declaración de mi variable de documento a escribir

	fpest=fopen("estudiantes.txt", "r"); //Abro documento a leer

	int n; //Hago la declaración de variables
	fscanf(fpest, "%i", &n); //Se escane de mi doc a leer el número de datos que éste contiene

	int genero[n], semestres[n], count=0, count2=0, i, j; //DEclaración de las variables de tipo de arreglos (tienen 10 elementos ya que son 10 alumnos)
	float promedio=0, total, calificaciones[n];
	
	for(i=0; i<n; i++){ //FOR que va a recorrer 10 veces, ya que hay 10 datos por alumno en mi documento a leer

	fscanf(fpest, "%i %f %i", &genero[i], &calificaciones[i], &semestres[i]);//Se capta la información de los semestres primero (es la primera columna de mi base de datos)
	printf("%i, %f, %i \n", genero[i], calificaciones[i], semestres[i]);
	
	}
	fclose(fpest); //Cierro documento a leer
	fpres=fopen("resumen.txt", "w");//Abro el documento a escribir
			
	for(i=0; i<n; i++){//FOR que va a realizar 10 veces lo siguiente
	
	total=total+calificaciones[i]; //Hace sumatoria de las calificaciones de los alumnos y calula el promedio
	promedio=total/n;
	}
	fprintf(fpres, "La calificación promedio de los 10 alumnos fue de %f. \n", promedio);//SE impirme en el documento creado llamado "resumen.txt" lo que está en rosa
	
		for(j=1; j<=9; j++){ //Este FOR se va a correr 9 veces, ya que sólo hay 9 semestres de 1 en 1
			count=0;
			count2=0;
			for(i=0; i<n; i++){//Este FOR se va a correr 10 veces de 1 en 1, para que registre todos los datos introducidos por el usuario

				if(semestres[i]==j){//ESta condición indica que si el semestre introducido en los datos del usuario es igual a j (que va de 1-9) haga lo siguiente
					if(genero[i]==0){//Si el género de los datos es 0, entonces se hace la sumatoria de los hombres que hay en este semestre
					count++;//Va contando el # de hombres
					}

					if (genero[i]==1){//Si el género de los datos es 0, entonces se hace la sumatoria de las mujeres que hay en este semestre
					count2++; //Va contando # de mujeres
					}
				}
			}
	
		
		fprintf(fpres, "\n RESUMEN: En el semestre %i, hay %i hombres y %i mujeres.\n", j, count, count2);//SE imprime la cantidad de hombres y de mujeres que hay en cada semestre

		}
		fclose(fpres); //SE cierra el documento donde se escribió
			
		
return 0;
} //SE cierra el programa
		

