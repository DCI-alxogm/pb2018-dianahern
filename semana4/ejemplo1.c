/* Cree un nuevo programa el 29/08/18 por Diana Ailed Hernández Bustos*/

#include<stdio.h> //Pongo la librería que voy a utilizar en el programa

int main()
{
	float temp_C,temp_K; //Estas variables son decimales por eso utilicé float
	float inicial=100, final=200, delta; //Estas variables son decimales por eso utilicé float
	int n=10;// Utilicé int porque quiero que si la temp_C es menor o igual a 200 vaya aumentando de 10 en 10 para que se acabe el while sino, sería infinito

	delta=(final-inicial)/n;
	temp_C=inicial;//Aquí se pone que temp_C sea igual a la inicial para que al principio valga 100.
//Escribo las operaciones que voy a necesitar.

	while(temp_C<=final){
//While sirve para que se realice las operaciones que siguen siempre que su condición entre () se cumpla
	  temp_K=temp_C+273.15;
	  printf("%f %f\n",temp_C,temp_K);//Imprime las temperaturas de resultado
	  temp_C=temp_C+delta; //Sirve para que el while no se siga prolongando siempre, sino que aumente de 10 en 10 el valor de temp_C 

	} //Cierra la función de while
return 0;
} //Se cierra el cuerpo del programa
