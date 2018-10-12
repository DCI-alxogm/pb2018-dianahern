//Creado por Diana Ailed Hernández Bustos el 10/10/18

#include<stdio.h> //Incluyo la librería que voy a usar
float cuadrado();//Pongo la función y el tipo de función que voy a usar (no tiene entrada pero sí salida)  

int main(){ //Inicio el cuerpo del programa

	float xx; //Hago la declaración de mis variables
	xx=cuadrado(); //Igualo mi variable al resultado que la función cuadrado me devuelva
	printf("%f \n", xx); //Imprimo el resultado ya que la función si tiene elementos de entrada 
	return 0; //Se cierra el programa
}

float cuadrado(){ //Se abre el cuerpo de la función cuadrado 
	float x, x2; //Se declaran las variables usadas en esta parte 
	printf("Introduce un número \n"); //Como la función no tiene elementos de entrada se tiene que pedir info. al usuario
	scanf("%f", &x);
	x2= x*x; //Hago la operación necesaria	
	printf("El cuadrado de %f es ", x);//Tuve que separar la impresión de los resultados porque no se podían devolver 2 valores a la vez	
	return x2; //Como tiene elementos de salida, se devuelve los resultados al cuerpo del programa	
}
