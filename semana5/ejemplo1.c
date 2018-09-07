//Elaborado por Diana Ailed Hernández Bustos el 3/09/18

#include<stdio.h> //Incluyo la librería que voy a usar

int main() //Inicio con mi función principal
{

	float temp_C, temp_K; //Hago la declaración de mis variables, en este caso son float porque mi programa realiza operaciones con números decimales
	float final, delta; //Delta va a calcular la cantidad de desplazamiento que hay entre las temperaturas que se van a calcular.
	int n,i; //Estas variables SIEMPRE son enteras, ya que queremos que vaya de uno en uno
	char op='s'; //Es de tipo char porque voy a usar letras

while(op=='s'){ //Este while me permite la opción de que el usuario pueda realizar las operaciones que deseé las veces que quiera, siempre que ponga si
	
	printf("Introduzca una temperatura en grados centígrados inicial\n"); //SE pide la información al usuario
	scanf("%f", &temp_C); //Se guarda la información en computadora 
	printf("Introduce tu temperatura final\n");
	scanf("%f", &final);
	printf("Introduce las veces que quiere que este programa se corra: \n");
	scanf("%i", &n);
	delta=(final-temp_C)/n; //Se establece cada cuánto de temperatura se va a realizar la operación.


	for(i=0;i<n;i++){ //El for sirve para que las instrucciones se realicen entre un intérvalo de 0-n y que vaya de 1 en 1.
	
	  temp_K=temp_C+273.15; //Hago las operaciones que necesito para transformar °C a K
	  printf("%f %f\n",temp_C, temp_K);
	  temp_C=temp_C+delta;
	}
	printf("¿Quieres hacer otra operación? Escribe si para volver a hacer el programa o no, si quieres salir.\n"); //Esta parte pide a usuario si quiere o no repetir todo.
	scanf("%s", &op); //Esto permite la opción de que el usuario pueda realizar las operaciones que deseé las veces que quiera, siempre que ponga si
}
	return 0; //Cierra el programa
}

	
