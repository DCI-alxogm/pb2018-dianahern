
//Creado por Diana Ailed Hernández Bustos el 19/10/18
#include<stdio.h>//Pongo la librería a usar
void pantalla(int k); //Hago la declaración de la función con entrada pero sin salida


int main(){ //Inicio el cuerpo de mi programa
	int z; //Hago la declaración de mi única variable
	printf("Hola, este programa te permite conocer el efecto de apantallamiento de los metales alcalinos \n "); 
	printf("Anota el número atómico del elemento que corresponda a un metal alcalino: \n"); //Pide Z al usuario
	scanf("%i", &z);
	pantalla(z);//Con esto, se llama a la función pantalla(), utilizando z como variable de entrada
	
return 0; //Se cierra esta función
}



