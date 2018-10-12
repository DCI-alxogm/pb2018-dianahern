//Creado por Diana Ailed Hernández Bustos el 10/10/18

#include<stdio.h> //Incluyo la librería que voy a usar
float cuadrado(float h);//Pongo la función y el tipo de función que voy a usar (tiene entrada y salida) 

int main(){ //Inicio mi programa

	float x, x2; //Hago la declaración de mis variables
	printf("Introduce un número \n"); //Pido información de mi usuario
	scanf("%f", &x);
	x2=cuadrado(x); //La variable te manda a una función para que en ésta se realice la operación
	printf("El cuadrado de %f es %f \n", x, x2); //Se imprime el resultado 
	return 0; //Se cierra el programa
}

float cuadrado(float h){ //Se abre cuerpo de la función, tiene h porque tiene elementos de salida
	return h*h; //Esta función te devuelve un resultado ya que tiene elementos de salida
}
