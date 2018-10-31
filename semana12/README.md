Creado por Diana Ailed Hernández Bustos el 31/10/18

EJERCICIO MODIFICACIÓN ARCHIVO MAESTRA:
Este programa estaba dividido en 4 archivos, los cuales son:

a)holamake.h (la cual es una librería que contiene las funciones usadas en el programa y que se deben poner en TODOS los archivos). Lo que modifiqué fue que añadí una 2° función que tiene el nombre de "calculofunc.c", la cual calculaba el cuadrado de un número, por lo que tenía elementos de entrada (x) pero no de salida.

b)hola_main.c (aquí tuve que poner las librerías usadas, incluyendo la nueva que se creó, para no tener que hacer la declaración de TODAS las funcionas usadas en mis archivos). Lo que modifiqué fue que llame a una 2° función, la cual se llama "calculox2" y que se encuentra en calculofunc.c. 

c)holafunc.c (aquí se encuentra la 1° función y lo que ésta hace del programa).

d)calculofunc.c (aquí se encuentra la 2° función y lo que ésta hace del programa, la cual es calcular el cuadrado de un número que se pide en mi programa y lo imprime a la pantalla).

Y para poder compilar mi programa, al cual se llama "hola.o", fue necesario compilar los 4 archivos mencionados anteriormente con un archivo llamado Makefile, donde especifiqué cómo quería que se llamara mi programa con un gcc y después tuve que poner todos los archivos que éste contenía: todos mis archivos de .c y mi librería. Al final, tuve que poner un:
	clear: 
		rm hola.o
Lo anterior tuve que ponerlo para que se borrara el programa y no se compilara éste (no lo incluyera).

El último paso fue compilar mi programa desde la terminal, con lo cual tuve que poner make ENTER. Después corrí mi programa con ./hola.o 	


EJERCICIO PROYECTO2:
Mi programa lo tuve que dividir en 4 archivos, los cuales son:

a)Main.c= Para este archivo tuve que poner las 3 librerías que usé, la de memoria dinámica (stdlib.h), la estándar (stdio.h) y la nueva que cree que se llama "funciones.h". Ésta última sirve para no tener que declarar las funciones usadas en el programa al inicio del archivo main.c. Ya después se abre main y se inicia el programa, el cual llama primero a la función "inicializar" con una variable matriz (para darle la temperatura inicial a cada uno de los puntos de la placa) y después se llama a la 2°función que se llama "imprimir", la cual es de tipo de entrada pero no de salida; por lo que después de este paso, se cierra mi programa.

b)Funcion.c= Este archivo inicia con la declaración de mis 3 librerías. A continuación, sólo se abre la función "inicializar",la cual ayuda a inicializar la matriz de acuerdo a los datos obtenidos en el archivo de lectura, y regresa a la función main la matriz inicial.Para lograr su objetivo, es necesario ir llenando las temperaturas de los puntos de la placa con varios FORs.

c)Funcionimp.c= Este archivo inicia con la declaración de mis 3 librerías. A continuación, se abre la función "imprimir",la cual ayuda a calcular y a imprimir las temperaturas que van adquiriendo cada uno de los puntos de la matriz con cada iteración hasta llegar a un porcentaje de error de 0.00001% de acuerdo a la matriz inicial que recupera de main. Como no tiene elementos de salida, simplemente imprime los resultados en archivos de escritura con diferentes nombres.

d)Funciones.h (ésta se encuentra dentro de una carpeta llamada lib)= Aquí hago la declaración de mis 2 funciones que uso en mi programa, para no tener que declararlas al inicio de cada archivo y las guardo como una librería creada por mí con el nombre de "funciones.h".


Y para poder compilar mi programa, al cual le llamé "proyecto2.o", fue necesario compilar los 4 archivos mencionados anteriormente con un archivo llamado Makefile, donde especifiqué cómo quería que se llamara mi programa con un gcc y después tuve que poner todos los archivos que éste contenía: todos mis archivos de .c y mi librería. Al final, tuve que poner un:
	clear: 
		rm proyecto2.o
Lo anterior tuve que ponerlo para que se borrara el programa y no se compilara éste (no lo incluyera).

El último paso fue compilar mi programa desde la terminal, con lo cual tuve que poner make ENTER. Después corrí mi programa con ./proyecto2.o 

