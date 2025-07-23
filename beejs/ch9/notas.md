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

Na prática, estamos usando o standard output toda vez que usamos `printf()`. Quando, em `fgets()` usamos `stdin` no 3º argumento, estamos declarando que a origem dos dados que devem ser recebidos vem do teclado.

Apesar de `stdout` e `stderr` terem como padrão a tela, isto não é uma redundância. É importante saber distinguir mensagens ordinárias de mensagens de erro, visto que é possível obtê-las separadamente em logs, por exemplo.

## Reading Text Files

Os streams possuem duas categorias: *text* e *binary*.

Arquivos de texto são uma sequência de linhas separadas por newlines. Para ser portátil, os dados de input devem sempre terminar em uma newline.

Como então podemos abrir um arquivo e obter seus dados? Vejamos este [exemplo](./sample1.c).

## End of File (`EOF`)

Há um caracter especial chamado `EOF` que é retornado por `fgetc()` quando chegamos ao final do arquivo e estamos tentando ler o próximo caracter.

O `EOF` é o motivo pelo qual funções como `fgetc()` retornam *int* data types e não chars. A função deve retornar qualquer byte e `EOF`, então precisaria ser de um tipo de dado que tenha tamanho maior que o byte do char.

Este [exemplo](./sample2.c) mostra como podemos usar o `EOF` para percorrer todos os caracteres de um texto parando até o fim, isto é, até encontrar o `EOF`.

## Lendo uma linha por vez

Nós vimos como ler um caracter por vez de um arquivo de texto. Agora vamos ver como pegar tudo que estiver em uma linha inteira. Para isto contaremos com `fgets()`! Quando não há mais dados a ler, nos é retornado `NULL`.

`fgets()` recebe 3 argumentos:

1. Char pointer (char *)
2. Número máximo de bytes para ler
3. `FILE*` que é a origem dos dados (quando fazemos a leitura da entrada do teclado usamos `stdin`)

Vejamos este [exemplo](./sample3.c) na prática que nos retorna um texto após pegá-lo linha após linha.

## Formatted Input

Vamos ver como obter strings separadas de um arquivo de texto e formatá-las em outro texto usando `fscanf()` neste [programa](./sample4.c).

A função `fscanf()` não faz a leitura de whitespace e retorna `EOF` ou error no fim do arquivo.

## Writing Text Files

Da mesma forma que usamos `fgetc()`, `fgets()` e `fscanf()` para ler texto, podemos usar `fputc()`, `fputs()` e `fprintf()` para escrever texto em files.

Para isto, precisamos abrir o arquivo em *write mode*, usando o argumento "w" em `fopen()`. Ao fazer isso, o arquivo será completamente zerado para um *full overwrite*.

Vejamos este [exemplo](./sample5.c).

## Binary File I/O

A leitura e escrita de arquivos do tipo binário ocorre de forma similar aos textos. A diferença é que o subsistema de entrada e saída não faz nenhuma tradução como faz com os arquivos de texto, pegando o fluxo bruto de bytes.

A diferença na abertura do arquivo é a adição de "b" ao tipo de ação. Se for leitura "rb" se for escrita "wb".

Arquivos binários podem conter NUL characters. E o NUL é o marcador de fim de string em C. Por isso, nesses casos, é raro alguém usar `fprintf()` e suas relacionadas para ler e escrever bytes no *stream*.

É mais comum usarmos `fread()` e `fwrite()` para ler e escrever um número específico de bytes para o *stream*.

### Escrevendo arquivos binários com `fwrite()`

Vamos ver um exemplo neste [programa](./sample6.c).

Como vimos, a função `fwrite()` recebe 4 argumentos. Os dois argumentos do meio são basicamente uma forma de declararmos "*cada item tem um determinado tamanho $x$ e queremos passar a quantidade $y$*".

Para vermos o arquivo que geramos `output.bin` podemos rodar no terminal o seguinte comando:

```bash
$ hexdump -C output.bin

00000000  05 25 00 58 ff 0c                                 |.%.X..|
00000006
```

`00000000` é o deslocamento (offset) dentro do arquivo onde essa linha da saída começa.

Os valores `05 25 00 58 ff 0c` são os valores dos bytes (e essa linha teria mais valores — até 16 por linha — se houvesse mais bytes no arquivo).  

Na parte direita, entre os símbolos de barra vertical (`|`), está a melhor tentativa do comando hexdump de imprimir os caracteres que correspondem a esses bytes. Ele imprime um ponto (.) se o caractere não for imprimível.  

Neste caso, como estamos apenas imprimindo dados binários aleatórios, essa parte da saída é apenas lixo (ou seja, não tem significado legível). Mas se tivéssemos escrito uma string ASCII no arquivo, veríamos ela ali.

Esse `00000006` que apareceu ao final da saída do `hexdump -C` indica o offset final, ou seja, a posição do próximo byte se o arquivo tivesse mais dados. Isso quer dizer que o arquivo tem exatamente 6 bytes, e o próximo byte estaria no offset 0x06.

### Lendo arquivos binários com `fread()`

Vejamos este [exemplo](./sample7.c) para entender melhor.

A função `fread()` retorna o número de bytes lido ou `0` no caso do `EOF`. Por isso usamos um loop que persiste enquanto os valores retornados por essa função forem maiores que zero.

A função `fread()` recebe os seguintes argumentos:

- O endereço de memória de uma *unsigned char* que vai armazenar o caracter lido
- O tamanho unitário do tipo de dado que será lido
- A quantidade total de dados que será lida
- FILE pointer que é a origem dos dados

#### Uma nota sobre a escrita de dados binários

Ao escrever números multibinários direto da memória, não é possível fazer isso de forma portátil, isto é, não há garantias de que o número que queríamos ter representado será de fato, por fatores relacionados às diferentes arquiteturas dos computadores e também ao comportamento dos compiladores.

A solução deste problema é *serialize data* por meio de algumas bibliotecas como a do Google chamada *protocol buffers*.

O recado é: ao escrever dados binários em um stream, sempre serializar os dados para torná-los portáteis.
