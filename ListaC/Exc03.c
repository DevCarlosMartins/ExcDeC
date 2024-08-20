#include <stdio.h>

int main() {

  int n1, n2, n3, p1, p2, p3;
  float md;

  printf("Informe a seguir as Notas e Pesos\n");
  printf("Nota 1: ");
  scanf("%d", &n1);
  printf("Nota 2: ");
  scanf("%d", &n2);
  printf("Nota 3: ");
  scanf("%d", &n3);
  printf("Peso 1: ");
  scanf("%d", &p1);
  printf("Peso 2: ");
  scanf("%d", &p2);
  printf("Peso 3: ");
  scanf("%d", &p3);

  md = (n1 * p1 + n2 * p2 + n3 * p3) / (p1 + p2 + p3);

  printf(" ");

  printf("A média ponderada é: %f", md);
}