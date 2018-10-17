//Creado por Diana Ailed Hernández Bustos el 15/10/18

#include<stdio.h> //Pongo las librerías que voy a usar 
#include<stdlib.h> //Utilizo esta librería porque voy a usar memoria dinámica

int main(int argc, char *argv[]){ //Utilizo arreglos de 2 tipos: char e int, que se ponen en el compilador
	printf("El programa que se está ejecutando es: %s\n", argv[0]);//Se direcciona el arreglo 0 al nombre del programa
	char *nombre_archivo; //Se hace la declaración de variables
	float xin, xfin, yin, yfin, zin, zfin, deltax, deltay, deltaz;
	int N, i;
	 
	FILE *fp;//Se hace la declaración del archivo de escritura

	if(argc==9){ //Si los argumentos en el compilador es igual a 9 (tiene todos los elementos que se necesitan)
		xin=atof(argv[1]); //SE transforman los argumentos a números enteros
		xfin=atof(argv[2]);

		yin=atof(argv[3]);
		yfin=atof(argv[4]);

		zin=atof(argv[5]);
		zfin=atof(argv[6]);

		N=atoi(argv[7]);
		nombre_archivo=argv[8];

		deltax=(xfin-xin)/N;
		deltay=(yfin-yin)/N;
		deltaz=(zfin-zin)/N;
		
		printf("El nombre del archivo a abrir es: %s\n", nombre_archivo);
		fp=fopen(nombre_archivo, "w+");

		for(i=0; i<=N; i++){
			fprintf(fp, "%f \t %f \t %f \t \n", xin, yin, zin);
			//Aquí se pondría todo lo demás que se quiera hacer

			xin+=(deltax);
			yin+=(deltay);
			zin+=(deltaz);
			
			
		}
	fclose(fp);
	}

	else if (argc >9){
		printf("Diste más argumentos de los necesarios \n");
	}

	else{
		printf("Se requiere de al menos 9 argumentos:xin, xfin, yin, yfin, zin, zfin, cantidad de numeros, nombre archivo \n");
	}
return 0;
}


