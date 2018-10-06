//Creado por Diana Ailed Hernández Bustos el 03/10/18

#include<stdio.h> //Agrego la librería que voy a usar

int main(){

	int var=20; // Declaración de la variable
	int *ip; //Declaración del apuntador
	
	ip=&var; //Asigna la dirección de la variable al apuntador ip

	printf("La dirección de la variable var es: %x \n", (int) &var); //Imprime la dirección de la variable, que viene siendo la misma que la del apuntador ip
	printf("Dirección guardada en el apuntador ip: %x \n", (int) ip);//Imprime la dirección del apuntador ip
	printf("El valor de *ip: %d \n", *ip); //Imprime el valor de ip que viene siendo el mismo que el de la variable

return 0; //Cierra el programa
}
