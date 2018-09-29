Creado por Diana Ailed Hernández Bustos el 28/09/18

PROGRAMA ÓRBITAS:
Primero, tuve que hacer un archivo de lectura que contuviera los datos de las velocidades y posiciones iniciales de cada planeta. Después inicié mi programa haciendo la declaración de mis variables según el tipo que éstas eran y la mayoría fue de tipo arreglo con 9 entradas, ya que por cada velicidad, posición y tiempo, yibas a tener 9 datos diferentes. También tuve que hacer la declaración de los 2 archivos que iba a usar: uno de lectura y otro de escritura. El de escritura, en realidad iba a dividirse en 9 archivos, los cuales contendrían la información de las velocidades y posiciones finales de cada planeta, esto gracais a un FOR. 

Después abrí mi documento de lectura y puse un FOR que corriera 9 veces, para captar la información de mi archivo 9 conjuntos de datos (uno de cada planeta). A continuación, puse otro FOR para que corriera en función del tiempo, establecido en mi documento de lectura, con un delta de 0.0027 años (es decir, aproximadamente un día terrrestre). Después calculé las nuevas posiciones y velocidades de mis planetas (para la Tierra fueron 365 resultados, debido a que lo hice en un año, para los demás cambió). En cada cálculo tuve que ir cambiando la posición y velocidad inicial ya que éstos cambiaban a cada paso de tiempo. 

Después puse un fprintf para que los resultados se fueran imprimiendo en cada carpeta de escritura [iésimo] que tuviera el nombre del planeta correspondiente. Luego cerré mis 2 FORS y después los 2 archivos, el de lectura y el de escritura(s), y cerré mi programa.

GRÁFICAS:
Para graficar, utilicé la opción GNUPLOT de la terminal y grafiqué todas las órbitas de mis planetas a partir de mis 9 documentos que se me crearon en mi archivo, de los cuales sólo usé las columnas 2,3,4 ya que allí se encontraban las posiciones de mis planetas.
 
