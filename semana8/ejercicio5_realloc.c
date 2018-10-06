//Creado por Diana Ailed Hernández Bustos el 05/10/18

#include<stdio.h> //Incluyo librería principal
#include<stdlib.h> //Incluyo librería de memoria dinámica

int main(){ //Inicio mi programa
	int *ptr, i, n1, n2; //Hago la declaración de mi apuntador y de mis otras variables enteras

	printf("Introduce el número de elementos n1: "); //Pido al usuario que introduzca el número de elementos dentro de ptr
	scanf("%d", &n1);//Se escanea la info.

	printf("\n Introduce el nuevo número de elementos n2: "); //Cambio el nuevo número de elementos dentro de ptr
	scanf("%d", &n2); //Se escanea la info.


	ptr=(int*) malloc(n1*sizeof(int));//Se establece que los datos de la variable n1 se guarden en malloc

	printf("Dirección de la memoria reservada: "); //Se imprimen las direcciones de los bloques en que se dividió malloc según el usuario


	for(i=0; i<n1; ++i){ //Se usa el FOR para que corra las veces necesarias para agarrar cada bloque
		printf("%x \t", ptr+i); //Se imprimen las direcciónes de cada bloque dentro de ptr
	}

	ptr=realloc(ptr, n2); //Realloc ajusta el núemro de bloques establecidos anteriormente, y se establece cuántos bloques más quiere el usuario

	for (i=0; i<n2; i++){//Se usa el FOR para que corra las veces necesarias para agarrar cada bloque del nuevo ajuste
		printf("%u \t", ptr +i);//Se imprimen las nuevas direcciones de ptr
	}

	free(ptr); //Se libera la memoria usada
	return 0;//Se cierra el programa
}
	
