//Creado por Diana Ailed Hdez. Bustos el 24/10/18

#include<stdio.h> //Incluyo las librerías que se van a usar
#include<stdlib.h> //Utilicé esta librería porque hice uso de memoria dinámica

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


//Abro mi 2° función: la cual ayuda a hacer los cáluclos para encontrar las matrices resultantes e imprimirlas. Por lo tantom sólo tiene elementos de entrada pero no de salida.
void imprimir(double **matriz, int N){
	//Se hace la declaración de mis variables usadas en esta función
	FILE*fp2; //Hago la deckaración de mi archivo de lectura
	double ep, pt=101, aux; 
	int j, i, count=0;
 
//Hice un While que corriera siempre que mi pt (PORCENTAJE DE ERROR) fuera mayor a 0.000001. El valor de pt se calcula a partir de mi epsilon 
	while(pt>0.000001){

		//Este FOR sirve para ir llenando cada uno de los puntos de la placa con una temperatura nueva (según sus bordes con los que 			colindara)
		for(i=1; i<N-1; i++){
		  for(j=1; j<N-1; j++){
			aux=matriz[i][j]; //Le asigné una nueva variable a mi matriz anterior
			matriz[i][j]=((matriz[i+1][j])+(matriz[i-1][j])+(matriz[i][j+1])+(matriz[i][j-1]))/4;
			ep=((matriz[i][j]-aux)/matriz[i][j]); //Calculo la epsilon con la diferencia entre cada uno de los puntos de la matriz anterior y la nueva calculada en el renglón superior, dividida entre la nueva
			pt=ep*100; //Con base a mi epsilon, saco mi porcentaje de error			
		  }
		} //Cierro mis FORS

		count=count+1; //Hago que mi contador vaya cambiando con cada iteración que pase 

		//Esta condición sirve para asignarle el nombre a cada uno de los archivos que se van a crear, los cuales contienen las diferentes matrices que se están creando con cada una de las iteraciones
		if(count%6==0){ //Cada vez que el contador se divida en 6 se va a imprimir una matriz
		char buffer [32]; //SE utiliza una variable de tipo char que tenga varios elementos (los diferentes nombres) de mis archivos a crear
		snprintf(buffer, sizeof(char)*32, "Resultados_temp%i.txt",count); //Asigno un nombre a cada uno de los archivos que se van a crear, los cuales van a tener el nombre según las veces que se haya hecho la iteración.
	
		fp2=fopen(buffer,"w"); //Abro mi archivo de lectura 
			//Necesito estos 2 FORS para que vayan imprimiendo las temperaturas de cada uno de los puntos de las placas 
			for(i=0; i<N; i++){ 
	 		 for(j=0; j<N; j++){
				fprintf(fp2, "%lf ", matriz[i][j]); //Imprimo en mi archivo de escritura la matriz completa
			  }
			fprintf(fp2,"\n");	
			}	
			fprintf(fp2, "\n");
	
		}
		
	}

	printf("\n el contador es: %i \n", count); 		
	
	fclose(fp2); //Cierro mi archivo de escritura	

return 0; //Cierro la función
}
