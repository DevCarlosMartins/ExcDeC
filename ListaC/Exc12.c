#include <stdio.h>

int main() {
       
  double peso_saco_quilos, quantidade_racao_gatos_gramas;
  double peso_saco_gramas, quantidade_total_racao_fornecida, racao_restante;

  printf("Digite o peso do saco de ração em quilos: ");
  scanf("%lf", &peso_saco_quilos);

  printf("Digite a quantidade de ração fornecida para cada gato em gramas: ");
  scanf("%lf", &quantidade_racao_gatos_gramas);

  peso_saco_gramas = peso_saco_quilos * 1000;

  quantidade_total_racao_fornecida = 2 * quantidade_racao_gatos_gramas * 5;

  racao_restante = peso_saco_gramas - quantidade_total_racao_fornecida;

  printf("A quantidade de ração restante no saco após cinco dias é: %.2lf "
         "gramas\n",
         racao_restante);

  return 0;
}
