/*Creado el 15/08/18 por Diana Hernández Bustos */

#include<stdio.h>

int main()
{
   int edad;
   int edad2;
   char nombre[30];

  printf("Hola, pon tu nombre \n");
  scanf("%s",&nombre);
  printf("Este es el primer programa del curso \n");

  printf("\n Introduce tu edad:\n");
  scanf("%i",&edad);
  edad2=edad + 10;
  printf("\n %s tu edad dentro de 10 años (2018) es: %i\n",nombre,edad2);
  return 0;
}
