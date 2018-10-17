//Creado por Diana Ailed Hernández Bustos el 15/10/18

#include<stdio.h>
 
int main(int argc, char *argv[]){

	printf("El programa que estás ejecutando es %s\n", argv[0]);
	char *nombre_archivo;

	FILE *fp;

	if(argc==2){
		nombre_archivo=argv[1];
		printf("El nombre del archivo es: %s\n", nombre_archivo);
		fp=fopen(nombre_archivo, "w+");
		//Aquí se pondría todo lo que se quiere hacer...

		fclose(fp);
	}

	else if(argc>2){
		printf("Más argumentos de los necesarios \n");
	}
	else{
		printf("Se requiere de al menos 1 argumento \n");
	}
return 0;
}
