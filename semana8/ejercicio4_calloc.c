//Creado por Diana Ailed Hernández Bustos el 5/10/18

#include<stdio.h>//Incluyo la librería central
#include<stdlib.h> //Incluyo esta librería porque voy a usar programas de memoria dinámica

int main(){
	int num, i, *ptr, sum=0;//Hago la declaración de mi apuntador y de mis otras variables enteras

	printf("Introduce el número de elementos: ");//Se le pide al usuario que ponga el número de elementos que quiera que se pongan en calloc
	scanf("%d", &num);//Se le da un valor a la variable num

	ptr=(int*) calloc(num, sizeof(int)); //Se establce qué memoria va a ocupar calloc

	if(ptr==NULL){//Dice que si ptr es igual a NULL espacio en memoria con dirección 0, entonces que se cierre el programa
		printf("Error! memoria reservada"); //Envía este mensaje
		exit(0); //Se sale del programa

	}

	printf("Introduce los elementos del arreglo:");//Se le pide al usuario que inserte los números que quiera sumar

	for(i=0; i<num; i++){ //Se pone un FOR que vaya desde 0 hasta el número de elementos definidos por el usuario
		scanf("%d", ptr+i);//Se escanea la info. de ptr 
		sum+=*(ptr+i); //Se hace la suma de los valores guardados en ptr
	}

	printf("Sum=%d", sum); //Se imprime la suma
	free(ptr); //Se libera la memoria de ptr
	return 0; //Se cierra el programa
}
	
