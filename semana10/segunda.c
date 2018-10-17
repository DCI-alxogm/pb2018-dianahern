//Creado por Diana Ailed Hernández Bustos el 19/10/18
#include<stdio.h>

void pantalla (int k){ //Inicio el cuerpo de mi programa
	int z, e, total;
	float  s, s2, s3, carga;
	z=k;
	total= (z-1);
	s=(0.85*6);
	printf("Escribe cuántos electrones en la misma capa tiene el elemento:");
	scanf("%i", &e);
	s2=(0.35*e);
	s3=s+s2+(total-e-6);

	carga=z-s3;
	printf("La carga nuclear efectiva es de:%f, \n", carga);
}
