//Creado por Diana Ailed Hernández BUstos el 04/09/18

#include<stdio.h>
#include<math.h>

int main(){

	int num_final, num_inicial, r, i, o, primo, op=1, contador;

	
	while(op==1){
	contador=0;
	
	printf("Dime un número con el que quieras iniciar: \n");
	scanf("%i", &num_inicial);

	printf("Dime un número con el que quieras terminar: \n");
	scanf("%i", &num_final);

	while((contador)>100){
	printf("Tu intervalo es demasiado grande, escribe otro");
	printf("Dime un número con el que quieras iniciar: \n");
	scanf("%i", &num_inicial);

	printf("Dime un número con el que quieras terminar: \n");
	scanf("%i", &num_final);

	}

	
	for(i=num_inicial; i<=num_final; i++){
	r=sqrt(i);
	primo=1;

		for(o=2; o<=r; o++){

		if((i%o)==0){
		primo=0;
		}
		}

		if(primo==1){
		printf(" %i",i);
		contador++;
			
			if(contador%20==0) printf("\n");

		}	
		}

		
	printf("\n Introduce 1 si quieres volver a realizar el programa, 0 si quieres salir: \n");
	scanf("%i", &op);
	
	
	}

return 0;
}
 
 
