#include <stdio.h>

int main() {

  int n1, n2, n3, n4, soma;

  printf("Informe 4 numeros!\n");
  printf("Numero 1: ");
  scanf("%d", &n1);
  printf("Numero 2: ");
  scanf("%d", &n2);
  printf("Numero 3: ");
  scanf("%d", &n3);
  printf("Numero 4: ");
  scanf("%d", &n4);

  soma = n1 + n2 + n3 + n4;

  printf(" \n");

  printf("A soma dos numeros é: %d", soma);
}