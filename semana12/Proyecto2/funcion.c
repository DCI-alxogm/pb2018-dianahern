//Creado por Diana Ailed Hernández Bustos el 31/10/18

#include<stdio.h> //Incluyo las librerías que se van a usar
#include<stdlib.h> //Utilicé esta librería porque hice uso de memoria dinámica

#include "funciones.h"//Utilizo esta librería que cree con el nombre de "funciones.h" ya que en ésta se encuentran las funciones que voy a utilizar en mi programa

//Abro mi 1° función: la cual ayuda a inicializar la matriz de acuerdo a los datos obtenidos en el archivo de lectura, y regresa a la función main la matriz inicial.
double **inicializar(double **matriz, double arriba, double abajo,double izq,double der, int N){ 
	//Se hace la declaración de mis variables
	int i, j; 
	FILE*fp; //Aquí tuve que poner estas variables también porque si no, no compilaba mi programa
	FILE*fp2;
	double ep, pt=101, aux; //
	int count=0;

	for(i=0; i<N; i++){// Este FOR empieza en i=0  y termina en i=N porque éstos corresponde a los espacios donde se encuentran mis bordes, los cuales ya tienen temperatura fija
	  	matriz[i][0]=arriba; //Le doy la temperatura que la variable "arriba" asigna a todo el borde superior
		matriz[i][N-1]=abajo; //Le doy la temperatura que la variable "abajo" asigna a todo el borde inferior
	  }
	for(j=0; j<N; j++){// Este FOR empieza en j=0  y termina en j=N porque éstos corresponde a los espacios donde se encuentran mis bordes, los cuales ya tienen temperatura fija
		matriz[0][j]=der;//Le doy la temperatura que la variable "derecha" asigna a todo el borde derecho
		matriz[N-1][j]=izq;//Le doy la temperatura que la variable "izquierda" asigna a todo el borde izquierdo
	}

	for (i = 1; i<N-1; i++){ // Este FOR empieza en i=1 y termina en i=N-1 porque i=0 e i=N corresponde a los espacios donde se encuentran mis bordes, los cuales ya tienen temperatura fija
		matriz[i][j]=0.0; //Aquí inicializo mi matriz, excepto los bordes, en 0.0
	}
 
return matriz; //Devuelvo a mi programa, en el otro archivo, el valor de matriz inicializada
}




