#include <stdio.h>

int main() {
  float ar, r;

  printf("Caulculo de Área!\n");
  printf("R: ");
  scanf("%f", &r);

  ar = 3.1416 * (r * r);

  printf("A área é de: %f", ar);
}