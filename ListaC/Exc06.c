#include <stdio.h>

int main() {
  float ar, bs, al;

  printf("Caulculo de Área!\n");
  printf("base: ");
  scanf("%f", &bs);
  printf("altura: ");
  scanf("%f", &al);

  ar = (bs * al) / 2;

  printf("A área é de: %f", ar);
}