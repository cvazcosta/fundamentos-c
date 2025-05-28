#include <stdio.h>
#include <ctype.h>

int main () 
{
  char tipo_acao;
  float preco_compra, preco_venda, lucro, lucro_total;
  int l1, l2;

  lucro_total = l1 = l2 = 0;

  // 
  do
  {
    puts("Informe a letra da ação ou pressione F para sair: ");
    scanf(" %c", &tipo_acao);
    
    // Verificando se foi digitado um caracter e se foi diferente de F
    if ((isalpha(tipo_acao) != 0) && (toupper(tipo_acao) != 'F'))
    {
      puts("Informe o preço de compra: ");
      scanf(" %f", &preco_compra);

      puts("Informe o preço de venda: ");
      scanf(" %f", &preco_venda);

      // Calculando o lucro da ação atual e somando ao lucro total
      lucro = preco_venda - preco_compra;
      lucro_total += lucro;

      // Imprimindo o lucro da ação informada
      printf("O lucro da ação %c foi: $%.2f\n", tipo_acao, lucro);

      // Verificando se o lucro foi acima de 1k ou abaixo de 200
      if (lucro > 1000)
      {
        l1++;
      } else if (lucro < 200)
      {
        l2++;
      }
    } 

  } while (toupper(tipo_acao) != 'F');
  
  puts("\n##### Resultados #####");
  printf("Ações com lucro acima de 1k: %d\n", l1);
  printf("Ações com lucro abaixo de 200: %d\n", l2);
  printf("Lucro total: $%.2f\n", lucro_total);

  return (0);
}