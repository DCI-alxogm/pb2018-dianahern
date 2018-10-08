//Creado por Diana Ailed Hernández Bustos el 08/10/18

#include<stdio.h>
#include<stdlib.h> 
#include<math.h>

int main(){
	FILE*fp;

	int lineas, num, i;
	float *ptr, sum, desv, promedio;
	
	fp=fopen("promedio.txt", "r");

	lineas=300;
	ptr=(int*)calloc(lineas, sizeof(int));

		printf("Escriba el número de datos que hay en su documento: \n");
		scanf("%i", &num);

	ptr= realloc (ptr, num);

	sum=0;

	for(i=0; i<num; i++){ //Se pone un FOR que vaya desde 0 hasta el número de elementos definidos por el usuario
		fscanf(fp, "%f", (ptr+i));//Se escanea la info. de ptr 
		sum+=*(ptr+i); //Se hace la suma de los valores guardados en ptr
	}
	fclose(fp);

	printf("La suma es: %f \n", sum);
	promedio= sum/num;
	printf("El promedio de los números es: %f \n", promedio);

	for(i=0; i<num; i++){
		sum+=pow((*(ptr+i)-promedio), 2);
	}

	sum/=num;

	desv=sqrt(sum);

	printf("La desviación estándar es: %f \n", desv);

free(ptr);	

return 0;
}

	

	
