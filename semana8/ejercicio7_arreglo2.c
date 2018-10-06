//Creado por Diana Ailed Hernández Bustos el 5/10/18

#include<stdio.h> //Incluyo la librería principal
#include<stdlib.h> //Incluyo la librería de memoria dinámica 

int main(){ //Inicio mi programa
	int i, sum=0; //Hago declaración de mis variables enteras
	int *num; //Hago la declaración de mi apuntador

	printf("Introduce 6 números enteros: \n "); //Introduzco un mensaje al usuario
	
	num=(int*) malloc(6 * sizeof(int)); //POngo a qué equivale mi apuntador, en este caso a la variable "num", esto significa que va a va a haber 6 bloques de memoria, uno para cada valor que el usuario ponga

	for(i=0; i<6; ++i){ //Hago un FOR que corra 6 veces de 1 en 1
		//(num+i) es equivalente a &num[i]
		scanf("%i", &num[i]);

		//*(num+i) es equivalente a num[i]
		sum+= num[i];
	}

	printf("Suma =%i", sum); //Se imprime el resultado de la suma calculada anteriormente

	return 0; //Se cierra el programa
}
