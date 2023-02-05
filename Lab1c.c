// Problema:

#include <stdio.h>

int main() {
    float min;
    int n, i, j, k, cant_v;
    scanf("%i\n",&cant_v);
    for (i = 0; i < cant_v; ++i) {
        scanf("%i\n",&n);
        float array[n];
        for (j = 0; j < n; ++j) {
            scanf("%f\n", &array[j]);
            }
        min = array[0];
        for (k = 0; k < n; ++k) {
            if (array[k] < min){
                min = array[k];
                //printf("%f\n\n", min);
            }
        }
    printf("%f\n", min);
    }
    return 0;
}
