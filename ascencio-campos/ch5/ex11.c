#include <stdio.h>

int main () {
  float preco, preco_final, preco_av, parcelas, valor_parcela, percentual;

  printf("Informe o valor do preço: ");
  scanf(" %f", &preco);

  parcelas = 6.0;
  percentual = 1.03;
  preco_av = preco * 0.8;

  printf("\nPreço Final, Parcelas, Valor da Parcela\n");
  printf("%.2f, À Vista, 0\n", preco_av);

  for (int i = 0; i < 10; i++)
  {
    preco_final = preco * percentual;
    valor_parcela = preco_final / parcelas;

    printf("%.2f, ", preco_final);
    printf("%.0f, ", parcelas);
    printf("%.2f\n", valor_parcela);
    
    percentual += 0.03;
    parcelas += 6.0;    
  }
  
  return 0;
}