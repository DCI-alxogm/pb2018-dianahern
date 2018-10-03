//Creado por Diana Ailed Hernández Bustos el 03/10/18

#include<stdio.h>

int main(){

	int var=20; // Declaración de la variable
	int *ip; //DEclaración del apuntador
	
	ip=&var; //Asigna la dirección de la variable al apuntador ip

	printf("La dirección de la variable var es: %x \n", (int) &var);
	printf("Dirección guardada en el apuntador ip: %x \n", (int) ip);
	printf("El valor de *ip: %d \n", *ip);

return 0;
}
