#include <stdio.h>

int main() {
  int n;
  int i = 0;
  scanf("%i",&n);
  
  do {
  	int n1;
    int n2;
    int res;
    scanf("%i",&n1);
    scanf("%i",&n2);
    res = n1 + n2;
    
    printf("%i\n", res);
    i++;
     }
  while (i < n);
  
  return 0;
}
