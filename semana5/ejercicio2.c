//CReado por Diana Ailed Hernández BUstos el 05/08/18

#include<stdio.h>

int main() 
{

	int n, i, factorial=1, factorial2;

while(factorial==1){

	printf("Dame un número entero para calcular su factorial: \n ");
	scanf("%i", &n);

for(i=1;i<= n;i++){

	factorial= factorial*i;
	factorial2= factorial;
	
	
}
		
	printf("Tu factorial es: %i \n", factorial2);
	printf("¿Quieres hacer otra operación? (Opción 1: sí, Opción 2: no)"); 
	scanf("%i", &factorial);
}

return 0;
}



