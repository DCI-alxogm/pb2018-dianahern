/* ESte programa fue creado por Diana Ailed Hernández Bustos el 20/08/18*/

#include<stdio.h>
#include<math.h>
/*Incluí la librería math.h porque vamos a utilizar funciones como coseno inverso, etc.*/

int main(){

	float x,y,z,r,o,l,x2,y2,z2;
/*Utilicé float porque quiero que el resultado sea decimal.*/
	
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
return 0;
/*Return sirve para cerrar el programa.*/
}


