//Creado por Diana Ailed Hernández Bustos el 10/09/18

#include<stdio.h> //Se incluye la librería que voy a usar

int main(){

	int i, N=10; //Hago declaración de variables
	float numeros[10]; //Establezco un arreglo de 10 elementos para números

	
	for(i=0; i<N; i++){ //El FOR indica que lo que sigue se repite 10 veces
		numeros[i]=0; //Todos los elementos de numeros se igualan a 0
	}

	for (i=0; i<N; i++){ //El FOR indica que lo que sigue se repite 10 veces
		scanf("%f", &numeros[i]); //SE escanean todos los números de este FOR, donde i va cambiando de 0-9
	}

	for(i=0; i<N; i++){ //El FOR indica que lo que sigue se repite 10 veces
		printf("%f \n", numeros[i]); //Se imprime 10 veces cada valor que adquiere i
	}

return 0; //SE cierra el programa
}
