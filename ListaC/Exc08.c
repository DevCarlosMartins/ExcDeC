#include <stdio.h>

int main() {
  float v, q, c, rq, rc;

  printf("Informe um valor!");
  printf("Valor: ");
  scanf("%f", &v);

  q = v * v;
  c = v * v * v;
  rq = sqrt(v);
  rc = cbrt(v);

  printf("O quadrado é: %f", q);
  printf("O cubo é: %f", c);
  printf("A raiz quadrada é: %f", rq);
  printf("A raiz cubica é: %f", rc);
}