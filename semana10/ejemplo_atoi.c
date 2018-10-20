//Creado por Diana Ailed Hernández Bustos el 15/10/18

#include<stdio.h> //Puse librería necesarias 
#include<stdlib.h> //Utilicé esta librería porque usé memoria dinámica en este programa
 
int main(int argc, char *argv[]){ //Hice la declaración de mis argumentos que iba a dar en la compilación 
	printf("El programa que se está ejecutando es: %s\n", argv[0]);
	char *nombre_archivo; //Hice la declaración de todas las variables que usé en este programa
	float Tin, Tfin;
	int num; 
	FILE *fp; //DEclaré el archivo de escritura

	if(argc==5){ //Condición para que corra el programa cuadno el número de argumentos sea correcto
	//Hice la igualación de mis variables a los argumentos, para lo cual tuve que convertirlos a números enteros o flotantes.
		Tin=atof(argv[1]);
		Tfin=atof(argv[2]); //Indica la conversión de un argumento a número flotante
		num=atoi(argv[3]);//Indica la conversión de un argumento a número entero
		nombre_archivo= argv[4]; //Igualé el argumento 4 al nombre del archivo

		printf("El nombre del archivo a abrir es: %s\n", nombre_archivo);
		fp=fopen(nombre_archivo, "w+"); //Abro mi documento de escritura
		fprintf(fp, "Tin: %f, \t Tfin: %f, \t N:%i", Tin, Tfin, num); //Imprimo mis variables en mi doc. de escritura
		//Aquíse pondría todo lo demás que se quiera hacer

		fclose(fp);
	}
//Condiciones cuando el número de argumentos no es el correcto:
	else if (argc >5){
		printf("Diste más argumentos de los necesarios \n");
	}

	else{
		printf("Se requiere de al menos 4 argumentos:Tin, Tfin, num, nombre_archivo \n");
	}

return 0; //Cierro mi programa
}


