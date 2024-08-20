#include <stdio.h>

int main() {

  double pés, polegadas, jardas, milhas;

  printf("Digite a medida em pés: ");
  scanf("%lf", &pés);

  polegadas = pés * 12;

  jardas = pés / 3;

  milhas = jardas / 1760;

  printf("A medida em polegadas é: %.2lf\n", polegadas);
  printf("A medida em jardas é: %.2lf\n", jardas);
  printf("A medida em milhas é: %.6lf\n", milhas);

  return 0;
}
