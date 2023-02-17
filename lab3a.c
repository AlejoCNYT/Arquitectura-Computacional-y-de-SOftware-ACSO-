//  Autor: Daniel Alejandro Acero Varela
//  Fecha: 17/02/2023
//
//  Escriba un programa en lenguaje de programaci  ́on C, que resuelva la siguiente situaci  ́on:
//  Una aerol ́ınea que parte de Alemania lleva pasajeros a todo el mundo. Su sistema de compra de boletos
//  proporciona resultados del n  ́umero de pasajeros que viajan a B  ́elgica, Inglaterra, Noruega, Irlanda y Francia. Se
//  desea el mayor n  ́umero de personas por avi  ́on y que todos los aviones tengan la misma capacidad.
//  Se debe calcular:
//  • Cu ́antos pasajeros habr ́a por avi  ́on.
//  • Cu ́antos aviones volar ́an a cada pa ́ıs.
//  • Cu ́antos aviones volar ́an en total.
//  Input
//  La entrada se debe tomar desde la entrada estandar. La entrada est  ́a compuesta por el n  ́umero de pasajeros que viajan
//  a B ́elgica, Inglaterra, Noruega, Irlanda y Francia respectivamente.
//  Output
//  La salida debe enviarse a la salida estandar.
//  La salida est  ́a compuesta por el n  ́umero de pasajeros que habr  ́a por avi  ́on, el n  ́umero de aviones que volar  ́an a
//  cada pa ́ıs (B  ́elgica, Inglaterra, Noruega, Irlanda y Francia respectivamente) y el n  ́umero de aviones que volar  ́an
//  en total.
#include <stdio.h>

int main()
{
    int i;
    int k;
    int aux;
    int mcd = 0;
    int min;
    int array[4];
    
    scanf("%i", &array[0]);
    scanf("%i", &array[1]);
    scanf("%i", &array[2]);
    scanf("%i", &array[3]);
    scanf("%i", &array[4]);
    
    min = array[0];
    for (k = 0; k < 5; ++k) {
        if (array[k] > min) {
            min = array[k];
            //printf("%f\n\n", min);
            }
        }
    
    int a = array[0];
    int b = array[1];
    int c = array[2];
    int d = array[3];
    int e = array[4];
    //printf("%i\n", e);
    aux = min/2;
    for (i=1; i<= aux; i++) {
        if ((a%i == 0) && (b%i == 0) && (c%i == 0) && (d%i == 0) && (e%i == 0))
            mcd = i;
    }
    printf("%i\n", mcd);
    printf("%i\n", a/mcd);
    printf("%i\n", b/mcd);
    printf("%i\n", c/mcd);
    printf("%i\n", d/mcd);
    printf("%i\n", e/mcd);
    printf("%i\n", (a+b+c+d+e)/mcd);
    return 0;
}
