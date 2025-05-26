#include <stdio.h>

int main ()
{
  int canal, qtd, q4, q5, q7, q12, soma;
  float p4, p5, p7, p12;

  q4 = q5 = q7 = q12 = soma = 0;

  do
  { 
    // Solicitando o canal
    printf("\nInforme o canal assistido entre 4, 5, 7 ou 12 | ou 0 para sair: ");
    scanf(" %d", &canal);

    if (canal == 4 || canal == 5 || canal == 7 || canal == 12)
    {
      // Se o canal digitado for válido, o usuário recebe o próximo prompt
      printf("Informe a quantidade de pessoas assistindo: ");
      scanf(" %d", &qtd);

      // A depender do canal escolhido, a quantidade específica é incrementada
      switch (canal)
      {
        case (4):
        {
          q4 += qtd;
          break;
        }
  
        case (5):
        {
          q5 += qtd;
          break;
        }
  
        case (7):
        {
          q7 += qtd;
          break;
        }
  
        case (12):
        {
          q12 += qtd;          
          break;
        }        
      }
    } else if (canal == 0)
    {
      // Se o usuário escolher 0 o programa é encerrado
      printf("Saindo do programa...\n");
      continue;
    } else
    {
      // Se for digitado algum número inválido o usuário recebe esta mensagem
      printf("Número de canal inválido.\n");
      continue;
    }

    // Incrementando a variável soma para registrar a audiência total
    soma += qtd;

  } while (canal != 0);

  // Calculando os percentuais
  p4 = ((float) q4 / soma) * 100;
  p5 = ((float) q5 / soma) * 100;
  p7 = ((float) q7 / soma) * 100;
  p12 = ((float) q12 / soma) * 100;

  // Mostrando os resultados
  printf("\n##### Resultados #####\n");
  printf("%% do Canal 4: %.1f%%\n", p4);
  printf("%% do Canal 5: %.1f%%\n", p5);
  printf("%% do Canal 7: %.1f%%\n", p7);
  printf("%% do Canal 12: %.1f%%\n", p12);

  return (0);
  
}