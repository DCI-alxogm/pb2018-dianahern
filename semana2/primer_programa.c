/*Creado el 15/08/18 por Diana Hernández Bustos */

#include<stdio.h>

int main()
{
   int edad;
   int edad2;
   char nombre[30];

  printf("Hola, pon tu nombre \n");
/* Utilizo printf para que pida al usuario información*/
  scanf("%s",&nombre);
/*Utilizo scanf para que el usuario pueda ingresar información a la compu, y %s para que la computadora lea letras*/
  printf("Este es el primer programa del curso \n");

  printf("\n Introduce tu edad:\n");
  scanf("%i",&edad);
  edad2=edad + 10;
/*Hice la operación*/
  printf("\n %s tu edad dentro de 10 años (2018) es: %i\n",nombre,edad2);
/*%i indica que edad2 debe imprimirse como un entero*/
  return 0;
}
