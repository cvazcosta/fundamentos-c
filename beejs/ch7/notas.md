# Strings

Em C, as *strings* são pointers.

## String Literals

Vamos a algumas definições. Começando por *string literals* elas são sequências de caracteres entre aspas duplas, como:

```Plain Text
"Hello, world!\n"
```

## String Variables

Para atribuir uma *string literal* a uma variável fazemos assim:

```C
char *s = "Hello, world!";
```

A variável `s` é uma char pointer para o endereço de memória do primeiro caracter da string, neste caso `H`.

Para imprimir, usamos o especificador de formato `%s` como em `printf("%s", s);`.

## String Variables as Arrays

Uma opção similar à abordagem `char *` é declarar a variável como array:

```C
char s[14] = "Hello, world!";
char s[] = "Hello, world!"; // Aqui o compilador determina o tamanho
```

## String Initializers

As duas formas de inicializar strings que vimos possuem uma diferença importante.

Nesta forma, como *string literal*, `char *s` o que ocorre é que neste caso não é possível alterar determinados caracteres da string como em `s[0] = 'z';`. Porém, seria possível alterar toda a string `s = 'Hola, mundo!';`.

Declarando como um array a modificação da string, caracter por caracter funciona normalmente. Porém, não seria possível modificá-la totalmente de uma só vez como no caso da *string literal*.

## Obtendo o tamanho da string

Por meio da função `strlen()` da biblioteca `<string.h>` é possível saber o tamanho da string em bytes. Usamos o especificador de formato `%zu` porque o tipo retornado pela função é *size_t* (que é um tipo de integer).

```C
#include <stdio.h>
#include <string.h>

int main(void)
{
    char *s = "Hello, world!";

    printf("The string is %zu bytes long.\n", strlen(s));
}
```

## String Termination

A linguagem C armazena strings na memória da seguinte maneira: os bytes são armazenados e o final da string é indicado por um byte especial chamado de *terminator*.

De forma mais detalhada, C define uma string por duas características:

  1. Existência de um pointer para o primeiro caracter
  2. Um *nul character* (`\0`) em algum lugar após o pointer, para indicar o final da string.

Logo, quando nós declaramos `char *s = "Hello";` na verdade está sendo declarado `Hello\0`.

A função `strlen()` funciona de maneira similar à esta abaixo:

```C
int my_strlen(char *s)
{
    int count = 0;

    while (s[count] != '\0')  // Single quotes for single char
        count++;

    return count;
}
```

## Copiando uma string

Não é possível copiar uma string por meio do operador de atribuição `=` pois ao fazer isso estaríamos fazendo uma cópia do pointer do primeiro caracter.

```C
char s[] = "Hello, world!";
char *t;

// This makes a copy of the pointer, not a copy of the string!
t = s;

// We modify t
t[0] = 'z';

// But printing s shows the modification!
// Because t and s point to the same string!

printf("%s\n", s);  // "zello, world!"
```

Para copiar é preciso fazer isso caracter por caracter. Isso é mais fácil por meio da função `strcpy()` que recebe como 1º argumento o destino e em seguida a origem:

```C
char s[] = "Hello, world!";
char t[100];  // Each char is one byte, so plenty of room

// This makes a copy of the string!
strcpy(t, s);

// We modify t
t[0] = 'z';

// And s remains unaffected because it's a different string
printf("%s\n", s);  // "Hello, world!"

// But t has been changed
printf("%s\n", t);  // "zello, world!"
```
