//CReado por Diana Ailed el 14/09/18

#include<stdio.h> // Utilizo la librería math.h porque voy a hacer operaciones matemáticas
#include<math.h>

int main(){

	FILE *fp; //Hago la declaración de la variable de textos y le pongo un nombre de fp.
	float x,delta, exp_, log_, sin_, cos_, raiz, x1, x2; //Estas variables son decimales, por lo que son de tipo FLOAT
	int n,i; //Las variables dentro de los FOR siempre son enteras

	printf("Introduce un número con el que quieras comenzar:\n"); //Le pido al usuario la infromación que necesito, que viene siendo el intervalo de números en el que se van a realizar las operaciones 
	scanf("%f", &x1);
	printf("Introduce un número final: \n");
	scanf("%f", &x2);
	printf("Dame qué espaciado quieres:\n");
	scanf("%f", &delta); //El delta te va a indicar cada cuántos números dentro del intervalo que el usuario te da, va a tomar el valor i, y por lo tanto se realicen las operaciones.

	fp=fopen("resumen_funciones.txt", "w"); //Aquí inicio mi documento de texto y digo que es de tipo de escritura, para que se reporten todos los resultados que den a continuación. La pongo aquí para no ocupar mucho espacio en memoria.

	n=((x2-x1)/delta); //N son las veces que se va a utilizar un número.

	for(i=0;i<=n;i++){ //En este caso, como i<= n, se realizan las operaciones 1 vez más de lo que indica delta, aunque delta va a ser el cambio entre los números que vaya adquiriendo n

        x=(x1+(delta*i)); //Indica que el número con el que se van a hacer las operaciones sea el número inicial más el intérvalo dada por el usuario multiplicada por el valor que va adquieriendo i
	exp_=exp(x); //OPERACIONES
	log_=log(x);
	sin_=sin(x);
	cos_=cos(x);
	raiz=sqrt(x);

	
	fprintf(fp, "El número es: %f \n", x); //El fprintf indica que se imprime en mi documento la información que aparece entre paréntesis
	fprintf(fp, "El exponente del número es: %f \n", exp_); //El fprintf indica que se imprime en mi documento la información que aparece entre paréntesis
	fprintf(fp, "El logaritmo del número es: %f \n", log_);//El fprintf indica que se imprime en mi documento la información que aparece entre paréntesis
	fprintf(fp, "El seno del número es: %f \n", sin_); //El fprintf indica que se imprime en mi documento la información que aparece entre paréntesis
	fprintf(fp, "El coseno del número es: %f \n", cos_); //El fprintf indica que se imprime en mi documento la información que aparece entre paréntesis
	fprintf(fp, "La raíz de tu número es: %f \n", raiz); //El fprintf indica que se imprime en mi documento la información que aparece entre paréntesis
	
	}
	fclose(fp); //ESto sirve para cerrar el documento en el que se escribió lo anterior. MI documento se llama resumen_funciones.txt, declarado arriba
	
return 0; //Se cierra el programa
}
