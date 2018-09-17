//Creado por Diana Ailed Hernández Bustos el 17/09/18

#include<stdio.h>
#include<math.h>

int main(){

	FILE *fp1;
	FILE *fp2;
	int P,N, k=20, i;
	float h, I, res, suma, delta, x, xmin,xmax;

	fp1=fopen("funcion.txt","r");
	fscanf(fp1,"%i %f %f %i", &P, &xmin, &xmax, &N);
	printf("%i %f %f %i", P, xmin, xmax, N);

	fclose(fp1);
	fp2=fopen("resumen_funciones.txt", "w");

	delta=(xmax-xmin)/N;
	h=(xmax-xmin)/k;
	suma=0;

	for(i=1; i<k; i++){
	suma+= (xmin+i*h);
	}
	
	for(x=xmin; x<=xmax; x+=delta){
	res=pow(x, P);
	fprintf(fp2,"El número que se está evaluando es: %f\n", x);
	fprintf(fp2,"El resultado del número elevado a la potencia es: %f\n", res);
	printf("El número que se está evaluando es: %f\n", x);
	printf("El resultado del número elevado a la potencia es: %f\n", res);
		
	I=h*((x+xmin)/2)+suma;
	fprintf(fp2, "El resultado de la integral es: %f\n", I);
	printf("El resultado de la integral es: %f\n", I);
		
	}
	fclose(fp2);


return 0;
}


	
