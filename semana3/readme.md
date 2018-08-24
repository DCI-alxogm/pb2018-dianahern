Estos programas fueron hechos por Diana Ailed Hernández Bustos el 23/08/18

1) PROGRAMA 1-Temperatura
En este programa fue necesario anotar las operaciones que convierten grados centígrados a K y a F y viceversa. Primero fue necesario utilizar la librería stdio.h y después iniciar el cuerpo del programa con int main(). Después le siguió la declaración de variables, las cuales fueron de tipo float ya que necesitaba que las respuestas fueran decimales. También usé 2 variables para G, K y F ya que el programa me pedía regresar las temperaturas iniciales. 


2) PROGRAMA 2-Operaciones
En este programa fue necesario utilizar la librería stdio.h y math.h ya que necesitaba operaciones de razones trignométricas. Utilicé las variables de tipo float ya que ncesitaba que los resultados se dieran en decimales. Después utilicé sqrt para la raíz de una de las operaciones y aprendí a elevar una variable a un exponente que es pow(x,2). 

También tuve que transformar los grados que el usuario introducía a radianes con la conversión de grados/57.3 es un radian, ya que las razones trigonométricas sólo funcionan con radianes. POr lo tanto, tuve que usar 2 variables para la variable que designaba el valor que el usuario escribía.

3) PROGRAMA 3-Coordenadas esféricas
En este programa fue necesario utilizar la librería stdio.h y math.h ya que necesitaba operaciones de razones trignométricas para convertir las coordenadas en x, y y z a esféricas (r, o y l). Después de iniciar el cuerpo del programa con int main(), empecé a declarar mis variables con flota ya que ncesitaba que el reultado tuviera decimales. DEspués utilicé printf para pedir las coordenadas al usuario. A continuación, puse las operaciones de conversión. Tuve que poner 2 variables por cada coordenada porque quería que se devolviera las coordenadas inciales.

4) EJEMPLO 1-Número par 
En este programa utilicé condiciones (if) para determinar si el número entero pedido al usuario por scanf y printf era impar o par. La condición que utilicé fue que si el cosciente de la división de ese número entre 2 era igual a 0 o no. La división se pone como a%2==0. Sólo usé una condición ya que si ésta no se cumplía, entonces era obvio que era impar el número, por lo que en else puse un printf.

5) EJEMPLO 2-Números mayores o menores
En este programa utilicé condiciones para determinar si los dos números que le pedía al usuario por medio de printf y scanf eran iguales, o diferentes y cuál era mayor que el otro. Para ograr lo anterior, tuve que hacer 2 condiciones y un else que indica qué ocurre si las condiciones pasadas no se llevan a cabo.

6) EJEMPLO 3-Mayúsculas o minúsuclas

7) UNIFICACIÓN-Switch, coordenadas polares
En este programa uní el programa de las temperaturas y el de las coordenadas con la función switch,la cual ayuda a poner opciones, es decir, a que el usuario pueda escoger qué quiere que realice la máquina dependiendo de las opciones que se le dan.Para este programa utilicé una 2° librería (math.h) ya que iba a utilizar coseno y tangente para convertir coordenadas cartesianas a polares. Tuve que utilizar varias variables para o (el ángulo) para sumarle los grados que le faltaban. 

Para que la computadora me diera el cuadrante donde se encontraba el vector, fue necesario poner 4 condiciones (una para cada cuadrante) basándome en que si x o y eran positivas o no.Si estas 4 condiciones no se cumplían, entonces significaba que el vector "r" era un punto en el origen.

Para usar switch fue necesario crear 2 casos, uno para cada programa que haya elegido el usuario. El caso 1: tenía entre {} el cuerpo del programa para convertir temperaturas, mientras que el caso 2: tenía entre {} el cuerpo del programa para convertir coordenadas. Cada caso se cerraba con un break; y al final tenías que poner un default para indicar qué ocurría si no se elejían las 2 opciones anteriores.

