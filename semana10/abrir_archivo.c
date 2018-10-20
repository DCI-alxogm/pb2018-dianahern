//Creado por Diana Ailed Hernández Bustos el 15/10/18

#include<stdio.h> //Pongo la librería que voy a usar
 
int main(int argc, char *argv[]){ //Hago la declaración de los valores que voy a dar en la compilación

	printf("El programa que estás ejecutando es %s\n", argv[0]); //Imprimo el primer elemento del arreglo dado como argumento en el compilador
	char *nombre_archivo; //Hago declaración de mi variable

	FILE *fp; //Hago declaración de mi archivo de escritura

	if(argc==2){ //Si tengo 2 argumentos, entonces que se haga lo siguiente
		nombre_archivo=argv[1]; //Igualo nombre del archivo a argumento 2
		printf("El nombre del archivo es: %s\n", nombre_archivo);
		fp=fopen(nombre_archivo, "w+"); //Abro mi archivo de escritura
		//Aquí se pondría todo lo que se quiere hacer...

		fclose(fp); //Cierro mi archivo de escritura
	}

	else if(argc>2){ //Si tengo más argumentos, entonces:
		printf("Más argumentos de los necesarios \n");
	}
	else{ 
		printf("Se requiere de al menos 1 argumento \n");
	}
return 0; //Cierro el programa
}
