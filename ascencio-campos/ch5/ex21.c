#include <stdio.h>
#include <math.h>

int main()
{
  int voto, c1, c2, c3, c4, n, b, qtd;
  float pn, pb;

  // Inicializando variáveis de soma
  c1 = c2 = c3 = c4 = n = b = 0;

  // Executando a solicitação de voto pelo menos uma vez
  do
  {
    printf("Vote nos candidatos 1-4, 5- Nulo ou 6- Em branco\n");
    printf("0- Sair\n");
    scanf(" %d", &voto);

    // Contabilizando votos ou informando sobre entrada inválida
    switch (voto)
    {
      case 1:
        c1++;
        break;

      case 2:
        c2++;
        break;

      case 3:
        c3++;
        break;

      case 4:
        c4++;
        break;

      case 5:
        n++;
        break;

      case 6:
        b++;
        break;

      case 0:
      break;
      
      default:
        printf("Opção inválida.\n");
        break;
    }
  } while (voto);

  // Contabilizando votos válidos
  qtd = c1 + c2 + c3 + c4 + n + b;

  // Calculando percentual de nulos e brancos sobre o total de votos válidos
  pn = ((float)n / (float)qtd) * 100;
  pb = ((float)b / (float)qtd) * 100;
  
  // Imprimindo resultados
  printf("\n*** Resultados ***\n");
  printf("Candidato 1: %d\n", c1);
  printf("Candidato 2: %d\n", c2);
  printf("Candidato 3: %d\n", c3);
  printf("Candidato 4: %d\n", c4);
  printf("%% de Nulos: %.1f%%\n", pn);
  printf("%% de Brancos: %.1f%%\n", pb);

  return (0);

}