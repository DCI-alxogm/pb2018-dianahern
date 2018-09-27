//Creado por Diana Ailed Hernández Bustos el 24 de septiembre del 2018

#include<stdio.h>
#include<math.h>

int main(){

	FILE*fp;
	FILE*fp2;
	FILE*mercurio;
	FILE*venus;
	FILE*marte;
	FILE*jupiter;
	FILE*saturno;
	FILE*urano;
	FILE*neptuno;
	FILE*pluton;

	fp=fopen("planeta.txt","r");
	double xi[9],yi[9],zi[9],vxi[9], vyi[9], vzi[9], x2[9], r, y2[9], z2[9],h, vx2[9], vy2[9], vz2[9];
	float t1[9], t2[9], G, k;
	int i;

	for(i=1; i<=9; i++){
	
	fscanf(fp,"%lf %lf %lf", &xi[i],&yi[i],&zi[i]);
	fscanf(fp,"%lf %lf %lf %f %f", &vxi[i],&vyi[i],&vzi[i], &t1[i], &t2[i]);
	
	printf("%lf, %lf, %lf \n", xi[i],yi[i],zi[i]);
	printf("%lf, %lf, %lf \n", vxi[i],vyi[i],vzi[i]);
	printf("%f, %f \n", t1[i], t2[i]);
	
        
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


	
