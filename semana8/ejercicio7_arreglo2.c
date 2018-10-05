//Creado por Diana Ailed Hernpandez Bustos el 5/10/18

#include<stdio.h>
#include<stdlib.h>

int main(){
	int i, sum=0;
	int *num;

	printf("Introduce 6 números enteros: \n ");
	
	num=(int*) malloc(6 * sizeof(int));

	for(i=0; i<6; ++i){
		//(num+i) es equivalente a &num[i]
		scanf("%i", &num[i]);

		//*(num+i) es equivalente a num[i]
		sum+= num[i];
	}

	printf("Suma =%i", sum);

	return 0;
}
