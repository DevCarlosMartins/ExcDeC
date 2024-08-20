#include <stdio.h>

int main(void) {

  int n1, n2, n3;
  float md;
  printf("Informe a seguir as Notas\n");
  printf("Nota 1: ");
  scanf("%d", &n1);
  printf("Nota 2: ");
  scanf("%d", &n2);
  printf("Nota 3: ");
  scanf("%d", &n3);
  md = (n1 + n2 + n3) / 3;

  printf(" \n");
  printf("A média é: %f", md);
  
}