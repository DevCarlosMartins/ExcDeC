#include <stdio.h>

int main() {
  double horas_trabalhadas, salario_minimo;
  double valor_hora, salario_bruto, imposto, salario_a_receber;

  printf("Digite o número de horas trabalhadas: ");
  scanf("%lf", &horas_trabalhadas);

  printf("Digite o valor do salário mínimo: R$ ");
  scanf("%lf", &salario_minimo);

  valor_hora = salario_minimo / 2;

  salario_bruto = horas_trabalhadas * valor_hora;

  imposto = 0.03 * salario_bruto;

  salario_a_receber = salario_bruto - imposto;

  printf("O valor da hora trabalhada é: R$ %.2lf\n", valor_hora);
  printf("O salário bruto é: R$ %.2lf\n", salario_bruto);
  printf("O imposto é: R$ %.2lf\n", imposto);
  printf("O salário a receber é: R$ %.2lf\n", salario_a_receber);

  return 0;
}
