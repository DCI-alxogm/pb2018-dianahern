/*ESte programa fue creado por Diana Ailed Hernández Bustos el 20/08/18*/

#include<stdio.h>
#include<math.h>
/*Para este programa es necesario utilizar la librería math.h porque vamos a usar variables que pertenecen a la misma como coseno, tangente, etc.*/

int main(){
//Inicio el cuerpo del programa.

	float xrad; //Hago la declaración de variables con float y long double porque voy a usar decimales
	float xgrados;
	float y;
	long double y2;
/*Utilicé 2 variables para x porque coseno y tangente funcionan con radianes y no con grados*/

	printf("\n Hola, dime un número cualquiera en grados:");
//Printf, me ayuda a pedir info. al usuario.
	scanf("%f",&xgrados);

/*Utilicé %f porque mis dos variables son decimales*/

	y2=exp((-1)*xgrados);
//Escribo mi primera operación, utilizando *para la multiplicación.
	printf("\n El resultado de la primera operación es:%Le\n",y2);

/*En este caso usé mi variable xgrados porque esta operación se realiza en grados no en radianes*/

	xrad=xgrados/57.3;
//Primero es necesario establecer la conversión de radianes a grados para que cos y tan puedan utilizarla	
	y=cos(xrad)+(2*tan(xrad/2));
/*En este caso usé mi variable xrad porque esta operación se realiza en radianes*/
	
	printf("\n El resultado de la segunda operación es:%f\n",y);

	y=log(xgrados)+(3*xgrados*xgrados);
//Se utiliza log para la 3° operación.
	printf("\n El resultado de la tercera operación es:%f\n",y);

	return 0;
/*En este programa la variable "y" va cambiando conforme se van realizando las diferentes ecuaciones*/
}
	

