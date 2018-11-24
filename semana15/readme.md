Creado por Diana Ailed Hernández BUstos el 20/11/18

EJERCICIO Radiación cuerpo negro:
Primero, se hizo la declaración de las librerías de matplotlib, de constantes y de numpy.LUego se obtienen los valores de 3 constantes conocidas universalemente (c, h y k) con la función "constants"de la librería scipy. Después, se obtiene de un documento de texto la información acerca de la frecuencia, intensidad y barras de error de la radiación de fondo de un microondas. LOs datos del texto se ponen en una variable de tipo arreglo que cuenta con 4 columnas (al igual que el texto). A partir de esto, se declaran otras 3 variables, una por cada columna que se desea graficar, las cuales son la de frecuencia, intensidad y barras de error. Al final, sólo se grafican los 3 arreglos con la función de matplotlib llamada "errorbar" y se obtiene una curva con sus respectivas barras de error. 

LO último que tuve que hacer fue declarar una función para calcular la intensidad de un cuerpo negro, teniendo como argumentos de entrada a (k, h y c) además de la temperatura (T) y la frecuencia (v) dadas por el usuario. 

EJERCICIO-2°PARTE
Primero para graficar los datos originales, tuve que utilizar una función de matplotlib que se llama subplot, el cual tiene 3 argumentos(# de columnas, #de filas, posición de gráfica). En la primera gráfica de subplot, grafiqué frecuencia por intensidad; mientras que en la de abajo, puse las barras de error con una variable "y", la cual, tenía mismos puntos que frencuencia pero con valor de 0 (esto para que no se mostrara en la gráfica), 

La segunda parte fue calcular la intensidad con cada temperatura, por lo que tuve que definir un arreglo de temperatura que fuera de 1 a 5 (ya que el universo es muy frío) y que tuviera 100 elementos. DEspués hice un FOR que corriera 100 veces para que fuera calculando las intensidades de cada temperatura. Luego hice una condición que calculara el margen de error al restar intensidad originla-la obtenida, dividida entre las barras de error; de modo que se graficaran sólo las gráficas más exactas.

Posteriormente, se hicieron 2 funciones, una que tuviera de argumento de entrada la frecuencia (la cual en todo el documento nunca cambia) y la temperatura (ya que el cálculo de la intensidad de los cuerpos negros, sólo depende de la temperatura). La segunda función sirve para graficar con subplots y hacer exactamente lo mismo que está explicado en el párrafo 1, sólo que esta vez, se iban a imprimir 10 gráficas en total, debido a que se utilizan 10 temperaturas diferentes. 
