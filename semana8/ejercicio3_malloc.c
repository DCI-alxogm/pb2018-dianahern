//Creado por Diana Ailed Hdez. Bustos el 03/10/18

#include<stdio.h> //Incluyo la librería central
#include<stdlib.h> //Incluyo esta librería porque voy a usar programas de memoria dinámica

int main(){

	int num, i, *ptr, sum=0; //Hago la declaración de mi apuntador y de mis otras variables enteras

	

	printf("Introduce el número de elementos:"); //Va a pedir los números que quiere que se reserven en malloc
	scanf("%d", &num);//SEa dquiere el valor de num

	

	if(ptr==NULL){ //Dice que si ptr es igual a NULL espacio en memoria con dirección 0, entonces que se cierre el programa
		printf("Error! memoria reservada"); //Envía este mensaje
		exit(0); //Se sale del programa

	}
	ptr=(int*) malloc(num*sizeof(int)); //memoria reservada usando malloc


	printf("Introduce los elementos del arreglo:");//Si num es válido, entonces se piden los elementos del arreglo

	for(i=0; i<num; i++){//ESte FOR corre desde 0 hasta el número de veces que el usuario puso en num
		scanf("%d", ptr+1); //Se escanean los números que se quieren guardar en ptr
		sum+=*(ptr+1);//Se establece q2ue se vayan sumando los valores guardados en cada bloque de ptr
	}

	printf("Sum= %d", sum); //Se imprime la suma de los valores guardados en ptr
	free(ptr); //Se libera la memoria de ptr

return 0; //Se cierra el programa
}







