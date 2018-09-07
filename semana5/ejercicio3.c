//Creado por Diana Ailed Hernández Bustos el 04/09/18

#include<stdio.h> //Incluyo las librerías que voy a utilizar. 
#include<math.h> //Utilizo math.h porque voy a necesitar hacer una raíz 

int main(){

	int num_final, num_inicial, resultado, i, j, primo, op=1, contador; //Hago declaración de variables de tipo entero
	
	while(op==1){ //El while siempre va a funcionar siempre y cuando op se igual a 1
	contador=0; //Mi contador debe iniciar en 0 siempre para que se vaya añadiendo las veces que corra mi programa
	
	printf("Dime un número con el que quieras iniciar: \n"); //PIdo la información del intervalo que me la va a dar mi usuario
	scanf("%i", &num_inicial);

	printf("Dime un número con el que quieras terminar: \n");
	scanf("%i", &num_final);

	while((num_final-num_inicial)>100){ //Este while se va a correr cuando mi intervalo sea mayor que 100
	printf("\n Tu intervalo es demasiado grande, escribe otro más chico:\n"); //Va a comunicar al usuario que es muy grande su intervalo, y que por lo tanto, debe dar otro menor.
	printf("\n Dime un número con el que quieras iniciar: \n");
	scanf("%i", &num_inicial);

	printf("Dime un número con el que quieras terminar: \n");
	scanf("%i", &num_final);
	}

	for(i=num_inicial; i<=num_final; i++){ //Este FOR sirve para que i vaya agarrando el valor de todos los números que se encuentran entre el intervalo dado por el usuario.
	resultado=sqrt(i); //El resultado es la raíz de cada valor que toma i
	primo=1; //Primo vale 1

		for(j=2; j<=resultado; j++){ //Si queremos determinar los números primos se tiene que dividir el resultado de la raíz del número y dividirla entre todos los números del 2 al resultado que salió

		if((i%j)==0){ //Si sale 0, entonces no es primo
		primo=0;
		}
		}

		if(primo==1){ //Si sale que el residuo es 1, entonces es un número primo y se imprime
		printf(" %i",i);
		contador=contador+1; //El contador indica cuántos números primos has impreso
			
			if(contador==20){
			printf("\n"); //ESta condición indica que cuando el contador llegue a 20, entonces hay un salto de línea
			}

		}	
		}

		
	printf("\n Introduce 1 si quieres volver a realizar el programa, 2 si quieres salir: \n"); //Da la opción al usuario de volver a correr el programa
	scanf("%i", &op);
	
	}

return 0; //Cierra el programa
}
 
	


	


	
