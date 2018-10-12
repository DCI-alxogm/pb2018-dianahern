//Creado por Diana Ailed Hernández Bustos el 10/10/18

#include<stdio.h> //Incluyo la librería que voy a usar
void cuadrado(); //Pongo la función y el tipo de función que voy a usar (no tiene entrada ni salida)  

int main(){  //Inicio cuerpo del programa

	cuadrado(); //Hago que se corra la función cuadrado()

	return 0; //Cierro mi programa
}

void cuadrado(){ //Función cuadrado
	float x, x2; //Se declaran las variables usadas
	printf("Introduce un número \n"); //Se pide la info. al usuario (no tiene entrada esta función)
	scanf("%f", &x);
	x2=x*x; //Operación
	printf("El cuadrado de %f es %f \n", x, x2); //Se imprimen los resultados ya que esta función no tiene elementos de salida

} //Se cierra la función
