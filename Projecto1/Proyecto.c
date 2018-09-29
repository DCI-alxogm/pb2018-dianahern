//Creado por Diana Ailed Hernández Bustos el 28/09/18
#include<stdio.h> //Incluyo las librerías que vvoy a usar
#include<math.h> //Utilizo math.h porque voy a ahcer opraciones matemáticas

int main(){ //Inicio mi programa

	FILE*fp;//Hago la declaración de mi archivo de lectura
	FILE*fp2;//Hago la declaración de mis archivos de escrituras, los cuales con cada FOR van a ir cambiando de nombre

	fp=fopen("planeta.txt","r");//Abro el archivo de lectura que se llama "planeta.txt", y es de tipo lectura "r"
	double xi[9],yi[9],zi[9],vxi[9], vyi[9], vzi[9], r;//Hago declaración de mis arreglos, pues por cada uno hay 9 datos
	float t1[9], t2[9], G, k, h;//Hago la declaración de variables con pocos decimales
	int i; //i es entero 
	char nombre[20]; //Variable char porque es de escritura

	for(i=0; i<=8; i++){ //Hago un FOR que corra 9 veces para que vaya obteniendo la información de mis planetas
		
		fscanf(fp,"%lf %lf %lf", &xi[i],&yi[i],&zi[i]);//Escaneo la información de mis coordenadas desde mi archivo de lectura
		fscanf(fp,"%lf %lf %lf %f %f %s", &vxi[i],&vyi[i],&vzi[i], &t1[i], &t2[i], &nombre[i]);//Escaneo la información de las velocidades de mis planetas desde mi archivo de lectura

		
		fp2=fopen(nombre,"w"); //Abro el archivo de escritura (en total éste se va a abrir 9 veces, con diferentes nombres que le va a dar la variable nombre
	
		for(k=t1[i]; k<=t2[i]+h ; k+=h){ //Abro un FOR que vaya desde 0 hasta el tiempo indicado en el archivo de lectura y que vyaa aumentando de 0.002738 en adelante
		h=0.002738; //Establezco mi cambio de tiempo en unidades de años
		G=4*pow(3.14159265359,2); //EStablezco el valor de la constante de gravitacional en unidades de años

			//Calculo las coordenadas finales de mis planetas. En cada paso de tiempo, las coordenadas iniciales van cambiando por eso se usa+=

			xi[i]=xi[i]+vxi[i]*h; 
			yi[i]=yi[i]+vyi[i]*h; //Notar que a cada paso, se va cambiando las coordenadas iniciales
			zi[i]=zi[i]+vzi[i]*h;

			//Calculo la constante r
			r=sqrt(pow(xi[i],2)+pow(yi[i],2)+pow(zi[i],2));

			//Calculo las velocidades finales de mis planetas. En cada paso de tiempo, las velocidades iniciales van cambiando por eso se usa*=
			vxi[i]=vxi[i]-h*((G*xi[i])/pow(r,3));
			vyi[i]=vyi[i]-h*((G*yi[i])/pow(r,3));
			vzi[i]=vzi[i]-h*((G*zi[i])/pow(r,3));	

		 //Imprimo en cada archivo fp (en total 9), los resultados de mis coordenadas y de mis velocidades
		fprintf(fp2, "\n %f \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf \n", k*365.2, xi[i], yi[i], zi[i], vxi[i], vyi[i], vzi[i]);
		} //Cierro el segundo FOR
	} //Cierro el primer FOR
	fclose(fp2); //Cierro mis archivos de escritura
	fclose(fp); //Cierro mi archivo de lectura
return 0; //Cierro mi programa
}
	
