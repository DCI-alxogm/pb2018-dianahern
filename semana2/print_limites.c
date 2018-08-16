/* Actualizado por Diana el 14/08/18 */

#include <stdio.h>
#include <float.h> 
#include <limits.h>

/* Indica las 3 librerías diferentes que se van a usar en este programa: stdio, float y limits; con la finalidad de poder usar las definiciones que éstas contienen*/

int main( )
{
/*la función main, es la función maestra, que indica que se inicia el cuerpo de un programa*/

    printf("UINT_MAX = %u \n", UINT_MAX);
/*Esta función muestra el número máximo ENTERO que tiene la función entero*/
    printf("ShrtINT_MAX = %i \n", SHRT_MAX);
/*Esta función muestra el número máximo en forma entera de tipo short (es decir con máximo 5 dígitos)*/
    printf("ShrtINT_MIN = %i \n", SHRT_MIN);
/*Esta función muestra el número mínimo en forma entera de tipo short por eso muestra un número negativo con 5 dígitos*/
    printf("INT_MAX = %i \n", INT_MAX);
/*Esta función muestra el número máximo de la función ENTERO en forma entera porque tiene %i*/
    printf("INT_MIN = %i \n", INT_MIN);
/*Esta función muestra el número mínimo (es por eso que el resultado es negativo entero) en forma entera porque tiene %i*/
    printf("FLT_MIN      = %e\n", FLT_MIN);
/*Esta función muestra el número real mínimo (puede incluir hasta 6 cifras decimales con exponente negativo porque es float)*/
    printf("FLT_MAX      = %e\n", FLT_MAX);
/*Esta función muestra el número real máximo (puede incluir hasta 6 cifras decimales con exponente positivo porque es float) */
    printf("DBL_MIN      = %e\n", DBL_MIN);
/*Esta función muestra el número real mínimo (puede incluir números más chicos que float, específicamente hasta números tan chicos con un exponente de hasta -308 porque es double) */
    printf("DBL_MAX      = %e\n", DBL_MAX);
/*Esta función muestra el número real máximo (puede incluir números más grandes que float, específicamente hasta números con un exponente de 308 porque es double) */
    printf("LDBL_MIN      = %Le\n",LDBL_MIN);
/*Esta función muestra el número real mínimo (puede incluir números más chicos que double, específicamente hasta números con un exponente de -4932 porque es longdouble) */
    printf("LDBL_MAX      = %Le\n",LDBL_MAX);
/*Esta función muestra el número real máximo (puede incluir números más grandes que double, específicamente hasta números con un exponente de 4932  porque es longdouble) */
    printf("FLT_EPSILON  = %e\n", FLT_EPSILON);
/*Esta función muestra un número real (puede incluir hasta 6 cifras decimales más exponente porque es float)*/
    printf("DBL_EPSILON  = %e\n", DBL_EPSILON);
/*Esta función muestra un número real (puede incluir hasta 6 cifras decimales con un exponente negativo mayor que float, específicamente de -16 porque es double)*/
    printf("LBL_EPSILON  = %Le\n", LDBL_EPSILON);
/*Esta función muestra un número real (puede incluir hasta 6 cifras decimales con un exponente negativo mayor que double, específicamente de -19 porque es longdouble)*/

    printf("FLT_DIG      = %d\n", FLT_DIG);
/*Imprime la cantidad de dígitos que permite establecer la función float, es decir 6*/
    printf("DBL_DIG      = %d\n", DBL_DIG);
/*Imprime la cantidad de dígitos que permite establecer la función double, es decir 15 dígitos*/
    printf("LBDL_DIG      = %d\n", LDBL_DIG);
/*Imprime la cantidad de dígitos que permite establecer la función longdouble, es decir 18 dígitos*/
    printf("FLT_MANT_DIG = %d\n", FLT_MANT_DIG);
/*Imprime la cantidad de dígitos que permite establecer la función float con la función MANT, que es de 24 dígitos*/
    printf("DBL_MANT_DIG = %d\n", DBL_MANT_DIG);
/*Imprime la cantidad de dígitos que permite establecer la función double con la función MANT, que es de 53 dígitos*/
    printf("LDBL_MANT_DIG = %d\n", LDBL_MANT_DIG);
/*Imprime la cantidad de dígitos que permite establecer la función longdouble con la función MANT, que es de 64 dígitos*/
    
}
/*Las llaves nos indican el inicio y el final del cuerpo de un programa*/
