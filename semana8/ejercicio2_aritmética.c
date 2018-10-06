//Creado por Diana Ailed Hernández Bustos el 03/10/18

#include<stdio.h> //Incluyo la librería

int main(){ //Inicio mi programa

	int MAX = 3; //Hago la declaración de mis variables
	int var[] = {10, 100, 200}; //Establezco una variable de tipo arreglo y pongo sus valores
	int i, *ptr; //Hago la declaración de mi apuntador

	ptr = &var; //Asignamos la dirección del arreglo al apuntador

	for (i=0; i<MAX; i++){ //FOR que corre 3 veces
		printf("La dirección de la variable var[%d]= %x\n", i, ptr); //Indica la dirección en que se va recorriendo la información guardada en ptr (de 4 en 4 bytes).
 		printf("Valor de la variable var[%d]= %d\n", i, *ptr); //Indica el valor de la variable según el orden de i
		ptr++; //Indica que nos movemos a la siguiente posición en la memoria
	}

return 0; //Cierra el programa
}	






