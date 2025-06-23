#include <stdio.h>

int main()
{
  int num, menor, maior;
  int ctr = 0;

  do
  {
    printf("Informe um número inteiro e positivo: ");
    scanf(" %d", &num);

    if (num == 0)
    {
      puts("Encerrando a entrada de dados.");
      break;
    } else if (num < 0)
    {
      puts("Dado inválido: Informe apenas números positivos");
      continue;
    }

    if (ctr == 0)
    {
      menor = maior = num;
    } else
    {
      if (num < menor)
      {
        menor = num;
      }

      if (num > maior)
      {
        maior = num;
      }
    }

    ctr++;

  } while (num != 0);

  puts("\n### Resultados ###");
  printf("Menor número: %d\n", menor);
  printf("Maior número: %d\n", maior);

  return 0;
  
}