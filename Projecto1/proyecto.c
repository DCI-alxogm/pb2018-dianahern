//Creado por Diana Ailed Hernández Bustos el 24 de septiembre del 2018

#include<stdio.h>
#include<math.h>

int main(){

	FILE*fp;
	fp=fopen("planeta.txt","r");
	double x,y,z,xi, yi, zi, m;
	float t1, t2;

	fscanf(fp,"%lf %lf %lf", &x,&y,&z);
	fscanf(fp,"%lf %lf %lf", &xi,&yi,&zi);
	fscanf(fp,"%f %f", &t1,&t2);
	fscanf(fp,"%lf", &m);
	
	printf("%lf, %lf, %lf \n", x,y,z);
	printf("%e, %e, %e \n", xi,yi,zi);
	printf("%f, %f, %e \n", t1,t2,m);
	fclose(fp);

	
return 0;
}


	
