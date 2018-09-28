//Creado por Diana Ailed Hernández Bustos el 24 de septiembre del 2018

#include<stdio.h>
#include<math.h>

int main(){

	FILE*fp;
	FILE*fp2;

	fp=fopen("planeta.txt","r");
	double xi,yi,zi,vxi, vyi, vzi ,h, r ;
	float t1, t2, G, k;
	

	fscanf(fp,"%lf %lf %lf", &xi, &yi,&zi);
	fscanf(fp,"%lf %lf %lf %f %f", &vxi,&vyi,&vzi, &t1, &t2);
	
	printf("%lf, %lf, %lf \n", xi,yi,zi);
	printf("%lf, %lf, %lf \n", vxi,vyi,vzi);
	printf("%f, %f \n", t1, t2);
	
        
	fclose(fp);
	
	
	h=0.001;
	G=4.0*pow(3.14159265359,2);

	fp2=fopen("resultadostierra.txt", "w");
	
		
		for(k=t1; k<=t2+h ; k+=h){
			xi=xi+vxi*h;
			yi=yi+vyi*h;
			zi=zi+vzi*h;

			r=sqrt(pow(xi,2)+pow(yi,2)+pow(zi,2));

			vxi=vxi-h*((G*xi)/pow(r,3));
			vyi=vyi-h*((G*yi)/pow(r,3));
			vzi=vzi-h*((G*zi)/pow(r,3));
	


			printf("DÍA \t     (X) \t       (Y) \t      (Z) \t      (VX) \t       (VY) \t      (VZ) \n");  
			printf("%f \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf \n", k, xi, yi, zi, vxi, vyi, vzi);
		
		 
			fprintf(fp2, "%f \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf \n", k, xi, yi, zi, vxi, vyi, vzi);
	
	}
	

	fclose(fp2);
return 0;
}


