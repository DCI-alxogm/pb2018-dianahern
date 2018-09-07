//Creado por Diana Ailed Hernández Bustos el 06/09/18

#include<stdio.h> //Incluyo las librerías que voy a usar en este programa
#include<math.h> //Utilicé la librería math.h porque voy a utilizar exponentes

int main(){

	int opcion, binario=0, resultado=0, i, contador=0, decimal=0; //Hago la declaración de mis variables de tipo entero
	char bin[100]; // Tengo que utilizar una cadena de strings, de caracteres para calcular la conversión de números decimales a binarios, pues voy a tener que separar cada una de los dígitos del número.

	printf("¿Qué operación deseas realizar?: \n 1)Convertir un número binario a decimal \n 2)Convertir un número decimal a binario:\n");
	scanf("%i", &opcion); //Utilizo esto para darle a mi usuario la oportunidad de decidir qué operación quiere realizar

switch(opcion){ //Utilizo switch para poner los 2 tipos de programas que puede realizar el usuario

	case 1:
	printf("Introduce un número binario: \n"); //Le pido que me dé un npumero binario que contiene dígitos de 1 y 0
	scanf("%i", &binario);

	while(binario>0){ //Siempre que binario (el cual está cambiando cada vez que se corra una y otra vez sea mayor a 0 se realizará lo siguiente
		resultado=binario%10; //Pongo nueva variable que sea igual al residuo de dividir el número binario entre 10
		if(resultado!=0){ //Si el residuo de la operación anterior es diferente de 0 se realiza:
			
			decimal= decimal+(pow(2,contador)); //Operación que va elevando a la potencia la base 2 inciando en 0 y acabando en un número menor al número de dígitos qu tiene el binario (gracias al contador). Luego se hace una sumatoria. 
		}
		binario= binario/ 10; //El binario va a ir cambiando al ser dividido una y otra vez entre 10 hasta que llegue a 0 
		contador=contador+1; //ESto va a ayudar a que se eleve a la correcta potencia la base 2 en la operación anterior

	}
	printf("\n Su número binario en decimal es: %i \n", decimal); //Se imprime el resultado de la conversión
	break; //SE acaba esta parte del programa


	case 2:
	printf("Introduce un número decimal entero: \n"); //SE pide información al usuario
	scanf("%i", &decimal);
	printf("\n Su equivalente en binario es:\n"); //Es necesario poner este mensaje antes de las operaciones, ya que el resultado se va a dar en un string (dígito por dígito con salto de línea entre ellos) y sólo se requiere que este mensaje se imprima una vez

	while(decimal>0){ //Siempre que el número sea mayor a 0, se realizará lo siguiente:
		if(decimal%2==1){ //Si la división del número entre 2 tiene como residuo 1, entonces, el siguiente dígito será 1
			bin[contador++]='1'; //El carácter string va ir relacionado con el contador, ya que es importante el orden para determinar el número binario. En este caso la posición "x" tendrá un valor de 1.
		}
		else{ //Si no tiene residuo, es divisible entre2, el siguiente dígito será 0
			bin[contador++]='0';//El carácter string va ir relacionado con el contador, ya que es importante el orden para determinar el número binario. En este caso la posición "x" tendrá un valor de 0.
		}
		decimal= decimal/2; //ESta operación es necesaria para que el número decimal vaya cambiando de acuerdo a los ciclos de while
	}
	for(i=contador; i>0; i--){ //El FOR se usa para ordenar los dígitos que salieron atrás. Va a iniciar en contador (el cual inicia en 0) y va a ser mayor a 0. Va ir de menos en menos 1, ya que los números binarios van al revés de como se obtienen.
		
		printf(" %c \n", bin[i-1]); //Se imprime cada string de la cadena de caracteres que forman a bin al revés de como se obtuvieron. UTilicé %c porque bin es de tipo char.
	}
	
	break; //Se finaliza la 2° parte de este programa
}
return 0; //Se cierra el programa
}

