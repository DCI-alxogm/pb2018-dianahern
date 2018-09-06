//Creado por Diana Ailed Hernández Bustos el 06/09/18

#include<stdio.h>
#include<math.h>

int main(){

	int opcion=0; binario=0, aux=0, count=0; decimal=0;
	char bin[100];
	printf("¿Qué operación deseas realizar?: \n 1)Convertir un número binario a decimal \n 2)Convertir un número decimal a binario:\n");
	scanf("%i", &opcion);

switch(opcion){

	case 1:
	printf("Introduce un número binario: \n");
	scanf("%i", &binario);

	while(binario>0){
		aux=binario%10;
		if(aux!=0){
			decimal+=pow(2,count);
		}
		binario/=10;
		count++;

	}
	printf("\n Su número binario en decimal es: %i \n", decimal);
	break;


	case 2:
	printf("Introduce un número decimal entero: \n");
	scanf("%i", &decimal);


	while(decimal>0){
		if(decimal%2==1){
			bin[count++]='1';
		}
		else{
			bin[count++]='0';
		}
		decimal/=2;
	}
	for(int i=count; i>0; i--){
		printf("%c", bin[i-1]);
	}
	break;
}
return 0;





	printf("\n Ese número en binario es: %i", bin)
