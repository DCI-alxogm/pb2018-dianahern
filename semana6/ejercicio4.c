//Creado por Diana Ailed Hernández Bustos el 10/09/18

#include<stdio.h> //Incluyo la librería

int main(){

	int i, N=10; //Hago la declaración de variables
	float numeros[N]; //ESta variable es de tipo arreglo que contiene N elementos, definidos anteriormente como 10 elementos
	
	for(i=0; i<N; i++){ //FOR va a correr de 0 hasta N, es decir 10 veces donde i va a estar cambiando de valor
	
	scanf("%f", &numeros[i]); //Escanea la
	numeros[i]*=2;	//MUltiplica el número dado por 2
	printf("%f \n", numeros[i]); //Imprime el valor del arreglo modificado
	}

return 0;//SE cierra el programa
}
