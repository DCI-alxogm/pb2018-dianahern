//Creado por Diana Ailed Hernández Bustos el 11/09/18

#include<stdio.h>

int main(){

	int j, n;
	printf("Dime el número de elementos para trabaja: \n");
	scanf("%i", &n);

	float numeros[n]; //No es la mejor forma de hacer una reserva de memoria dinámica.

	for(j=0; j<n; j++){
	scanf("%f", &numeros[j]);
	numeros[j]*=2;
	printf("%f\n", numeros[j]);
	}
return 0;
}
