/* Creado por Diana Hernández Bustos el 16/08/18*/

#include<stdio.h>

int main()
{
/*Puse una variable para cada número pedido y para cada resultado de las operaciones*/
  int a;
  int b;
  int c;
  int d;
  int n1;
  int n2;
  int n3;
  int n4;
/* puse int porque quiero que los resultados sean enteros*/

  printf("Hola, escribe un número entero: \n");
/* Aquí pedí un primer número entero y dejé un espacio para que no se amontonara */
  scanf("%i",&a);
  printf("Ahora escribe un segundo número entero: \n");
/* Aquí pedí otro número entero y dejé un espacio para que no se amontonara */ 
  scanf("%i",&b);
  printf("Ecribe un tercer número entero: \n");
/* Aquí pedí otro número entero y dejé un espacio para que no se amontonara */
  scanf("%i",&c);
  printf("Escribe un último número entero: \n");
/* Aquí pedí un último número entero y dejé un espacio para que no se amontonara */
  scanf("%i",&d);

  n1=(a+b)*c/d;
  printf("\n La respuesta de la primera operación es:%i \n",n1);
  n2=((a+b)*c)/d;
  printf("\n La respuesta de la segunda operación es:%i \n",n2);
  n3=(a+b)*c/d;
  printf("\n La respuesta de la tercera operación es:%i \n",n3);
  n4=a+(b*c)/d;
  printf("\n La respuesta de la cuarta operación es:%i \n",n4);
/* En todas las respuestas puse %i para que el resultado sea entero */

return(0);
}

  
	
