//Elaborado por Diana Ailed Hernández Bustos el 03/09/18

#include<stdio.h> // Utilizo la librería math.h porque voy a hacer operaciones matemáticas
#include<math.h>

int main(){

	float x,delta, exp_, log_, sin_, cos_, raiz, x1, x2; //Estas variables son decimales, por lo que son de tipo FLOAT
	int n,i; //Las variables dentro de los FOR siempre son enteras

	printf("Introduce un número con el que quieras comenzar:\n"); //Le pido al usuario la infromación que necesito, que viene siendo el intervalo de números en el que se van a realizar las operaciones 
	scanf("%f", &x1);
	printf("Introduce un número final: \n");
	scanf("%f", &x2);
	printf("Dame qué espaciado quieres:\n");
	scanf("%f", &delta); //El delta te va a indicar cada cuántos números dentro del intervalo que el usuario te da, va a tomar el valor i, y por lo tanto se realicen las operaciones.


	n=((x2-x1)/delta); //N son las veces que se 
	for(i=0;i<=n;i++){ //En este caso, como i<= n, se realizan las operaciones 1 vez más de lo que indica delta, aunque delta va a ser el cambio entre los números que vaya adquiriendo n

        x=(x1+(delta*i)); //Indica que el número con el que se van a hacer las operaciones sea el número inicial más el intérvalo dada por el usuario multiplicada por el valor que va adquieriendo i
	exp_=exp(x); //OPERACIONES
	log_=log(x);
	sin_=sin(x);
	cos_=cos(x);
	raiz=sqrt(x);

	printf("\n El número es %f \n", x); //Imprimo todos los resultados. ESta impresión se va a realizar 1 vez más que el espaciado que el usuario puso al inicio

	printf("El exponente de tu número es: %f \n", exp_); //Se imprimen todos los resultados de las operaciones, las veces que se hicieron
	printf("El logaritmo de tu número es:%f \n", log_);
	printf("El seno de tu número es: %f \n", sin_);
	printf("El coseno de tu número es:%f \n", cos_);
	printf("La raíz de tu número es: %f \n", raiz);

	}
return 0; //Se cierra el programa
}
