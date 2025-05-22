#include <stdio.h>

int main () {
  int opiniao, opcao, idade, qtd_regular, cadastros;
  float media_otimo, qtd_otimo, qtd_bom, perc_bom, soma_otimo;

  // Inicializando variáveis contadoras e de soma
  qtd_otimo = qtd_bom = qtd_regular = soma_otimo = cadastros = 0;

  for (int i = 1; i <= 15; i++)
  { 
    /* 
      Inicializando opcao a cada loop para que o menu abaixo só apareça da 
      2ª iteração em diante dando a opção de cadastrar +1 ou sair e receber
      os resultados de acordo com o número de cadastros feitos
    */
    opcao = 0;

    // Menu de Cadastro
    while (cadastros > 0 && opcao == 0)
    {
      printf("\nCadastros realizados: %d\n", cadastros);
      printf("1 - Realizar +1 cadastro\n");
      printf("2 - Sair\n");
      printf("Informe a opção desejada: ");
      scanf(" %d", &opcao);

      if (opcao < 1 || opcao > 2)
      {
        printf("Opção inválida. Tente novamente.\n");
        opcao = 0;
      }
      
    }

    /*
      Solicitando entrada do usuário em dois casos:
        1. 1ª Iteração 
        2. A partir da 2ª Iteração se o usuário escolheu opção 1 no 
        Menu de Cadastro
        Se ele escolher a opção 2 ele cai no else e o loop é encerrado
    */

    if (opcao == 1 || cadastros == 0)
    {
      // Solicitando entrada da idade com verificação do valor
      do
      {
        printf("\n%dª idade: ", i);
        scanf(" %d", &idade);
        if (idade < 0)
        {
          printf("\nEntrada inválida. Informe o valor maior ou igual a zero.\n");
        }
      } while (idade < 0);
      
      // Solicitando entrada da opinião com verificação do valor
      do
      {
        printf("\n%dª opinião\n", i);
        printf("3 - ótimo\n");
        printf("2 - bom\n");
        printf("1 - regular\n");
        printf("Informe o valor associado à opinião: ");
        scanf(" %d", &opiniao);
        if (opiniao < 1 || opiniao > 3)
        {
          printf("\nEntrada inválida. Informe um valor entre 1 e 3\n");
        }
      } while (opiniao < 1 || opiniao > 3);
      
      // Contabilizando o cadastro
      cadastros++;
  
      // Contabilizando pessoas com a opinião ótimo e somando suas idades
      if (opiniao == 3)
      {
        qtd_otimo++;
        soma_otimo += idade;
      }
  
      // Contabilizando pessoas com a opinião regular
      if (opiniao == 1)
      {
        qtd_regular++;
      }
  
      // Contabilizando pessoas com a opinião bom
      if (opiniao == 2)
      {
        qtd_bom++;
      }
      
    }
    else
    {
      break;
    }
  }

  // Calculando a média dos que responderam ótimo
  media_otimo = soma_otimo / qtd_otimo;
  // Calculando percentual dos que responderam bom, dentre todos os cadastros
  perc_bom = (qtd_bom / cadastros) * 100;

  // Imprimindo os resultados solicitados
  printf("\n##### Resultados #####\n");
  printf("Média das pessoas que responderam ótimo: %.2f\n", media_otimo);
  printf("Qtd de pessoas que responderam regular: %d\n", qtd_regular);
  printf("%% de pessoas que responderam bom dentre todos: %.1f%%\n", perc_bom);

  return 0;
  
}