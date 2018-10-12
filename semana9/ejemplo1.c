//Creado por Diana Ailed Hernández Bustos el 08/10/18

#include<stdio.h> //Hago la declaración de las librerías usadas en este programa
#include<stdlib.h> //Utilizo esta librería porque voy a usar funciones de memoria dinámica

int main(){

	FILE*fp; //Hago la declaración de mi archivo de lectura
	int lineas, i, num; //Hago la declaración de mis demás variables
	float *ptr, x=-100000000; //Declaro mi apuntador *ptr
	
	fp=fopen("num_maximo.txt", "r"); //Abro mi archivo de lectura

	lineas=100;
	ptr=(int*)calloc(lineas, sizeof(int));//Direcciono mi apuntador a un espacio de la memoria que tiene la capacidad de 100 bloques

		printf("Escriba el número de datos que hay en su documento: \n"); //Pido info. al usuario
		scanf("%i", &num);

	ptr=realloc (ptr, num); //Redirecciono mi apuntador a un espacio de mayor o de menor memoria, la cual fue dada por el usuario

		for(i=0; i<num; i++){ //Hago un FOR que vaya escaneando la información, bloque de memoeria por bloque de memoria, gracias a mi apuntador (en cada bloque va a haber 1 dato)
			fscanf(fp, "%f", (ptr+i)); //Obtengo la info. necesaria de bloque en bloque
		}

		for(i=0; i<num; i++){ //Hago un FOR que recorra todos los datos de mi archivo de lectura
			
			if(*(ptr+i)>x){ //Si el dato es mayor al valor de x inicial, entonces este dato se va a convertir en x
				x=*(ptr+i);
			}
		}

	printf("El número máximo es: %f \n", x); //Imprimo el valor del número máximo
			
	fclose(fp); //Cierro el archivo de lectura

return 0; //Salgo de mi programa
}



