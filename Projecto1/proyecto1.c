//Creado por Diana Ailed Hernández Bustos el 28/09/18
#include<stdio.h> //Incluyo las librerías que vvoy a usar
#include<math.h> //Utilizo math.h porque voy a ahcer opraciones matemáticas

int main(){ //Inicio mi programa

	FILE*fp;//Hago la declaración de mi archivo de lectura
	FILE*fp2;//Hago la declaración de mis archivos de escrituras, los cuales con cada FOR van a ir cambiando de nombre

	fp=fopen("texto.txt","r");//Abro el archivo de lectura que se llama "planeta.txt", y es de tipo lectura "r"
	double xi,yi,zi,vxi, vyi, vzi, r, h, m_planeta;//Hago declaración de mis variables que deben incluir más decimales que float
	float t1, t2, G, k;//Hago la declaración de variables con pocos decimales
	int i; //i es entero 

	char nombre[20]; //Variable char porque es de escritura

	for(i=0; i<=8; i++){ //Hago un FOR que corra 9 veces para que vaya obteniendo la información de mis planetas
		fscanf(fp, "%s", &nombre[i]);
		fscanf(fp,"%lf %lf %lf", &xi,&yi,&zi);//Escaneo la información de mis coordenadas desde mi archivo de lectura
		fscanf(fp,"%lf %lf %lf", &vxi,&vyi,&vzi);//Escaneo la información de las velocidades de mis planetas desde mi archivo de lectura
		fscanf(fp,"%f %f %lf", &t1, &t2, &h);//Escaneo la información sobre el cambio de tiempo y el delta 
		fscanf(fp,"%lf", &m_planeta);//Escaneo la masa de mis planetas (aunque al final no la use)

		fp2=fopen(nombre,"w"); //Abro el archivo de escritura (en total éste se va a abrir 9 veces, con diferentes nombres que le va a dar la variable nombre
	
		for(k=t1; k<=t2+h ; k+=h){ //Abro un FOR que vaya desde 0 hasta el tiempo indicado en el archivo de lectura y que vaya aumentando según se indica en mi documento de lectura
		
		G=4*pow(3.14159265359,2); //Establezco el valor de la constante de gravitacional en unidades de años

			//Calculo las coordenadas finales de mis planetas. En cada paso de tiempo, las coordenadas iniciales van cambiando por eso se usa+=

			xi=xi+vxi*h; 
			yi=yi+vyi*h; //Notar que a cada paso, se va cambiando las coordenadas iniciales
			zi=zi+vzi*h;

			//Calculo la constante r
			r=sqrt(pow(xi,2)+pow(yi,2)+pow(zi,2));

			//Calculo las velocidades finales de mis planetas. En cada paso de tiempo, las velocidades iniciales van cambiando por eso se usa*=
			vxi=vxi-h*((G*xi)/pow(r,3));
			vyi=vyi-h*((G*yi)/pow(r,3));
			vzi=vzi-h*((G*zi)/pow(r,3));	

		 //Imprimo en cada archivo fp (en total 9), los resultados de mis coordenadas y de mis velocidades
		fprintf(fp2, "\n %f \t %lf \t %lf \t %lf \t %lf \t %lf \t %lf \n", k*365.2, xi, yi, zi, vxi, vyi, vzi);
		} //Cierro el segundo FOR
	} //Cierro el primer FOR
	fclose(fp2); //Cierro mis archivos de escritura
	fclose(fp); //Cierro mi archivo de lectura
return 0; //Cierro mi programa
}
