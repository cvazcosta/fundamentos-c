#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
  float vendas[10];
  float comissao[10];
  char vendedores[10][80]; 
  int i;
  
  for (i = 0; i < 10; i++)
  {
    printf("Informe o total de vendas do vendedor #%d: ", (i + 1));
    scanf("%f", &vendas[i]);
    
    printf("Informe o percentual de comissão do vendedor %d: ", (i + 1));
    scanf("%f", &comissao[i]);
    getchar();
  
    printf("Informe o nome do vendedor #%d: ", (i + 1));
    fgets(vendedores[i], 80, stdin);
  }
  
  printf("\n### Resultados ###\n");
  for (i = 0; i < 10; i++)
  {
    printf("Vendedor: %s", vendedores[i]);
    printf("Vendas: $%.2f\n", vendas[i]);
    printf("Comissão: $%.2f\n\n", ((comissao[i] / 100) * vendas[i]));
  }  
    
  return 0;
  
}