//Creado por Diana Ailed Hernández Bustos el 13/09/18

#include<stdio.h>

int main(){

	FILE*archivo;	
	char var[255];
	float var1, var2;
	

	archivo=fopen("test.txt","r");
	fgets(var,255,(FILE*)archivo);
	printf("%s", var);
	fscanf(archivo,"%s",var);
	printf("%s\n", var);
	fscanf(archivo,"%f %f",&var1, &var2);
	printf("%f %f\n",var1,var2);
	fclose(archivo);

return 0;
}
