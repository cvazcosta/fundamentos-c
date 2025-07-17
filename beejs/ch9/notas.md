# File Input/Output

É hora de aprofundar os conhecimentos sobre input e output em C.

## The `FILE*` Data Type

Para fazer qualquer tipo de input/output é preciso dados que são obtidos por meio de arquivos do tipo `FILE*`. A especificação da linguagem chama a origem dos dados como *stream* e arquivos são um tipo de *stream*, pois é possível adicionar fluxo de dados aos programas por outros meios além da leitura de dados de arquivos.

Vamos começar falando de três streams que já estão à nossa disposição para uso:

`FILE*` name | Descrição
------------ | ----------------------------------
`stdin`      | Standard Input, teclado por padrão
`stdout`     | Standard Output, a tela por padrão
`stderr`     | Standard Error, a tela por padrão

Na prática, estamos usando o standard output toda vez que usamos `printf()`.

Apesar de stdout e stderr terem como padrão a tela, isto não é uma redundância. É importante saber distinguir mensagens ordinários de mensagens de erro, visto que é possível obtê-las separadamente em logs, por exemplo.

## Reading Text Files

Os streams possuem duas categorias: *text* e *binary*.

Arquivos de texto são uma sequência de linhas separadas por newlines. Para ser portátil, os dados de input devem sempre terminar em uma newline.

Como então podemos abrir um arquivo e obter seus dados? Vejamos este [exemplo](./sample1.c).

## End of File (`EOF`)

Há um caracter especial chamado `EOF` que é retornado por `fgetc()` quando chegamos ao final do arquivo e estamos tentando ler o próximo caracter.

O `EOF` é o motivo pelo qual funções como `fgetc()` retornam *int* data types e não chars. A função deve retornar qualquer byte **e** `EOF`, então precisaria ser de um tipo de dado que tenha tamanho maior que o byte do char.

Este [exemplo](./sample2.c) mostra como podemos usar o `EOF` para percorrer todos os caracteres de um texto parando até o fim, isto é, até encontrar o `EOF`.

## Lendo uma linha por vez

Nós vimos como ler um caracter por vez de um arquivo de texto. Agora vamos ver como pegar tudo que estiver em uma linha inteira. Para isto contaremos com `fgets()`! Quando não há mais dados a ler, nos é retornado `NULL`.

`fgets()` recebe 3 argumentos:

1. Char pointer (char *)
2. Número máximo de bytes para ler
3. `FILE*` que é a origem dos dados (quando fazemos a leitura da entrada do teclado usamos `stdin`)

Vejamos este [exemplo](./sample3.c) na prática que nos retorna um texto após pegá-lo linha após linha.

## Formatted Input
