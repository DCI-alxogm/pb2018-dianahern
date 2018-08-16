/* Creado por Diana Hernández Bustos el 16/08/18*/

#include<stdio.h>

int main()
{
/*Puse una variable para cada número pedido y para cada resultado de las operaciones*/
  float a;
  float b;
  float c;
  float d;
  float n1;
  float n2;
  float n3;
  float n4;
/* puse float porque quiero que los resultados sean números reales (es decir que incluya decimales también*/

  printf("Hola, escribe un número: \n");
/* Aquí pedí un primer número (puede ser decimal) y dejé un espacio para que no se amontonara */
  scanf("%f",&a);
  printf("Ahora escribe un segundo número: \n");
/* Aquí pedí otro número y dejé un espacio para que no se amontonara */ 
  scanf("%f",&b);
  printf("Ecribe un tercer número: \n");
/* Aquí pedí otro número y dejé un espacio para que no se amontonara */
  scanf("%f",&c);
  printf("Escribe un último número: \n");
/* Aquí pedí un último número y dejé un espacio para que no se amontonara */
  scanf("%f",&d);

  n1=(a+b)*c/d;
  printf("\nLa respuesta de la primera operación es:%f \n",n1);
  n2=((a+b)*c)/d;
  printf("\nLa respuesta de la segunda operación es:%f \n",n2);
  n3=(a+b)*c/d;
  printf("\nLa respuesta de la tercera operación es:%f \n",n3);
  n4=a+(b*c)/d;
  printf("\nLa respuesta de la cuarta operación es:%f \n",n4);
/* En todas las respuestas puse %f para que el resultado sea real:es decir que pueda ser decimal */

return(0);
}
