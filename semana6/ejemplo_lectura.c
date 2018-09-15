//Creado por Diana Ailed Hernández Bustos el 13/09/18

#include<stdio.h> //Incluyo la librería

int main(){

	FILE*archivo;	//Hago declaración de variable de mi documento que voy a leer
	char var[255]; //Establezco una variable con string de caracetres
	float var1, var2; //Variables de tipo decimal
	

	archivo=fopen("test.txt","r"); //Abro mi documento de lectura, "r" indica que es sólo para leer
	fgets(var,255,(FILE*)archivo); //Sirve para escanear una variable de mi documento de tipo cadena
	printf("%s", var); //Se imprime esta variable
	fscanf(archivo,"%s",var); //Se escanea de mi documento una variable de tipo numérica por eso es fscanf
	printf("%s\n", var); //SE imprime la variable
	fscanf(archivo,"%f %f",&var1, &var2); //Se escanea de mi documento una variable de tipo numérica por eso es fscanf
	printf("%f %f\n",var1,var2); //Se imprimen estas variables
	fclose(archivo); //SE cierra el documento que se estaba leyendo

return 0; //SE cierra programa
}
