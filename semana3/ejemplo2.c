/*Este programa fue creado por Diana Ailed Hernández Bustos el 23/08/18*/

#include<stdio.h>
//Incluyo la librería que voy a usar

int main(){

	int numero1, numero2; //Escribo todas las variables que son enteras

	printf("Hola, introduzca dos número enteros:");
	scanf("%i %i", &numero1, &numero2);
//Se puede escanear 2 números al mismo tiempo

	if(numero1==numero2)
	{
//Inicias la 1° condición con If y dentro del paréntesis la escribes
	printf("\n Resultado: %d = %d \n", numero1, numero2);
	}

	else if(numero1>numero2)
	{
	printf("\n Resultado: %d > %d \n", numero1, numero2);
	}
//Else se utiliza cuando no se cumple la primera condición

	else 
	{
	printf("\n Resultado: %d < %d \n", numero1, numero2);
	}
//If y else siempre llevan {} 
return 0;
}


