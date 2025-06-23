#include <stdio.h>

int main()
{
  int cod, tipo;
  float inv, rend, total;

  // Cada iteração apresenta o resultado para 1 cliente específico
  do
  {
    // Solicitando o código do cliente
    puts("Digite 0 para sair ou");
    printf("Informe o código do cliente: ");
    scanf(" %d", &cod);

    // Se o código digitado for menor ou igual a 0, o programa é encerrado
    if (cod <= 0)
    {
      puts("Encerrando o programa...");
      break;
    }
    
    // Para qualquer outro código, pede-se o tipo de investimento
    do
    {
      puts("Informe o tipo do investimento:");
      puts("1. Poupança");
      puts("2. Poupança Plus");
      puts("3. Fundos de Renda Fixa");
      scanf(" %d", &tipo);

      // Se não digitado um valor entre 1 e 3, o usuário será informado e 
      // o prompt de entrada de dados é repetido até que haja uma entrada válida
      if (tipo < 1 || tipo > 3)
      {
        puts("Entrada inválida: Digite um número entre 1 e 3.");
      }
           
    } while (tipo < 1 || tipo > 3);
    
    // Após a 1ª validação, pede-se o valor investido que deve ser positivo
    // Os resultados só serão calculados e mostrados após esta validação
    do
    {
      printf("Informe o valor investido: ");
      scanf(" %f", &inv);

      if (inv <= 0)
      {
        puts("Entrada inválida: Digite um valor positivo.");
      }
      
    } while (inv <= 0);
    
    // Cálculo dos resultados
    switch (tipo)
    {
    case 1:
      rend = inv * .015;
      total = inv + rend;
      break;

    case 2:
      rend = inv * .02;
      total = inv + rend;
      break;

    case 3:
      rend = inv * .04;
      total = inv + rend;
      break;
    
    }
      
    // Impressão dos resultados
    printf("\nCliente: %d\n", cod);
    printf("Total investido: $%.2f\n", total);
    printf("Juros Pagos: $%.2f\n\n", rend);

  } while (cod > 0);

  return 0;
  
}