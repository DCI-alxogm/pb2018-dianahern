//Creado por Diana Ailed Hernández Bustos el 10/10/18

#include<stdio.h>
void cuadrado(float h);

int main(){
	float x;
	printf("Introduce un número \n");
	scanf("%f", &x);
	cuadrado(x);		
	return 0;
}

void cuadrado(float h){
	float x, x2;
	x=h;	
	x2= h*h;
	printf("El cuadrado de %f es %f \n", x, x2);	
}
