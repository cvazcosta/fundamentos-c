#include <stdio.h>

int main () {
  int sexo, opcao, qtd_sim, qtd_nao, qtd_mulheres_sim, qtd_homens;
  float qtd_homens_nao, porcentagem_homens_nao;

  qtd_sim = qtd_nao = qtd_mulheres_sim = qtd_homens_nao, qtd_homens = 0;

  for (int i = 1; i <= 10; i++)
  {
    do
    {
      printf("\nGênero do %dº entrevistado\n", i);
      printf("1. Masculino\n");
      printf("2. Feminino\n");
      printf("Informe o gênero: ");
      scanf(" %d", &sexo);
      if (sexo < 1 || sexo > 2)
      {
        printf("Entrada inválida. Tente novamente.\n");
      }      
    } while (sexo < 1 || sexo > 2);

    do
    {
      printf("\nO %dº entrevistado gostou do produto?\n", i);
      printf("1. Sim\n");
      printf("2. Não\n");
      printf("Informe a resposta: ");
      scanf(" %d", &opcao);
      if (opcao < 1 || opcao > 2)
      {
        printf("Entrada inválida. Tente novamente.\n");
      }      
    } while (opcao < 1 || opcao > 2);
    
    switch (opcao)
    {
      case 1:
      {
        if (sexo == 2)
        {
          qtd_sim++;
          qtd_mulheres_sim++;
        }
        else
        {
          qtd_sim++;
          qtd_homens++;
        }        
        break;
      }

      case 2:
      {
        if (sexo == 2)
        {
          qtd_nao++;
        }
        else
        {
          qtd_nao++;
          qtd_homens_nao++;
          qtd_homens++;
        }
        break;
      }    
    }
  }

  // Calculando percentagem de homens que disseram não dentre todos os homens
  porcentagem_homens_nao = (qtd_homens_nao / qtd_homens) * 100;


  printf("\n##### Resultados #####\n");
  printf("Nº de pessoas que responderam sim: %d\n", qtd_sim);
  printf("Nº de pessoas que responderam não: %d\n", qtd_nao);
  printf("Nº de mulheres que responderam sim: %d\n", qtd_mulheres_sim);
  printf("%% de homens que responderam não dentre todos os homens: %.2f%%\n", porcentagem_homens_nao);

  return 0;
  
}