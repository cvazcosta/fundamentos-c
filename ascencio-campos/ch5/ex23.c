#include <stdio.h>
#include <stdlib.h>

int main()
{
  float salario, meses;
  int opcao;

  puts("Menu de opções:");
  puts("1. Novo salário");
  puts("2. Férias");
  puts("3. Décimo terceiro");
  puts("4. Sair");
  printf("Digite a opção desejada: ");
  scanf(" %d", &opcao);

  if (opcao == 4)
  {
    puts("Encerrando o programa...");
    exit(0);
  } else if (opcao < 1 || opcao > 4)
  {
    puts("Opção inválida. Tente novamente.");
    exit(1);
  }  
  
  printf("Informe o salário: ");
  scanf(" %f", &salario);
  
  switch (opcao)
  {
  case 1:
    if (salario <= 210)
    {
      salario *= 1.15;
    } else if (salario > 600)
    {
      salario *= 1.05;
    } else
    {
      salario *= 1.1;
    }    
    printf("Novo salário: $%.2f\n", salario);
    break;
  
  case 2:
    salario *= 1.3;
    printf("Férias: $%.2f\n", salario);
    break;

  case 3:
    printf("Informe o número de meses trabalhados: ");
    scanf(" %f", &meses);
    salario *= meses / 12;
    printf("13º: $%.2f\n", salario);
    break;

  }

  return 0;
}