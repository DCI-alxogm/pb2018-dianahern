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
/*Esta función muestra el número máximo en forma entera de tipo short*/
    printf("ShrtINT_MIN = %i \n", SHRT_MIN);
/*Esta función muestra el número mínimo en forma entera de tipo short*/
    printf("INT_MAX = %i \n", INT_MAX);
/*Esta función muestra el número máximo de la función ENTERO en forma entera porque tiene %i*/
    printf("INT_MIN = %i \n", INT_MIN);
/*Esta función muestra el número mínimo (es por eso que el resultado es negativo entero) en forma entera porque tiene %i*/
    printf("FLT_MIN      = %e\n", FLT_MIN);
/*Esta función muestra el número real mínimo (puede incluir hasta 6 cifras decimales con exponente porque es float)*/
    printf("FLT_MAX      = %e\n", FLT_MAX);
/*Esta función muestra el número real máximo (puede incluir hasta 6 cifras decimales con exponente porque es float) */
    printf("DBL_MIN      = %e\n", DBL_MIN);
/*Esta función muestra el número real (puede incluir hasta el doble de cifras que float porque es double) mínimo */
    printf("DBL_MAX      = %e\n", DBL_MAX);
/*Esta función muestra el número real (puede incluir hasta el doble de cifras que float porque es double) máximo */
    printf("LDBL_MIN      = %Le\n",LDBL_MIN);
/*Esta función muestra el número real (puede incluir muchos decimales, más que float o double ya que es logdouble) mínimo */
    printf("LDBL_MAX      = %Le\n",LDBL_MAX);
/*Esta función muestra el número real (puede incluir muchos decimales, más que float o double ya que es logdouble) máximo */
    printf("FLT_EPSILON  = %e\n", FLT_EPSILON);
/*Esta función muestra un número real (puede incluir hasta 6 cifras porque es float)*/
    printf("DBL_EPSILON  = %e\n", DBL_EPSILON);
/*Esta función muestra un número real (puede incluir hasta 6 cifras porque es float)*/
    printf("LBL_EPSILON  = %Le\n", LDBL_EPSILON);
/*Esta función muestra un número real (puede incluir más cifras que float)*/

    printf("FLT_DIG      = %d\n", FLT_DIG);
/*Esta función muestra un número real (puede incluir hasta 6 cifras porque es float)*/
    printf("DBL_DIG      = %d\n", DBL_DIG);
/*Esta función muestra un número real (puede incluir más de 6 cifras porque es logdouble)*/
    printf("LBDL_DIG      = %d\n", LDBL_DIG);
/*Esta función muestra un número real (puede incluir más de 6 cifras porque es logdouble)*/
    printf("FLT_MANT_DIG = %d\n", FLT_MANT_DIG);
/*Esta función muestra un número real (puede incluir hasta 6 cifras porque es float)*/
    printf("DBL_MANT_DIG = %d\n", DBL_MANT_DIG);
/*Esta función muestra un número real (puede incluir más de 6 cifras porque es double)*/
    printf("LDBL_MANT_DIG = %d\n", LDBL_MANT_DIG);
/*Esta función muestra un número real (puede incluir un número mayor de cifras que float o double porque es logdouble)*/

    
}
/*Las llaves nos indican el inicio y el final del cuerpo de un programa*/
