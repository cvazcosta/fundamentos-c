# Funções mais comuns para lidar com chars e strings

As funções apresentadas nos tópicos 1 a 3 deste capítulo são parte da biblioteca `<ctype.h>`. Já a do tópico 4 faz parte da biblioteca `<string.h>`.

## 1. Testando se é caracter alfabético ou numérico

`isalpha()` retorna 1 se o valor dentro dos parênteses for um caracter alfabético entre a e z (ou A e Z). Caso não seja, retorna 0.

```C
if (isalpha(inChar))
{
  printf("Your input was a letter.\n");
}
```

A mensagem só é impressa na tela se inChar contiver uma letra alfabética.

`isdigit()`retorna 1 se o valor entre parênteses estiver entre 0 e 9 e retorna 0 caso não esteja.

```C
if (isdigit(inChar))
{
  printf("Your input was a digit.\n");
}
```

## 2. Testando se é maiúscula ou minúscula

`isupper()` e `islower()` permitem saber se uma variável contém um char maiúsculo ou minúsculo, respectivamente.

```C
if (isupper(inLetter))
{
  printf("Letter is uppercase.\n");
}
```

### 2.1 Exemplo 1

- Veja este [programa](./sample1.c) que recebe um username e password e usa as funções descritas no capítulo para checar se o password tem uma letra maiúscula, uma minúscula e um número. Se o usuário proceder como esperado ele é parabenizado. Senão, ele recebe uma mensagem para considerar usar uma senha mais forte.

## 3. Modificando para maiúscula ou minúscula

A linguagem C tem duas funções de modificação de caracteres importantes (também chamadas de character-mapping functions).

`toupper()` e `tolower()` retornam os caracteres dentro do parêntese nas formas maiúscula e minúscula, respectivamente.

```C
if (toupper(userInput) == 'Y')
{
  printf("Yes\n");
} else
{
  printf("No\n");
}
```

## 4. String functions

A função `strcat()` faz a concatenação de strings pegando a string colocada no segundo argumento e colocando-a no final da string colocada como o primeiro argumento.

```C
char first[25] = "Katniss"
char last[25] = " Everdeen"
strcat(first, last);
printf("I am %s\n", first);
// -> I am Katniss Everdeen
```

Um detalhe importante é sempre conferir se a string destino é capaz de armazenar os caracteres que receberá.

Outras duas funções importantes são `puts()`, que mostra uma string na tela e `gets()`, que recebe uma string digitada pelo usuário. Um detalhe importante é que `puts()` já pula uma linha automaticamente.

A função `gets()` contorna aquele problema do `scanf()` na leitura de strings com espaços. Ela lê toda a string que foi digitada incluindo os espaços colocados.

### 4.1 Exemplo 2

Veja um [programa](./sample2.c) que faz uso das três funções apresentadas neste tópico ao perguntar o nome da cidade e a sigla do estado de residência do usuário usando `puts()` e `gets()` e concatenando-as formando uma frase usando `strcat()`.
