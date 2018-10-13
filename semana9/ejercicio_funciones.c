//Creado por Diana Ailed Hernández Bustos el 10/10/18

#include<stdio.h> //Incluyo las librerías necesarias
#include<math.h>

//Hago la declaración de mis funciones
void elemento (); 
void carga(float k);
float nivels ();
float mismonivel(float h);

int main(){ //Inicio el cuerpo de mi programa

	float s2, n, s1, stotal; //Hago declaración de las variables usadas en esta sección
	
		printf("Hola, este programa te permite conocer el efecto de apantallamiento de los metales alcalinos \n ");

		elemento(); //Abro la función elementos
	
		printf ("Anota cuántos electrones en el mismo nivel de energía hay sin incluir el electrón de valencia: \n");
		scanf("%f", &n); //Pido info. al usuario

		s2= mismonivel(n); //Igualo esta variable a una función que realiza una operación
		printf("El apantallamiento en el mismo nivel es %f \n", s2);

		s1=nivels(); //Igualo esta variable a una función que realiza una operación y devuelve un resultado
		printf("El apantallamiento en los otros niveles es %f \n", s1);

		stotal= s1+s2; //Operación

		carga(stotal);//Direcciono mi programa a una función
}


void elemento (){ //Función sin entrada ni salida
	int z; //Declaración de la variable usada

	printf("Anota el número atómico del elemento: \n"); //Pide Z al usuario
	scanf("%i", &z);

	//Pongo las condiciones para determinar qué elemento alcalino es según el número atómico que me dé el usuario

	if (z==3){
		printf("Tu elemento es Li\n");
	}

	if (z==11){
		printf("Tu elemento es Na\n");
	}
	
	if (z==19){
		printf("Tu elemento es K\n");
	}

	if (z==37){
		printf("Tu elemento es Rb\n");
	}

	if (z==55){
		printf("Tu elemento es Cs\n");
	}
	
	else {
		printf("Este no es un metal alcalino");
	}

}

float mismonivel(float h){ //Función con entrada y salida
		return h*0.35; //Devuelvo el valor de esta operación
}

float nivels (){ //Función con salida pero sin entrada

	float x; //Hago la declaración de la variable que se va a usar
		printf("Cuántos electrones en la capa s y p del nivel anterior tiene: \n"); //Pido info. al usuario
		scanf("%f", &x);
		return x*0.85; //Devuelvo el valor de esta operación
}

void carga(float k){ //Función con entrada pero no salida

	float stotal, e, res; //Declaración de la variable que se va a usar
		stotal=k; //Igualación de la variable usada y la de la entrada
		printf("Anota cuántos electrones tiene en total tu átomo (sin incluir los del último orbital ni el de los s y/o p de la capa 			anterior \n "); //Se pide info. al usuario
		scanf("%f", &e); 
		res=e+k; //Se hace la operación necesaria

		printf("El efecto pantalla es de: %f \n", res); //Se imprime el resultado

}		



	
