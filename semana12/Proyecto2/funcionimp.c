#include "funciones.h"
#include <stdio.h>
#include <stdlib.h>

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

		if (count>=1000){ //ES necesario poner un límite para las iteraciones que se llevan a cabo
			printf("Tu programa excedió el número de iteraciones");
		return 1; //Se sale del programa en caso de que excediera
		}


		//Esta condición sirve para asignarle el nombre a cada uno de los archivos que se van a crear, los cuales contienen las diferentes matrices que se están creando con cada una de las iteraciones
		if(count%6==0){ //Cada vez que el contador se divida en 6 se va a imprimir una matriz
		char buffer [32]; //SE utiliza una variable de tipo char que tenga varios elementos (los diferentes nombres) de mis archivos a crear
		snprintf(buffer, sizeof(char)*32, "Resultados_temp%i.txt",count); //Asigno un nombre a cada uno de los archivos que se van a crear, los cuales van a tener el nombre según las veces que se haya hecho la iteración.
	
		fp2=fopen(buffer,"w"); //Abro mi archivo de lectura 
			//Necesito estos 2 FORS para que vayan imprimiendo las temperaturas de cada uno de los puntos de las placas 
			for(i=0; i<N; i++){ 
	 		 for(j=0; j<N; j++){
				fprintf(fp2, "%lf  ", matriz[i][j]); //Imprimo en mi archivo de escritura la matriz completa
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
