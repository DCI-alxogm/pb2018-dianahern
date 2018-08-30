/* Creado por Diana Ailed Hernández Bustos el 29/08/18 */

#include<stdio.h>
//Indica la librería que se está utilizando en este programa
int main(){

	float temp_C, temp_K; //Hago la declaración de variables, float para decimales
	float inicial=100, final=200, delta;
	int n=10; //Utilizo int porque quiero que se divida entre un número entero mi operación 
	char op[2]; //Indica una variable que tiene texto, es necesario [] para indicar que tiene 2 entradas.

	op[0]='s'; //La entrada 0 corresponde a s
	delta=(final-inicial)/n; //Delta es igual a final menos inicial

	while(op[0]=='s'){ //While establece que el programa que siga abajo se corra siempre y cuando en la variable op se designe s
	  temp_K=0;
	  temp_C=inicial; //Son operaciones e igualaciones.

	while(temp_C<=final){ //Se pone un while dentro del otro. ESte while establece lo que ocurre cuando la temp_C es menor o igual a 200
	  temp_K=temp_C+273.15;
	  printf("%f %f\n", temp_C, temp_K);
	  temp_C=temp_C+delta; //Especifica las operaciones, en este caso, se establece que la temp_C aumente añadiendo delta
}//Llaves que cierran el 2° while
	printf("Deseas hacer otra operación? (si/no)\n");
	scanf("%s", op); //Esta pregunta siempre va a aparecer al final de que se desarrolle el programa. SE pone %s para que el usuario pueda poner letras y op es igual s
} //Cierra el 1° while
	return 0;
} //Cierra el programa en general
