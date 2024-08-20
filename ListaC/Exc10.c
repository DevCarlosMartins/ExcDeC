#include <stdio.h>

int main() {
  double preco_fabrica, percentual_lucro, percentual_impostos;
  double valor_lucro, valor_impostos, preco_final;

  printf("Digite o preço de fábrica do veículo: R$ ");
  scanf("%lf", &preco_fabrica);

  printf("Digite o percentual de lucro do distribuidor (em %%): ");
  scanf("%lf", &percentual_lucro);

  printf("Digite o percentual de impostos (em %%): ");
  scanf("%lf", &percentual_impostos);

  valor_lucro = (percentual_lucro / 100) * preco_fabrica;

  valor_impostos = (percentual_impostos / 100) * preco_fabrica;

  preco_final = preco_fabrica + valor_lucro + valor_impostos;

  vprintf("O valor correspondente ao lucro do distribuidor é: R$ %.2lf\n",
          valor_lucro);
  printf("O valor correspondente aos impostos é: R$ %.2lf\n", valor_impostos);
  printf("O preço final do veículo é: R$ %.2lf\n", preco_final);

  return 0;
}