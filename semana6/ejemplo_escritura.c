//Creado por Diana Ailed Hernández BUstos el 13/09/18

#include<stdio.h> //Incluyo la librería

int main(){

	FILE *archivo; //Hago declaración de variable de mi documento que voy a escribir (crear)
	float var1, var2; //Hago declaración de las demás variables
	

	archivo=fopen("test.txt","w"); //Indico que aquí empieza mi documento de escritura llamado "test.txt", "w" indica que es sólo para escribir
	fputs("Esta es una prueba de fputs...\n", archivo); //Fputs sirve para poner frases
	fprintf(archivo,"fprintf...\n"); //Imprimo en mi archivo una palabra
	var1=0.15; //Indico a qué equivale cada variable
	var2=100.8;
	fprintf(archivo, "%f \n %f \n",var1, var2); //Imprimo las variables numéricas decimales de tipo float
	fclose(archivo); //Indico que hasta aquí llega mi documento de escritura
return 0;
} //Cierro el programa 

