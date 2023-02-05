#include <stdio.h>

int main() {
    
    int n, cant_v, i, j;
    int sum;
    scanf("%i\n",&cant_v);
    for (i = 0; i < cant_v; ++i) {
        sum = 0;
        scanf("%i\n",&n);
        int array[n];
        for (j = 0; j < n; ++j) {
            scanf("%i\n", &array[j]);
            sum = sum + array[j];
        }
        printf("%d\n", sum);
    }
    return 0;
}
