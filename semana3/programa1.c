/* ESte programa fue creado por Diana Ailed Hern+andez Bustos el 20/08/18 */

#include<stdio.h> 
/*Incluyo la librería correspondiente*/

int main()
{

  float cent;
  float kelvin;
  float faren;
  float cent2;

  printf("\n Hola, dime una temperatura en centígrados:");
  scanf("%f",&cent);
/*Utilicé %f porque el valor de centígrados incluye decimales*/

  kelvin=cent+273;
  printf("Tu temperatura en grados Kelvin es de:%f\n",kelvin);
/*Utilicé %f porque el valor de Kelvin incluye decimales*/
  
  faren=1.8*cent+32;
  printf("Tu temperatura en grados Farenheight es de:%f\n",faren);
/*Utilicé %f porque el valor de faren incluye decimales*/

  cent2=(faren-32)/1.8;
  printf("Tu temperatura en grados centígrados a partir del resultado de Farenheight es de:%f\n",cent2);
/*Utilicé %f porque el valor de centígrados incluye decimales*/

  return 0; //Sirve para cerrar el programa
}

