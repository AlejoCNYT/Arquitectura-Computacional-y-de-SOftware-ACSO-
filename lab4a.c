/******************************************************************************

Autor: Daniel Alejandro Acero Varela
Fecha: 21/02/23
Escribir un programa en C que calcule el producto punto de dos vectores de reales
Input
La entrada se debe tomar desde la entrada estandar. La entrada est  ́a compuesta por una secuencia de l ́ıneas, donde la
primera l ́ınea contiene la longitud de cada vector (el producto punto exige que los vectores sean de la misma
dimensi  ́on), y las siguientes lineas contienen los valores del primer vector seguidos de los valores del segundo
vector. La primera linea contiene el numero de productos punto a calcular
Output
La salida debe enviarse a la salida estandar.
La salida est ́a compuesta por una l ́ınea que contiene el producto punto de los vectores leidos.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i = 0;
    int k = 0;
    int j = 0;
    int l = 0;
    int n;
    int d;
    
    scanf("%i", &n);

    for (i = 0; i < n; ++i) {
        scanf("%i", &d);
        float array1[d];
        float array2[d];
        for (k = 0; k < d; ++k) {
                scanf("%f", &array1[k]);
        }
        for (l = 0; l < d; ++l) {
                scanf("%f", &array2[l]);
        //printf("%f\n", array1);
        //printf("%f\n", array2);
        }    
        
        float sumComp = 0;
        float sum = 0;
        for (j = 0; j < d; ++j) {
            sumComp = array1[j] * array2[j];
            sum = sum + sumComp;
        }
        printf("%f\n", sum);
    }
    
    //printf("%i\n", sum);
    return 0;
}



