//Creado por Diana Ailed Hernández Bustos el 24 de septiembre del 2018

#include<stdio.h>
#include<math.h>

int main(){

	FILE*fp;
	FILE*fp2;
	fp=fopen("planeta.txt","r");
	double xi,yi,zi,vxi, vyi, vzi, x2, r, y2, z2,h, vx2, vy2, vz2;
	float t1, t2, G, k;
	
	fscanf(fp,"%lf %lf %lf", &xi,&yi,&zi);
	fscanf(fp,"%lf %lf %lf %f %f", &vxi,&vyi,&vzi, &t1, &t2);
	
	printf("%lf, %lf, %lf \n", xi,yi,zi);
	printf("%lf, %lf, %lf \n", vxi,vyi,vzi);
	printf("%f, %f \n", t1, t2);
	
	fclose(fp);

	h=0.0027;
	G=4*pow(3.1416,2);

	fp2=fopen("resultados.txt", "w");
	fprintf(fp2, "DÍA \t     (X) \t       (Y) \t      (Z) \t      (VX) \t       (VY) \t      (VZ) \n"); 
		
	for(k=t1; k<=t2 ; k+=h){
		x2=xi+vxi*h;
		y2=yi+vyi*h;
		z2=zi+vzi*h;

		r=sqrt(pow(xi,2)+pow(yi,2)+pow(zi,2));

		vx2=vxi-h*((G*xi)/pow(r,3));
		vy2=vyi-h*((G*yi)/pow(r,3));
		vz2=vzi-h*((G*zi)/pow(r,3));

		xi=x2;
		yi=y2;
		zi=z2;	

		vxi=vx2;
		vyi=vy2;
		vzi=vz2;

		printf("DÍA \t     (X) \t       (Y) \t      (Z) \t      (VX) \t       (VY) \t      (VZ) \n");  
		printf("%f \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf \n", k*365, x2, y2, z2, vx2, vy2, vz2);
		
		 
		fprintf(fp2, "%f \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf \n", k*365, x2, y2, z2, vx2, vy2, vz2);

	}

	fclose(fp2);
return 0;
}


	
