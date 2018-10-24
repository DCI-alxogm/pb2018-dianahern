//Creado por Diana Ailed Hernández Bustos el 22/10/18

#include<stdio.h>

int main(){
	FILE*fp;
	float bar, bab, bizq, bder, N, k, e=0.1;
	float placa[i][j];
	int x, y, i, j;

	fp=fopen("datos.txt", "r");
	fscanf("%f %f %f %f %f", &bar, &bab, &bizq, &bder, &N);
	printf("%f %f %f %f %f", bar, bab, bizq, bder, N);
	fclose(fp);

	float **A=(float**) malloc (N sizeof (float*));

	for (i=0; i<N; i++){
		for(j=1; j<(n+1); j++){
			placa[i][j]=0.0;
	}	
	}


	for(i=0; i<N; i++){
		placa[0][j-1]=bar;
		placa[i][j+1]=bab;
	}

	for(j=0; j<N; j++ ){
		placa[i-1][0]=bizq;
		placa[i+1][j]=bder;
	}


	for(i=1; i<N-1; i++){
		for(j=1; j<N-1; j++){
			placa[i][j]= ((placa[i+1][j]+placa[i-1][j]+placa[i][j+1]+placa[i][j-1])/4);
	}
	
return 0;

}

