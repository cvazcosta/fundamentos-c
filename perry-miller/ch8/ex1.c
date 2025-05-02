#include <stdio.h>

int main () {
  char firstInitial, lastInitial;
  int age, favorite_number;

  printf("What letter does your first name begin with?: ");
  scanf(" %c", &firstInitial);

  printf("What letter does your last name begin with?: ");
  scanf(" %c", &lastInitial);
  // scanf("%c%*c", &lastInitial);
  /*
    O comando scanf armazena em buffer o conteúdo digitado pelo usuário e 
    armazena também a tecla enter utilizada pelo usuário para encerrar a 
    entrada de dados. Para que o buffer seja esvaziado depois da atribuição do 
    conteúdo à variável, utiliza-se %*c (ASCENCIO & CAMPOS)

    Os autores deste livro apenas justificam o uso do espaço dizendo que eles
    ajudam a coletar melhor os inputs quando pegamos chars e numbers em sequência
    e que se trata de um bom hábito ao programar em C.

    Não se usa & antes de variáveis pointers. Como um array é uma desse tipo, 
    as variáveis %s não usam o &
  */

  printf("How old are you? ");
  scanf(" %d", &age);

  printf("What is your favorite number? ");
  scanf(" %d", &favorite_number);

  printf("Your initials are %c.%c. And you are %d years old.\n", 
  firstInitial, lastInitial, age);

  printf("Your favorite number is %d.\n", favorite_number);

  return 0;
}