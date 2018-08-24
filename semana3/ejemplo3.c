/*Hecho por Diana Ailed Hernández Bustos el 23/08/18 */

#include<stdio.h> //Incluyo la librería que voy a usar

int main(){

	char c; //Utiliso la declaración char porque mi variable es una letra
	int es_vocalmin, es_vocalmay; //creé otras 2 variables para que me ayudena hacer operaciones con c

	printf("Introduce una letra cualquiera: "); 
	scanf("%c", &c);
//Utilicé %s porque la información que pido al usuario es una letra

	es_vocalmin=(c == "a"|| c == "e" || c == "i" || c == "o" || c == "u");
	es_vocalmay=(c == "A"|| c == "E" || c == "I" || c == "O" || c == "U");
// El símbolo || indica una cosa u otra. Aqui la utilizo porque hay varias vocales.

	if(es_vocalmin || es_vocalmay){
	printf("%c, es una vocal. \n", c);
//Indico cuál es mi primera condición, si la letra que me dan es vocal.
	}

	else{
	printf("%c, es una consonante. \n", c);
//Indica qué ocurre en cado de que la condición anterior no se cumplió.
	}
return 0;
//Cierro mi programa con una llave.
}
