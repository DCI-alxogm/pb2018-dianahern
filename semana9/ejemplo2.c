//Creado por Diana Ailed Hernández Bustos el 08/10/18

#include<stdio.h>//Hago la declaración de las librerías que voy a usar
#include<stdlib.h> //Utilizo esta librería porque voy a usar funciones de memoria dinámica
#include<math.h>

int main(){
	FILE*fp; //Hago la declaración de mi archivo de lectura

	int lineas, num, i; //Hago la declaración de mis variables
	float *ptr, sum, desv, promedio; //Declaro mi apuntador, el cual, es de tipo decimal
	
	fp=fopen("promedio.txt", "r"); //Abro mi archivo de lectura

	lineas=300;
	ptr=(int*)calloc(lineas, sizeof(int));//Direcciono mi apuntador a un espacio en la memoria que tenga la capacidad de 300 bloques

		printf("Escriba el número de datos que hay en su documento: \n"); //Pido la info. necesaria al usuario
		scanf("%i", &num);

	ptr= realloc (ptr, num);//Redirecciono el apuntador y le otorgo un mayor o menor espacio dependiendo de la cpacidad definida por el usuario

	sum=0;

	for(i=0; i<num; i++){ //Se pone un FOR que vaya desde 0 hasta el número de elementos definidos por el usuario
		fscanf(fp, "%f", (ptr+i));//Se escanea la info. de ptr 
		sum+=*(ptr+i); //Se hace la suma de los valores guardados en ptr
	}
	fclose(fp); //Cierro mi archivo de lectura

	printf("La suma es: %f \n", sum); //Hago la suma de los valores obtenidos del archivo
	promedio= sum/num; //Saco el promedio
	printf("El promedio de los números es: %f \n", promedio); //Imprimo los resultados

	for(i=0; i<num; i++){ //Hago un FOR que vaya recorriendo cada dato
		sum+=pow((*(ptr+i)-promedio), 2);
	}

	sum/=num;

	desv=sqrt(sum);

	printf("La desviación estándar es: %f \n", desv); //Imprimo la desviación estándar

free(ptr); //Libero la memoria ocupada

return 0; //Salgo de mi programa
}

	

	
