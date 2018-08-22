/*Este programa fue realizado por Diana Ailed Hernández Bustos el 22/08/18*/

#include<stdio.h>
#include<math.h>

int main()
{
	int opcion;
 	float cent;
 	float kelvin;
  	float faren;
  	float cent2;
 	float x,y,z,r,o,l,x2,y2,z2;

  printf("\n Hola, dime qué operación quieres realizar:\n");
  printf("Opción1: calcula la temperatura de grados C a K y F y viceversa\n");
  printf("Opción2: calcula la conversión de coordenadas cartesianas a esféricas y viceversa:\n");
  scanf("%i", &opcion);
  
 switch(opcion)
  {
  case 1:

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

  break;

 case 2:

	printf("Introduce una coordenada en el eje x:");
	scanf("%f",&x);

	printf("\n Ahora, introduce una coordenada en el eje y:");
	scanf("%f",&y);

	printf("\n Después, introduce una coordenada en el eje z:");
	scanf("%f",&z);

	r=sqrt(pow(x,2)+pow(y,2)+pow(z,2));
	o=(acos(z/r));
	l=(atan(y/x));
/*La función "pow" sirve para elevar un número a un exponente y la palabra "sqrt" sirve para sacar raíz cuadrada al resultado. También fue importante poner atención a la jerarquía de operaciones con paréntesis*/

	printf("\n La conversión de tus coordenadas cartesianas a esféricas son: r= %f, o= %f y l= %f \n",r,o,l);

	x2=r*sin(o)*cos(l);
	y2=r*sin(o)*sin(l);
	z2=r*cos(o);

	printf("La conversión de tus coordenadas esféricas a cartesianas son: x= %f, y= %f y z=%f \n",x2,y2,z2);
 break;

  default:
  printf("\n No existe la opción que está indicando, favor de escoger entre opción1 u opción2");
  
  break;
}

return 0;
/*Return sirve para cerrar el programa.*/
}
