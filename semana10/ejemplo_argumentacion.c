//Creado por Diana Ailed Hernández Bustos el 15/10/18

#include<stdio.h>

int main(int argc, char *argv[]){
	printf("El programa que estás ejecutando es: %s\n", argv[0]);

	if(argc==2){
		printf("El argumento que se dio es: %s\n", argv[1]);
	}
	else if(argc>2){
		printf("Hay más argumentos de los necesarios \n");
	}
	else{
		printf("SE requiere de al menos 1 argumento más \n");
	}
	
return 0;
}
