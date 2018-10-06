//Creado por Diana Ailed Hernández Bustos el 5/10/18

#include<stdio.h> //Incluyo librería

int main(){
	int i, num[6], sum=0; //Hago la declaración de mis variables enteras (sin poner el apuntador). MI variable num es de tipo arreglo con 7 entradas

	printf("Introduce 6 números enteros: \n "); //Imprimo mensaje
	
	for(i=0; i<6; ++i){//Pongo un FOR que corra 6 veces
		//(num+i) es equivalente a &num[i]
		scanf("%d", (num+i));

		//*(num+i) es equivalente a num[i]
		sum+=*(num+i);//Se hace suma de los números 
	}

	printf("Suma =%d", sum); //Se imprime el resultado de la suma

	return 0; //Cierra mi programa
}
