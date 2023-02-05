#include <stdio.h>

int main() {
  int n;
  int i = 0;
  scanf("%i",&n);
  
  do {
  	float n1;
    float n2;
    scanf("%f",&n1);
    scanf("%f",&n2);

    if (n1 > n2) {
        printf("%f\n",n1);
        } else {
        printf("%f\n",n2);
        }
    
    i++;
     }
  while (i < n);
  
  return 0;
}
