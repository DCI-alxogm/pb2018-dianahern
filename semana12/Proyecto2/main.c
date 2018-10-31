//Creado por Diana Ailed Hdez. Bustos el 31/10/18

#include<stdio.h> //Incluyo las librerías que se van a usar
#include<stdlib.h> //Utilicé esta librería porque hice uso de memoria dinámica
#include "funciones.h"//Utilizo esta librería que cree con el nombre de "funciones.h" ya que en ésta se encuentran las funciones que voy a utilizar en mi programa

//Poner esta librería nueva sirve para no tener que declarar en esta parte las fucniones utilizadas

int main(){ //Inicio mi programa
	FILE*fp; //Hago declaración de mi archivo de lectura
	FILE*fp2;//Hago declaración de mi archivo de escritura
	//Hago la declaración de mis demás variables
	double arriba, abajo, izq, der, **matriz, ep, pt=101, aux; //Aquí, matriz es un apuntador de tipo double (con 2 dimensiones, por eso tiene **
	int j, i, N,  count=0;
	
	fp=fopen("datos.txt", "r"); //Abro mi archivo de escritura
	fscanf(fp, "%lf %lf %lf %lf %i", &arriba, &abajo, &izq, &der, &N); //EScaneo las temperaturas de los 4 bordes y la cantidad de filas y columnas que quiero que tenga mi matriz
	printf("%lf %lf %lf %lf %i \n", arriba, abajo, izq, der, N);
	fclose(fp); //Cierro mi archivo


	if(N>=500){ //Condición para que no exceda el número de filas y columnas de mi matriz

		printf("Lo siento, pero excediste el número de columnas y filas, favor de cambiar el número de N");
		return 1; //Si lo excede, entonces se cierra el programa
	}

	//Aquí hago la división de la memoria con malloc para guardar las matrices, por lo que necesité de un for porque éstas son cuadradas, es decir, tienen 2 dimensiones
	matriz=(double**) malloc(N * sizeof(double*));
		for (int k=0; k<N; k++){
			matriz[k]= (double *) malloc((N) * sizeof(double)); 
	}

	//Llamo a mi función "inicializar" al igualarla a una variable. Fue necesario poner todos los elementos de entrada que requiere la función inicializar 
	matriz= inicializar(matriz, arriba, abajo, izq, der, N);

	imprimir(matriz, N); //Aquí se llama a mi 2° función que se llama "imprimir", la cual está en otro archivo, y que también contiene los cálculos que se necesitan
return 0; //Se cierra mi programa, es decir la función main
}



