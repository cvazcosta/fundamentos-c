#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  float total_av, total_ap, total, p1, transacao;

  // Seedando o valor da função rand para garantir aleatoriedade
  srand(time(0));

  // Inicializando variáveis 
  total_av = total_ap = 0;

  for (int i = 1; i <= 15; i++)
  {
    // Definindo o valor de cada transação entre 1 e 100;
    transacao = rand() % 100 + 1;
    printf("Transação Nº%d: $%.2f\n", i, transacao);
    // Definindo o código de cada transação e adicionando ao saldo
    if (rand() % 2 == 0)
      total_av += transacao;
    else
      total_ap += transacao;
  }

  // Calculando o valor total e o valor da 1ª parcela
  total = total_av + total_ap;
  p1 = total_ap / 3;

  // Imprimindo os resultados solicitados
  printf("\nValor total das compras à vista: $%.2f\n", total_av);
  printf("Valor total das compras à prazo: $%.2f\n", total_ap);
  printf("Valor total das compras: $%.2f\n", total);
  printf("Valor da 1ª prestação: $%.2f\n",p1);
  
  return 0;
}