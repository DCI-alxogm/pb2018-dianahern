//Creado por Diana Ailed Hernández BUstos el 13/09/18

#include<stdio.h>

int main(){

	FILE *archivo;
	float var1, var2;
	

	archivo=fopen("test.txt","w");
	fputs("Esta es una prueba de fputs...\n", archivo);
	fprintf(archivo,"fprintf...\n");
	var1=0.15;
	var2=100.8;
	fprintf(archivo, "%f \n %f \n",var1, var2);
	fclose(archivo);
return 0;
}

