/* ESte programa fue creado por Diana Ailed Hern+andez Bustos el 20/08/18 */

#include<stdio.h> 
/*Incluyo la librería correspondiente*/

int main()
{

//Inicio con el comando maestro para escribir cuerpo del programa
  float cent;
  float kelvin;
  float faren;
  float cent2;

//Hago la declaración de variables, en este caso, todas son float porque voy a necesitar decimales.
  printf("\n Hola, dime una temperatura en centígrados:");
//Printf sirve para pedir info. al usuario.
  scanf("%f",&cent);
/*Utilicé %f porque el valor de centígrados incluye decimales*/

  kelvin=cent+273;
//Aquí incluyo la operación que quiero que se haga.
  printf("Tu temperatura en grados Kelvin es de:%f\n",kelvin);
/*Utilicé %f porque el valor de Kelvin incluye decimales*/
  
  faren=1.8*cent+32;
//Escribo la operación que me dé esta variable.
  printf("Tu temperatura en grados Farenheight es de:%f\n",faren);
/*Utilicé %f porque el valor de faren incluye decimales*/

  cent2=(faren-32)/1.8;
  printf("Tu temperatura en grados centígrados a partir del resultado de Farenheight es de:%f\n",cent2);
/*Utilicé %f porque el valor de centígrados incluye decimales*/

  return 0; //Sirve para cerrar el programa
}

