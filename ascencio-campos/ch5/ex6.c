#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () {
  float total_av, total_ap, total, p1, transacao;
  int codigo, j;

  // Inicializando variáveis 
  total_av = total_ap = 0;

  for (int i = 1; i <= 15; i++)
  {
    printf("\nInforme o valor da %dª Transação: ", i);
    scanf(" %f", &transacao);

    // 
    do
    {
      printf("Código da %dª Transação\n", i);
      printf("1 - À Vista\n");
      printf("2 - À Prazo\n");
      printf("Informe o código desejado: ");
      scanf(" %d", &codigo);

      j = 0;
  
      if (codigo == 1)
      {
        total_av += transacao;
        break;
      }
      else if (codigo == 2)
      {
        total_ap += transacao;
        break;
      }
      else
      {
        printf("Valor inválido! Tente novamente.\n\n");
        j = 1;
      }
    } while (j == 1);
    
  }

  // Calculando o valor total e o valor da 1ª parcela
  total = total_av + total_ap;
  p1 = total_ap / 3;

  // Imprimindo os resultados solicitados
  printf("\n##### Resultados #####\n");
  printf("\nValor total das compras à vista: $%.2f\n", total_av);
  printf("Valor total das compras à prazo: $%.2f\n", total_ap);
  printf("Valor total das compras: $%.2f\n", total);
  printf("Valor da 1ª prestação: $%.2f\n",p1);
  
  return 0;
}