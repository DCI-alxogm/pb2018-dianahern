//Elaborado por Diana Ailed Hernández Bustos el 03/09/18
#include<stdio.h> //Incluyo las librerías que voy a usar
#include<math.h> //Utilizo math.h porque voy a hacer multiplicaciones

int main(){

	float res;//Mi resultado es de tipo float porque va a tener decimales
	int n=3, k, j; //Las variables dentro de for siempre son enteras. EStablezco mi límite superior, es decir "n", que ayuda a determinar cuántas veces quiero que mi programa se corra
	
	for(j=0;j<n;j++){ //Dice que lo que sigue a continuación se corra s+olo 3 veces y que vaya de 1 en 1 el valor de j
	  for(k=0;k<n;k++){//EStablece que lo siguiente se realice 3 veces y que vaya de 1 en 1

	res=j*k*1.0; //El resultado va a ser la multiplicación de los valores cambiantes de j y k
	printf("%i %i %f \n",j,k,res); //Imprime los resultados
	  } //Cierra el 1° FOR
	}//Cierra 2° FOR
return 0; //Cierra el programa
}

