Este programa fue creado por Diana Ailed Hernández Bustos el 31/08/18

EJEMPLO 1: Temperaturas
En este programa utilicé while para poner las indicaciones que ocurrirían siempre que la temperatura en °C fuera menor o igual a 200 (temperatura final). Tuve que poner operación para que temperatura C fuera aumentando ya que si no hacía esto, entonces mi programa se iba a correr una y otra vez de forma infinita. Al final, tuve que cerrar mi while con {}. 

EJEMPLO2: Volver a correr el programa de temperatura
En este programa utilicé el programa del ejemplo 1, pero le añadí otro while que estuviera englosando al 1° while con la intención de que le diera la oportunidad al usuario de volver a correr el programa en caso de que escogiera la opción 1 al final de haber realizado las operaciones. Para esto, tuve que poner una variable de tipo int (op) y poner en la condición de mi while que englosa todo el programa lo siguiente op==1 (op igual a 1). Y al final tuve que poner un printf que le preguntara al usuario si quería correr otra vez el programa y el scanf con %i porque mi variable era int op.

EJEMPLO3:
En este programa utilicé el programa del ejemplo 1, pero le añadí otro while que estuviera englosando al 1° while con la intención de que le diera la oportunidad al usuario de volver a correr el programa en caso de que escribiera si al final de haber realizado las operaciones. Para esto, tuve que poner una variable de tipo char (op[2], variable con 2 entradas) y poner a continuación que op[0]='s' (esto indica que la entrada 1 es igual a s. También puse en la condición de mi while que englosa todo el programa lo siguiente op[0]=='s' (op igual a una palabra que inicie con s). Y al final tuve que poner un printf que le preguntara al usuario si quería correr otra vez el programa (con las opciones de si o no) y el scanf con %s porque mi variable era de tipo char.

EJERCICIO WHILE: Combinación de temperatura y conversión de coordenadas polares
En este programa se usó la función WHILE para que el programa se corriera siempre que el usuario indicara que sí quería hacer otras operaciones al final de que scorriera todo. Para esto fue necesario añadir una variable op de tipo char (op='s') y que ésta fuera igual a 's'. Esto indicaba que siempre que el usuario pusiera una palabra que iniciara con s se iba a correr el programa, pero si ponía otra letra, entonces se terminaba éste. 

Dentro de la función while se encuentra la función switch que me permite unir los 2 programas de temperatura y de coordenadas polares. Para hacerlo tuve que poner una variable opcion de tipo int (porque en switch se usan case 1 y case 2). En el case 1 puse el programa de temperatura y en el case 2 el de conversión de coordenadas.Los case no utilizan {}, pero siempre se cierran con un break.

En el programa de las coordenadas si tuve que usar condiciones (IF) para que calculara el cuadrante donde quedaba mi vector resultante. Cda If se cierra con {}. También para los else if.  
