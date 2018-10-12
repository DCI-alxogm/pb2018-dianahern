//Creado por Diana Ailed Hernández Bustos el 10/10/18

#include<stdio.h>//Incluyo la librería que voy a usar
void cuadrado(float h);//Pongo la función y el tipo de función que voy a usar (tiene entrada pero no salida) 

int main(){ //Se inicia el cuerpo del programa
	float x; //Se hace la declaración de variables
	printf("Introduce un número \n");//Se pide la info. al usuario
	scanf("%f", &x);
	cuadrado(x); //Como la función no tiene elementos de salida, se driecciona hacia la función		
	return 0; //Se cierra el programa
}

void cuadrado(float h){
	float x, x2; //Se hace la declaración de las variables
	x=h; //Se igualan la variable del programa a la de la función
	x2= h*h; //Se hacen las operaciones necesarias
	printf("El cuadrado de %f es %f \n", x, x2); //Se tiene que imprimir los resultados ya que esta función no tiene elementos de salida
} //Se cierra la función
