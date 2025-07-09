#include <stdio.h>

int main(void)
{
  float nums[10];
  int negativos, qtd, i;
  float soma = 0;

  do
  {
    printf("Informe a quantidade de números que deseja digitar.\n");
    printf("Mínimo de 1 e Máximo de 10 números: ");
    scanf("%d", &qtd);
    if ((qtd < 1) || (qtd > 10))
    {
      printf("Entrada inválida. Tente novamente.\n\n");
    }
    
  } while ((qtd < 1) || (qtd > 10));

  for (i = 0; i < qtd; i++)
  {
    printf("Informe o número #%d: ", (i + 1));
    scanf("%f", &nums[i]);
    if (nums[i] < 0)
    {
      negativos++;
    } else
    {
      soma += nums[i];
    }    
  }

  printf("\n### Resultados ###\n");
  printf("Números negativos: %d\n", negativos);
  printf("Soma dos positivos: %.2f\n", soma);
  
  return 0;

}