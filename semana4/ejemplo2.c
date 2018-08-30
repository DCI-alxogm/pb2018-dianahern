/* Creado por Diana Ailed Hernández Bustos el 29/08/18 */

#include<stdio.h>
//Incluyo la librería que voy a utilizar

int main(){
	float temp_C,temp_K;
	float inicial=100,final=200,delta;
	int n=10;
	int op=1;

	delta=(final-inicial)/n;
	while(op==1){
//Indica lo que va a ocurrir si la persona pone opción 1. ES decir, el programa (que está dentro de while) se seguirá reproduciendo una infinidad de veces siempre y cuando la perona escriba 1 en la pregunta final
	  temp_K=0;
	  temp_C=inicial; //Se incluyen operaciones o igualaciones.

	while(temp_C<=final){ //Se puede poner un while dentro de otro si se quiere hacer que algo ocurra siempre que una condición se cumpla.
	  temp_K=temp_C+273.15; //En este caso, la temperatura en K (que ya definí que empezara en 0) va a ser igual a temp. en C (siempre y cuando su valor sea menor o igual a 200) más 273.15
	  printf("%f %f\n",temp_C,temp_K);
	  temp_C=temp_C+delta;  //  temp_C+=delta;

} //Cierra el while #2

	printf("¿Deseas hacer otra operación? Presiona1 para si, Presiona 2 para no, \n");
	scanf("%i", &op);
//Esta pregunta sirve para hacer que si la persona lo desea, se regrese al menú ya que WHILE seguirá infinitamente siempre que la persona escriba 1
} //Cierra el while #1
return 0;
} //Cierra el programa
