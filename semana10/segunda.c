//Creado por Diana Ailed Hernández Bustos el 19/10/18
#include<stdio.h>

void pantalla (int k){ //Inicio el cuerpo de mi programa
	int z, e, total; //Tengo que volver a poner la misma variable que en el programa 1 "z".
	float  s, s2, s3, carga; //Hago la declaración de mis demás variables
	z=k; //Tuve que igualar "z" (el dato adquirido en el 1° documento) a la variable que voy a usar en esta función
//Se hacen las operaciones necesarias para calcular la carga nuclear efectiva
	total= (z-1);
	s=(0.85*6);
	printf("Escribe cuántos electrones en la misma capa tiene el elemento:");
	scanf("%i", &e);
	s2=(0.35*e);
	s3=s+s2+(total-e-6);

	carga=z-s3;
	printf("La carga nuclear efectiva es de:%f, \n", carga); //Imprimo el resultado obtenido
} //Cierro mi documento
