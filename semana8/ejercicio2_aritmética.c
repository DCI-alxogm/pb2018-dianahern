//Creado por Diana Ailed Hernández Bustos el 03/10/18

#include<stdio.h>

int main(){

	int MAX = 3;
	int var[] = {10, 100, 200};
	int i, *ptr;

	ptr = &var; //Asignamos la dirección del arreglo al apuntador

	for (i=0; i<MAX; i++){
		printf("La dirección de la variable var[%d]= %x\n", i, ptr);
 		printf("Valor de la variable var[%d]= %d\n", i, *ptr);
		ptr++; //Indica que nos movemos a la siguiente posición en la memoria
	}

return 0;
}	






