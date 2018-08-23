/*Este programa fue hecho por Diana Ailed Hernández Bustos el 23/08/18*/

#include<stdio.h> //Incluyo la librería que voy a usar


int main(){

	int a; //Hago la declaración de mi única variable, utilizando int porque va a ser entera

	printf("Introduce un número cualquiera:\n");
	scanf("%i", &a);
/*Scanf se usa para que pida info. al usuario, en este caso es %i porque es un entero*/ 
	
	if(a%2==0){ 
//a%2 significa que tu número se divide entre 2 y == es igual
	printf("Tu número, %i, es par.\n",a);
	}
	else{
// Else indica lo que ocurre cuando la operación en if no se llevó a cabo*/
	printf("Tu número, %i, es impar.\n",a);
	}
/*Es necesario abrir y cerrar llaves cuando se usa if y else*/
return 0;
} 

