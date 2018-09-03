//Elaborado por Diana Ailed Hernández Bustos el 3/09/18

#include<stdio.h>

int main()
{

	float temp_C, temp_K;
	float final, delta;
	int n,i;
	char op='s';

while(op=='s'){
	
	printf("Introduzca una temperatura en grados centígrados inicial\n");
	scanf("%f", &temp_C);
	printf("Introduce tu temperatura final\n");
	scanf("%f", &final);
	printf("Introduce las veces que quiere que este programa se corra: \n");
	scanf("%i", &n);
	delta=(final-temp_C)/n;

	for(i=0;i<n;i++){
	
	  temp_K=temp_C+273.15;
	  printf("%f %f\n",temp_C, temp_K);
	  temp_C=temp_C+delta;
	}
	printf("¿Quieres hacer otra operación? Escribe si para volver a hacer el programa o no, si quieres salir.\n");
	scanf("%s", &op);
}
	return 0;
}

	
