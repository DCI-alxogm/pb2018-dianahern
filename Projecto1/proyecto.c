//Creado por Diana Ailed Hernández Bustos el 24 de septiembre del 2018

#include<stdio.h>
#include<math.h>

int main(){

	FILE*fp;
	fp=fopen("planeta.txt","r");
	double xi,yi,zi,vxi, vyi, vzi, m, x2, y2, z2,h, vx2, vy2, vz2;
	float t1=0, t2=3600;

	fscanf(fp,"%lf %lf %lf", &xi,&yi,&zi);
	fscanf(fp,"%lf %lf %lf", &vxi,&vyi,&vzi);
	fscanf(fp,"%lf", &m);
	
	printf("%lf, %lf, %lf \n", xi,yi,zi);
	printf("%e, %e, %e \n", vxi,vyi,vzi);
	printf("%e \n", m);
	fclose(fp);

	h=t2-t1;
	h=	
	for(
	x2=xi+vxi*h;
	y2=yi+vyi*h;
	z2=zi+vzi*h;

	vx2= vxi-h*
return 0;
}


	
