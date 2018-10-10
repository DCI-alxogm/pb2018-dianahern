//Creado por Diana Ailed Hernández Bustos el 10/10/18

#include<stdio.h>
float cuadrado();

int main(){

	float xx;
	xx=cuadrado();
	printf("%f \n", xx);	
	return 0;
}

float cuadrado(){
	float x, x2;
	printf("Introduce un número \n");
	scanf("%f", &x);
	x2= x*x;	
	printf("El cuadrado de %f es ", x);	
	return x2;	
}
