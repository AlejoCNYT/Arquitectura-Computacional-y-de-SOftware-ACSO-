#include <stdio.h>

int main() {
    
    float x, y, res;
    char op;
    int n;
    int i = 0;
    scanf("%i\n",&n);
    
    while (i < n) {
        
        scanf("%c\n",&op);
        scanf("%f\n",&x);
        scanf("%f\n",&y);
    
        switch (op) {
            case '+':
                res = x + y;
                printf("%f\n",res);
                break;
            case '-':
                res = x - y;
                printf("%f\n",res);
                break;
            case '*':
                res = x * y;
                printf("%f\n",res);
                break;
            case '/':
                res = x / y;
                printf("%f\n",res);
                break;
        }
        i++;                
    }

}
