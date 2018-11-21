Creado por Diana Ailed Hernández BUstos el 20/11/18

EJERCICIO Radiación cuerpo negro:
Primero, se hizo la declaración de las librerías de matplotlib, de constantes y de numpy.LUego se obtienen los valores de 3 constantes conocidas universalemente (c, h y k) con la función "constants"de la librería scipy. Después, se obtiene de un documento de texto la información acerca de la frecuencia, intensidad y barras de error de la radiación de fondo de un microondas. LOs datos del texto se ponen en una variable de tipo arreglo que cuenta con 4 columnas (al igual que el texto). A partir de esto, se declaran otras 3 variables, una por cada columna que se desea graficar, las cuales son la de frecuencia, intensidad y barras de error. Al final, sólo se grafican los 3 arreglos con la función de matplotlib llamada "errorbar" y se obtiene una curva con sus respectivas barras de error. 

LO último que tuve que hacer fue declarar una función para calcular la intensidad de un cuerpo negro, teniendo como argumentos de entrada a (k, h y c) además de la temperatura (T) y la frecuencia (v) dadas por el usuario. 
