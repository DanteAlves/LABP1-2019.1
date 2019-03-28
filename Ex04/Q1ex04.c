#include <stdio.h>
#include <math.h>

int main(void) {

  float n = 0,aux = 0;

  printf("Digite um numero : ");
  scanf("%f",&n);

  n > 0 ? printf("%f",sqrtf(n)) : printf("%f",pow(n,2));

  return 0;
}
