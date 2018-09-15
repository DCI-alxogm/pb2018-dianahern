EJERCICIO #1,2,3- Arreglos de números
En este programa se indica que una variable flotante tiene 10 elementos al poner un 10 dentro de []. Después, se empieza con un FOR que va de 0 a 9 e iguala cada valor de i a 0. LUego hay otro FOR que también va de 0 a 9 y hace le da un valor nuevo a cada elemento del arreglo números, el cual va a ser i cambiante. Después hay otro FOR que hace que se impriman 10 veces los resultados de los nuevos valores que adquiere cada elemento del arreglo.

EJERCICIO #4- Operaciones hechas con variables de tipo arreglo
En este programa se utiliza una variable flotante de tipo arreglo, en la que caben "N" elementos, donde "N" vale 10, declarada en tipo entero. DEspués se usa un FOR para hacer que cada elemento de numeros vaya agarrando un valor que el usuario le da por medio de un scanf y que se multipliqué por 2. En total va a haber 10 resultados. Después, se imprime el valor del arreglo modificado con su resultado.

EJEMPLO #5- Usuario determina elementos del arreglo
En este programa se pide al usuario que dé el valor de los elementos del arreglo números con un printf y un scanf. DEspués se hace la declaración de la variable arreglo, poniendo entre [] la variable que usamos para escanear el dato que el usuario nos da.Después se hace un FOR
para hacer que cada elemento de numeros vaya agarrando un valor de i, es decir de 0-N y que se multipliqué por 2. Después, se imprime el valor del arreglo modificado.

EJERCICIO- Pide datos de alumnos
En este programa se utilizaron 3 variables de tipo arrreglo que fueron: los semestres, el género y las calififcaciones de los 10 alumnos. SE puso una variable N igualada a 10, para que cada arreglo tuviera la posibilidad de tener 10 elementos ya que eran 10 alumnos. Después utilicé un FOR para que pidiera información al usuario 10 veces sobre los 10 alumnos, así cada elemento de las 3 variables tenía un dato dado por el usuario. Luego puse otro FOR que se correira 10 veces captando las calificaciones de los alumnos para poder calcular su promedio. 

Para poder determinar el número de hombres y mujeres por cada semestre utilicé 2 FOR, uno que fuera de 1-9 (porque haabía 9 semestres) y otro dentro que recorreira los 10 datos que el usuario me proporcionaba. A continuación puse varias condiciones, para determinar npumero de hombres y mujeres con contadores. Al final sólo imprimí el resultado de los semestres y los géneros 10 veces con el primer FOR de esta parte.

Al final,por separado y fuera de los FOR imprimí el resultado del promedio.

EJEMPLO_ESCRITURA-
En este programa se crea desde la terminal un documento de escritura. LO primero que se hace es la declaración de la variable relacionada con mi documento de texto que quiero crear. Luego se la hace la declaración de otras variables que quiero imprimir en mi documento de texto. Después, se debe de abrir el documento de tipo escritura que se indica con una "w". A continuación se captan frases con un fputs y palabras y números con un fprintf. Luego se cierra el documento con yn fclose (la variable que se usa).

EJEMPLO_LECTURA-
ESte programa se vincula con un documento de texto que previemente se había creado con el ejemplo de ecritura. LO primero que se debe hacer es declarar la variable del documento de texto, luego abrirlo, después indicar qué partes, números o strings del socumento se van a convertir en variables y al final se imprimen. ES importante cerrar el documento con fclose.

EJERCICIO_ESTUDIANTES-
En este programa se hace la declaración de 2 documentos (uno de lectura llamado "estudiantes.txt" previamente hecho por mí; y otro de escritura que se crea durante el programa llamado "resumen.txt"). Luego se hace la declacarión de todas las demás variables, muchas de ellas de tipo string ya que va a haber 10 elementos de género, calificaciones y semestre. 

Luego se abre el documento de lectura para que se puedan escanear los dats por medio de un FOR para que corra 10 veces por la base de datos de estudaintes.txt, captando la info. de cada estudiante por medio de un fscanf. Luego, se cierra el documento de lectura con un fclose(nombre de la variable de éste). A continuación, se abre el documento de escritura y se le pone el nombre que va a tener. SE hacen las operaciones para encontrar el promedio total de las califiaciones y el número de mujeres y de hombres en cada semestre con varios FOR como en el EJERCICIO.Al final, dentro del penúltimo FOR que corre 9 veces basándose en los semestres, se imprimen los resultados en el docuemnto de escritura los resultados con un fprintf. Después se cierra el documento de escritura y luego el programa.

EJERCICIO 3-Crea documento llamado resumen_funciones.txt
Primero hago la declaración de la variable de mi documento de escritura que voy a acrear en este documento. Después hago las demás declaraciones de variables. Luego pido información al usuario. Hago las operaciones de seno, coseno, logaritmo y raíz de los números que el usuario quiere que calcule con un FOR para que se repita "n" y abro mi documento de escritura. Luego imprimo los resultado con un fprintf, el cual se encuentra dentro del FOR. Al final, cierro mi documento de escritura con un fclose.El documento que se crea se llama resumen_funciones.txt con los resultados de las operaciones.



