#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  int cod[10];
  int estoque[10];
  int i, codC, codP, qtd, atendido;
  time_t t;

  srand(time(&t));

  // Preenchendo os vetores com os códigos e qtd de produtos em estoque
  printf("###### Sistema de Registro de Pedidos ######\n\n");
  printf("### Estoque Inicial ###\n");
  for (i = 0; i < 10; i++)
  {
    cod[i] = i + 1;
    estoque[i] = rand() % 100;
    printf("Cód. #%d: %d\n", cod[i], estoque[i]);
  }

  do
  {
    atendido = 0;
    printf("\nDigite o cód. do cliente ou 0 para sair: ");
    scanf(" %d", &codC);

    if (codC == 0)
    {
      exit(0);
    }

    do
    {
      printf("Digite o cód. do produto desejado: ");
      scanf(" %d", &codP);
      if (codP < 0 || codP > 10)
      {
        printf("Código inexistente\n");
      }      
    } while (codP < 0 || codP > 10);

    printf("Informe a quantidade desejada: ");
    scanf(" %d", &qtd);

    if (estoque[codP - 1] - qtd >= 0)
    {
      printf("\nPedido atendido. Obrigado e volte sempre.\n");
      atendido = 1;
    } else
    {
      printf("\nNão temos estoque suficiente dessa mercadoria.\n");
    }

    if (atendido)
    {
      estoque[codP - 1] -= qtd;      
    }
    
    printf("\n### Estoque Atual ###\n");
    for (i = 0; i < 10; i++)
    {
      printf("Cód. #%d: %d\n", cod[i], estoque[i]);
    }
  
  } while (codC != 0);
  
  return 0;
  
}