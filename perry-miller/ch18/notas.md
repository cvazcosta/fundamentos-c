# Outras formas de Input / Output

Existem funções mais simples e com mais capacidades do que `printf()` e `scanf()` para escrever e ler dados.

## `putchar()` e `getchar()`

As funções `getchar()` e `putchar()` fazem a leitura e impressão na tela de um único caracter. Elas fazem parte do *header file* `stdio.h`.

## A questão do newline (\n)

A função `getchar()` instrui C a aceitar o input em um *buffer* (área reservada para input). A captação de caracteres para o *buffer* acaba quando o botão Enter é pressionado (\n). E aí o conteúdo do *buffer* é armazenado um caracter por vez.

Isto significa que o usuário pode apertar *Backspace* para corrigir erros de digitação e que o Enter fica armazenado no *buffer* também se eu não me livrar dele.

```C
printf("What are your two initials?\n");
firstInit = getchar();
lastInit = getchar();
```

No código acima, se o usuário digitasse as iniciais GT e apertasse Enter o que aconteceria é que o G iria para firstInit, mas o que iria para lastInit não seria o T e sim o Enter (\n)!

Uma forma de contornar isto é adicionando um getchar() extra para pegar o Enter e não fazer nada com ele.

```C
printf("What are your two initials");
firstInit = getchar();
lastInit = getchar();
getchar();
```

## `getch()`

A função `getch()` não considera o (\n) mas ela é *unbuffered* , isto é, ela vai armazenar imediatamente o que foi digitado, sem esperar por um Enter.

Uma desvantagem é que isto não permite que o usuário cometa erros e os corrija usando o backspace.

```C
printf("What are your two initials");
firstInit = getch();
lastInit = getch();
```

Outra questão importante é que `getch()` não mostra ao usuário o que ele está digitando. Para isto cada getch deve ser seguido de um `putch()`.

```C
printf("What are your two initials");
firstInit = getch();
putch(firstInit);

lastInit = getch();
putch(lastInit);
```
