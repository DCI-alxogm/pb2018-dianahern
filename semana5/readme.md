Creado por Diana Ailed Hernández Bustos el 09/09/18

EJEMPLO #1- Temperaturas
En este programa sólo usé la librería stdio.h, e inicié con mi función MAIN. Después, hice la declaración de mis variables (muchas de ellas float ya que las temperaturas utilizan decimales). Utilicé char para la variable "opción", la cual usé en mi while con la intención de permitir al usuario volver a hacer las operaciones. Para lograr lo anterior, al final del programa pedí a mi usuario con un printf y un scanf que pusiera "sí, no" para volver a correr el programa, y al inicio el while con la condición de que éste se corriera siempre y cuando la persona pusiera "sí". 

Utilicé un FOR para que se realizará la operación de la conversión de temperaturas en un intérvalo definido por el usuario de temperaturas y las veces que éste indicara al inicio del programa.

EJEMPLO#2- Exponencial
En este programa usé las librerías math.h y stdio.h porque calcula el exponencial de 10 números que va de 0 a 9. ESta condición la va a tener un FOR, el cual calculará la exponencial en ese intervalo que queremos. Al final, este programa imprime el intervalo (0-9) con sus respectivas exponenciales.

EJEMPLO#3- Anidación
Este programa usa librería math.h porque hay multiplicación de 2 números que van cambiando los valores de 0, 1 y 2. Este programa hace que cada valor de los 3 que toma el número 1, se multiplique por cada valor que va adquieriendo el 2° número (k), por lo que en vez de tener 3 operaciones como lo indica "n" el determinador de las veces que se corre un FOR, en total tenemos 9, ya que el 2° FOR se anida.

EJERCICIO#1- Operaciones raíz, etc.
En este programa fue necesario utilizar math.h porque las operaciones de logaritmo, coseno, etc. son operaciones matemáticas. Se le pidieron al usuario 2 números que actuarían como el intervalo de números donde agarrar los valores de i del FOR (los números con los que se realizaron las operaciones), además del espaciado entre cada uno de ellos, establecido también por el usuario (delta). Para encontrar las veces que se realizara la condición FOR fue necesario determinar "n", que indica hasta cuándo se corre el programa. Para lo cual fue necesario divider la diferencia de los números que sirven de intervalo dados por el usuario entre el espaciado que éste quería.

Ya después realicé las operaciones y las imprimí.

EJERCICIO #2- Factorial
En este programa, se utiliza el while para que se corra el programa una y otra vez siempre que el usuario escoja opción 1. Además se utilizó FOR con ,a condición de que vaya de 1 hasta el número que el usuario inytroduce en la computadora. El factorial será entonces la multiplicación de los valores que va tomando i (del 1-el número) por el resultado del factorial anterior. Al final se imprime el eresultado y el printf de que si el usuario quiere volver a correr el programa.

EJERCICIO #3-Números primos
En este programa fue necesario uytilizar la librería math.h para poder hacer una raíz cuadrada. LO primero que hice fue declarar mis variables y poner un while que corriera todo el programa siempre y cuando mi usuario pusiera 1. Después le pedí al usuario 2 números que sirven de mi intervalo, imprimiéndole que cambiara de números en caso de que éste excediera a 524 ya que del 1 al 523 hay 100 números primos, no obtsnte esto no se cumplirá siempre en cualquier otro intervalo, ya que los números primos no son periódicos. LO anterior lo hice con un WHILE.
 
Después usé un for para que i fuera cambiando de valor adquieriendo cada número de mi intervalo (num final- num inicial). LUego saqué raí cuadrada a cada número(i) y establecí condiciones de que en caso de que el residuo de la división de i entre otra serie de números que fueran del 2 hasta el valor adquirido por la raíz de cada número, fuera 0, entonces no sería primo; y por el contrario, si no se podía hacer la división, imprimiera el número a la pantalla.

Después establecí que por cada 20 números primos impresos, se inslatara una línea en mi programa. LO anterior lo hice utilizando un módulo, pues siempre que sea divisible entre 20, va a ver un salto de línea. Esto lo hice por medio de un contador que se sumara 1 cada vez que imprimiera un número a la pantalla.

EJERCICIO #4-Números binarios
En este ejercicio puse todas mis variables de tipo int menos una, que fue bin[100] (que fue de tipo char) ya que para obtener la conversión de números decimales a binarios, era necesario separar los dígitos de éste para que se imprimieran al revés de cómo se obtuvieron en las operaciones. Después, puse un switch para darle la oportunidad al usuario de escoger el programa que quiesiera (convertir un número decimal a binario o al revés).

En el case 1: puse la conversión de binario a decimal, en el que usé un WHILE que se repitiera siempre que mi binario estuviese cambiando (éste siempre lo hacía al final, pues lo dividía entre 10). DEspués puse condiciones, para que siempre que la división del decimal entre 10 fuera diferente de 0, se sumaran los resultados de 2 elevado al contador (el cual iniciaba en 0 y terminaba en mi decimal-1). La sumatoria de lo anterior es en realidad mi DECIMAL y ese se imprimía al final del programa.

En el case 2: puse la conversión de decimal a binario. Puse un WHILE que se repitiera siempre que mi número fuera mayor a 0 (ya que éste estaría cambiando por cada while que se corriera, pues al final puse que mi número se dividiera entre 2). Luego puse condiciones, si la división de mi número decimal entre 2 daba 1 (es decir daba un quebrado), entonces el primer caracter del string sería 0, si daba otra cosa, entonces el caracter siguiente sería 1. DEbido a que los bimarios se ponen al revés de como los vas obteniendo, tuve que utlizar un for que fuera de -1 en -1 y así se imprimían mis caracteres al revés de como los obtuve,




