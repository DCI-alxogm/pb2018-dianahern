//Creado por Diana Ailed Hernández Bustos el 28/09/18
#include<stdio.h>
#include<math.h>

int main(){

	FILE*fp;
	FILE*fp2;

	fp=fopen("planeta.txt","r");
	double xi[9],yi[9],zi[9],vxi[9], vyi[9], vzi[9], r;
	float t1[9], t2[9], G, k, h;
	int i;
	char nombre[20];

	for(i=0; i<=8; i++){
		
		fscanf(fp,"%lf %lf %lf", &xi[i],&yi[i],&zi[i]);
		fscanf(fp,"%lf %lf %lf %f %f %s", &vxi[i],&vyi[i],&vzi[i], &t1[i], &t2[i], &nombre[i]);

		fp2=fopen(nombre,"w");
	
		for(k=t1[i]; k<=t2[i]+h ; k+=h){
		h=0.002738;
		G=4*pow(3.14159265359,2);

			xi[i]=xi[i]+vxi[i]*h;
			yi[i]=yi[i]+vyi[i]*h;
			zi[i]=zi[i]+vzi[i]*h;

			r=sqrt(pow(xi[i],2)+pow(yi[i],2)+pow(zi[i],2));

			vxi[i]=vxi[i]-h*((G*xi[i])/pow(r,3));
			vyi[i]=vyi[i]-h*((G*yi[i])/pow(r,3));
			vzi[i]=vzi[i]-h*((G*zi[i])/pow(r,3));	

		 
		fprintf(fp2, "\n %f \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf \n", k*365.2, xi[i], yi[i], zi[i], vxi[i], vyi[i], vzi[i]);
		}
	}
	fclose(fp2);
	fclose(fp);
return 0;
}
	
