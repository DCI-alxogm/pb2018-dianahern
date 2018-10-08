//Creado por Diana Ailed Hernández Bustos el 08/10/18

#include<stdio.h>
#include<stdlib.h> 

int main(){

	FILE*fp;
	int lineas, i, num;
	float *ptr, x=-100000000;
	
	fp=fopen("num_maximo.txt", "r");

	lineas=100;
	ptr=(int*)calloc(lineas, sizeof(int));

		printf("Escriba el número de datos que hay en su documento: \n");
		scanf("%i", &num);

	ptr=realloc (ptr, num);

		for(i=0; i<num; i++){
			fscanf(fp, "%f", (ptr+i));
		}

		for(i=0; i<num; i++){
			
			if(*(ptr+i)>x){
				x=*(ptr+i);
			}
		}

	printf("El número máximo es: %f \n", x);
			
	fclose(fp);

return 0;
}



