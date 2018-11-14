Creado por Diana Ailed Hernández el 14/11/18

EJERCICIO- Oscilador
En este ejercicio se claculó cómo cambia el ángulo del péndulo con respecto al tiemo, así como la velocidad con el tiempo. Para calcular esto se tienen que usar derivadas, pero para simplificarlo, simplemente se usó el método de Euler. Lo primero que se hizo fue declarar las librería en python: numpy sirve para poner arreglos y matplotlib para graficar. Después puse los valores que permanecían fijos y que el usuario podía cambiar como desease: h (delta del tiempo), tiempo máximo, velocidad inicial del péndulo, entre otros... 

A continuación,puse una FUNCIÓN que inicializara los 3 arreglos que son tiempo, velocidad y ángulo del péndulo. Para esto, mi función debía tener los argumentos de entrada de (h,tmax,vi). Tuve que inicializar mis arreglos de v y de theta en "ceros" con la función np.zeros. Y el arreglo t lo llené con np.linspace para que tuviera tmax elementos y que vaya de h en h. Al final, regresé a mi programa los 3 arreglos inicializados. Luego llamé a la función 1 con las variables que necesito de v,t y theta.

Luego, fue necesario declarar una nueva variable que contenga la longitud del arreglo "tiempo" para poder hacer los cálculos en una 2° FUNCIÓN (CÁLCULOS). Ésta tenía de argumentos de entrada: los arreglos de v y theta, además de la longitud de tiempo y w. A continuación, hice un FOR que tuviera la cantidad de la longitud del tiempo (que vaya de 0 hasta 1 menos de la long. de t) e hice las opreaciones, en las cuales se iban llenando cada uno de los elementos de los arreglos v y theta,pues las posiciones de los elementos van cambiando con i del FOR. Al final, regresé a mi programa los nuevos valores de los elementos de v y theta. Después, tuve que llamar la función fx2 con las variables que necesito de v y theta.

Lo último fue imprimir las 3 gráficas que se me piden: (theta contra tiempo) y (velocidad contra tiempo) fueron funciones periódicas; mientras que en la gráfica (theta contra velocidad) obtuve una circunferencia. 

Al final, puse mi PSEUDOCÓDIGO.
      

