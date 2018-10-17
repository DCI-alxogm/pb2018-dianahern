
//Creado por Diana Ailed Hernández Bustos el 19/10/18
#include<stdio.h>
void pantalla(int k);


int main(){ //Inicio el cuerpo de mi programa
	int z;
	printf("Hola, este programa te permite conocer el efecto de apantallamiento de los metales alcalinos \n ");
	printf("Anota el número atómico del elemento que corresponda a un metal alcalino: \n"); //Pide Z al usuario
	scanf("%i", &z);
	pantalla(z);
	
return 0;
}



