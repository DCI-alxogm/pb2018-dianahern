//Creado por Diana Ailed Hernández Bustos el 03/09/18

#include<stdio.h>
#include<math.h> //Pongo las 2 librerías que voy a usar. Una de ellas es math.h porque voy a usar la función exp (exponencial)

int main() //INicio con la función maestra
{
	float exp_; //Exponencial es el resultado de mi operación y es de tipo decimal por es es float
	int n=10,j; //Las variables de FOR siempre son enteros. n, que indica cuántas veces se repite la operación, dice que van as er 10
	
	for(j=0;j<n;j++){ //FOR indica que la operación siguiente se repita 10 veces y que vaya de 1 en 1
	  exp_=exp(j); //Operación, donde j va a estar cambiando constantemente
	  printf("%i \t %f\n",j,exp_);
	
	} //Llave que cierra el FOR.
return 0; //Cierra el programa
}

