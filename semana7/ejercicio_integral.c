//Creado por Diana Ailed Hernández Bustos el 17/09/18

#include<stdio.h>
#include<math.h>

int main(){

	FILE*fp1;
	FILE*fp2;
	int P,i, xmin, xmax, N, k=20;
	float h, I, res, num, suma, delta;

	fp1=fopen("funcion.txt","r");
	fscanf(fp1,"%i %i %i %i", &P, &xmin, &xmax, &N);
	printf("%i %i %i %i", P, xmin, xmax, N);

	fclose(fp1);
	fp2=fopen("resumen_funciones.txt", "w");

	delta=(xmax-xmin)/N;
	num=0;

	for(i=xmin; i<=xmax; i++){
		num+=delta;
		res=pow(num, P);
	fprintf(fp2, "El número que se está evaluando es: %f\n", num);
	fprintf(fp2, "El resultado del número elevado a la potencia es: %f\n", res);
		
	}

	for(i=xmin; i<=xmax; i++){
		h=(xmax-xmin)/k;
		suma=0;

		for(i=1; i<N; i++){
		suma+= (xmin+i*h);
		}
		
		I=h*((xmin+i)/2)+suma;
	fprintf(fp2, "El resultado de la integral es: %f\n", I);
		
	}
	fclose(fp2);


return 0;
}


	
