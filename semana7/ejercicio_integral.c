//Creado por Diana Ailed Hernández Bustos el 17/09/18

#include<stdio.h> //Incluyo la librería que voy a usar
#include<math.h>//Utilizo la librería math.h para usar operaciones matemáticas

int main(){ //inicio el programa

	FILE *fp1;//Hago la declaración de mi archivo de lectura
	FILE *fp2;//Hago la declaración de mi archivo de escritura
	int P, N, k, i; //Hago la declaración de mis variables enteras
	float h, delta, x, xmin,xmax, f,res;//Hago la declaración de mis variables decimales

	fp1=fopen("funcion.txt","r");//Abro el archivo "función.txt" que es de tipo lectura
	fscanf(fp1,"%i %f %f %i %i", &P, &xmin, &xmax, &N, &k); //Escaneo la información de mi documento de lectura
	printf("%i %f %f %i \n", P, xmin, xmax, N);//Imprimo la información que escanée

	fclose(fp1); //Cierro el documento de lectura
	fp2=fopen("resumen_funciones.txt", "w");//Abro el archivo "resumen_funciones.txt" que es de tipo escritura
	fprintf(fp2,"x   \t       f(x)      \t Integral \n");//Imprimo en el archivo resumen_funciones.txt 

	delta=(xmax-xmin)/N;//Hago la delta, es decir el cambio que hay entre cada valor de x
		

	for(x=xmin; x<=xmax; x+=delta){//Hago un FOR que recorra lo siguiente tomando los valores de x que va de mínimo al máximo con un espaciado de delta
	h=(x-xmin)/k; //H va del valor de x menos x mínima e ntre las veces declaradas al inicio (20), ya que quiero que mi espacio se divida entre 20

	res=pow(x, P);//Calculo f(x) 

	f=(pow(xmin,P)+res)/2; //Divido el resultado de f(x) más f(xmínima al cuadrado)
	
		for(i=1; i<k; i++){ //Hago un FOR para hacer la sumatoria
		f+= pow((xmin+i*h),P); //Hago la sumatoria 
		}
		
	
	f*=h;//Multiplico el valor de f(sumatoria) por h

	fprintf(fp2,"%f \t  %f  \t  %f \n", x, res, f); //Imprimo los resultados en mi archivo de escritura
	printf("El número que se está evaluando es: %f\n", x); //Imprimo los resultados en la pantalla para ver mis resultados
	printf("El resultado del número elevado a la potencia es: %f\n", res); 
	printf("El resultado de la integral es: %f\n", f);
		
	}
	
	fclose(fp2);//Cierro el documento de escritura


return 0; //Cierro el programa
}


	
