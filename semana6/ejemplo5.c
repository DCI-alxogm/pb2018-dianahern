//Creado por Diana Ailed Hernández Bustos el 11/09/18

#include<stdio.h> //Incluyo librería

int main(){

	int j, n;//Declaración de variables
	printf("Dime el número de elementos para trabajar: \n"); //SE pide la cantidad de elementos que va a tener un arreglo al usuario
	scanf("%i", &n);

	float numeros[n]; //No es la mejor forma de hacer una reserva de memoria dinámica. SE hace la declaración después de que se define cuántp es n por el ususario

	for(j=0; j<n; j++){ //El FOR va a correr las veces que el usuario definió anteriormente
	scanf("%f", &numeros[j]); //SE escanea cada uno de los avlores que adquiere j
	numeros[j]*=2;//Cada número modificado se multiplica por 2
	printf("%f\n", numeros[j]); //SE imprime e resultado
	}
return 0;
}
