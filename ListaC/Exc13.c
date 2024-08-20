#include <stdio.h>

int main() {
  float altura_degrau, altura_total;
  int degraus;

  printf("Digite a altura de cada degrau (em metros): ");
  scanf("%f", &altura_degrau);

  printf("Digite a altura total que deseja alcançar (em metros): ");
  scanf("%f", &altura_total);

  degraus = altura_total / altura_degrau;

  printf("Você precisará subir %d degraus para atingir a altura desejada.\n",
         degraus);

  return 0;
}
