#include <stdio.h>
#include <stdlib.h>

int main ()
{
  int opcao;
  float nota, peso, soma_notas, media_art, media_pnd, soma_pesos, soma_prod;
  
  soma_notas = soma_pesos = soma_prod = 0;

  do
  {
    printf("Menu de Opções\n");
    printf("1. Média Aritmética\n");
    printf("2. Média Ponderada\n");
    printf("3. Sair\n");
    printf("Digite o valor da opção desejada: ");
    scanf(" %d", &opcao);

    switch (opcao)
    {
    case 1:
    {
      printf("\n***Cálculo da Média de Duas Notas***\n");
      for (int i = 1; i <= 2; i++)
      {
        printf("Informe a %dª nota: ", i);
        scanf(" %f", &nota);
        soma_notas += nota;
      }
      media_art = soma_notas / 2;
      printf("A média das duas notas é: %.1f\n", media_art);    
      break;
    }
    
    case 2:
    {
      printf("\n***Cálculo da Média Ponderada de Três Notas***\n");
      for (int i = 1; i <= 3; i++)
      {
        printf("Informe a %dª nota: ", i);
        scanf(" %f", &nota);
        printf("Informe o peso da %dª nota: ", i);
        scanf(" %f", &peso);
        soma_pesos += peso;
        soma_prod += (nota * peso);
      }
      media_pnd = soma_prod / soma_pesos;
      printf("A média ponderada das três notas é: %.1f\n", media_pnd);      
      break;
    }
    
    case 3: exit(1);    
    
    default:
      printf("Opção inválida. Tente novamente.\n");
      break;
    }
  } while (opcao < 0 && opcao > 3);

  return (0);

}