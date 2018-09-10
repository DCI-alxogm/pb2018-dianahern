//Creado por Diana Ailed Hernández Bustos el 10/09/18

#include<stdio.h>

int main(){

	int i, N;
	printf("CUántos elementos quieres utilizar?: \n");
	scanf("%i", &N);
	float numeros[10]; //No es la mejor forma de hacer una reserva de memoria dinámica

	
	for(i=0; i<N; i++){
	
	scanf("%f", &numeros[i]);
	numeros[i]*=2;	
	printf("%f \n", numeros[i]);
	}

return 0;
}
