#include <stdio.h>

int main(void) {

  float sal, nSal;
  float alt = 1.25;

  printf("Informe o Salário para o Almento!\n");

  printf("Sal: ");
  scanf("%f", &sal);

  nSal = sal * alt;

  printf("O novo salario é de: %f", nSal);
}