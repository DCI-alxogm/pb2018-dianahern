//Elaborado por Diana Ailed Hernández Bustos el 03/09/18

#include<stdio.h>
#include<math.h>

int main(){

	float x,delta, exp_, log_, sin_, cos_, raiz, x1, x2;
	int n,i;

	printf("Introduce un número con el que quieras comenzar:\n");
	scanf("%f", &x1);
	printf("Introduce un número final: \n");
	scanf("%f", &x2);
	printf("Dame qué espaciado quieres:\n");
	scanf("%f", &delta);

	n=(x2-x1)/delta;
	

	for(i=0;i<n;i++){
        x=(x1+delta);
	exp_=exp(x);
	log_=log(x);
	sin_=sin(x);
	cos_=cos(x);
	raiz=sqrt(x);

	printf("El exponente de tu número es: %f \n", exp_);
	printf("El logaritmo de tu número es:%f \n", log_);
	printf("El seno de tu número es: %f \n", sin_);
	printf("El coseno de tu número es:%f \n", cos_);
	printf("La raíz de tu número es: %f \n", raiz);

	}
return 0;
}
