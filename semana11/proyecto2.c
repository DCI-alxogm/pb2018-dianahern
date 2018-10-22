//Creado por Diana Ailed Hernández Bustos el 22/10/18

#include<stdio.h>

int main(int argc, char *argv[]){
	FILE*fp;
	float b1, b2, b3, b4,n, N, e=0.1;
	float placa[x][y];

	if(argc==5){
		b1=atof(argv[0]);
		b2=atof(argv[1]);
		b3=atof(argv[2]);
		b4=atof(argv[3]);
		N=atoi(argv[4]);

		n=sqrt(N);

	for(x=0; x<N; x++){
		placa[x][y-1]=b1;
		placa[x][y+1]=b2
	}

	for(y=0; y<N; y++){
		placa[x][y]=placa[x][y-1];
		placa[x][y]=placa[x][y+1];
	}


	for(x=1;x<N-1; x++){
		for(y=1; y<N-1, y++){
			placa[x][y]= (placa[x+1][y]+placa[x-1][y]+placa[x][y+1]+placa[x][y-1])/4;
	}
	}

	if(argc>5){
		printf("Más argumentos de los necesarios\n");
	}

	else{
		printf("Se requiere poner las 4 temperaturas de los bordes y el número de puntos:\n");
	}


return 0;

}

