#include <stdio.h>

int main () 
{
  int idade, cadastros, menor_idade, maior_idade, menor_salario, q;
  int idade_ms;
  char sexo, sexo_ms;
  float salario, media, soma_salarios;

  // Inicializando as variáveis de soma e contagem
  soma_salarios = cadastros = q = 0;  

  do
  {
    printf("\nDigite qualquer número negativo para sair ou\n");
    printf("Informe a idade: ");
    scanf(" %d", &idade);

    /*
      Verificando se a idade informada é maior ou igual a zero para que a 
      manipulação dos dados só seja feita neste caso
    */
    if (idade >= 0)
    {
      printf("Informe o sexo\n");
      printf("F- Feminino\n");
      printf("M- Masculino\n");
      printf("Digite a letra: ");
      scanf(" %c", &sexo);
  
      printf("Informe o valor do salário: ");
      scanf(" %f", &salario);

      /* 
        Após o recebimento dos dados são contabilizados o total de salários e o 
        número de cadastros
      */
      soma_salarios += salario;
      cadastros++;

      // Verificando se é o primeiro cadastro
      if (cadastros <= 1)
      {
        /* 
          Caso seja, as seguintes variáveis são inicializadas com os primeiros 
          valores para posterior comparação
        */
        menor_idade = idade;
        maior_idade = idade;
        menor_salario = salario;
      } else
      {
        // A partir do segundo cadastro já se inicia o processo de comparação
        if (idade < menor_idade)
        {
          menor_idade = idade;
        }
  
        if (idade > maior_idade)
        {
          maior_idade = idade;
        }

        /* 
          Abaixo a idade e sexo do menor salário são armazenadas para uso 
          posterior
        */
        if (salario < menor_salario)
        {
          menor_salario = salario;
          idade_ms = idade;
          sexo_ms = sexo;
        }        
      }
      
      // Contabilizando todas as mulheres com salários até 200
      if (sexo == 'F' && salario <= 200)
      {
        q++;
      }      
    }
  } while (idade >= 0);

  // Imprimindo resultados
  printf("\n##### Resultados #####\n");

  // Calculando e imprimindo a média de salários dos cadastros
  media = soma_salarios / cadastros;
  printf("Média dos salários: %.2f\n", media);

  // Imprimindo qual foi a maior e menor idade informada
  printf("Maior idade: %d\n", maior_idade);
  printf("Menor idade: %d\n", menor_idade);

  // Imprimindo a quantidade de mulheres com salário até R$ 200
  printf("Qtd de mulheres com salários até 200: %d\n", q);

  // Imprimindo idade e sexo da pessoa com o menor salário
  printf("Idade e sexo da pessoa com menor salário: \n");
  printf("%d anos | sexo: %c\n", idade_ms, sexo_ms);

  return (0);
  
}