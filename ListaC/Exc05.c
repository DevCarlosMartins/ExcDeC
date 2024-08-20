#include <stdio.h>

int main(void) {

  float sal, nSal;
  int ValAlt;

  printf("Informe o Salário eo Almento para o Almento!\n");

  printf("Sal: ");
  scanf("%f", &sal);
  printf("Alt: ");
  scanf("%d", &ValAlt);

  nSal = sal * (1 + ValAlt / 100.0);

  printf("O novo salario é de: %f", nSal);
}