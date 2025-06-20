# Salvando Sequential Files no Computador

O capítulo se dedica a ensinar como salvar os dados que são gerados por nossos programas em nosso computador. Quando os dados são armazenados em disco eles ficarão lá até serem sobrescritos por outro ou apagados.

## Disk Files

Os discos armazenam dados em arquivos. Quando escrevemos um programa e salvamos, ele fica armazenado em disco como um arquivo. Os arquivos podem armazenar programas ou dados.

Quando executamos um programa, eles são carregados do disco para a memória principal. A mesma coisa ocorre com os dados, que são carregados do disco para as variáveis.

Existem dois tipos de arquivos:

1. Sequential-access files: é preciso ler ou escrever nele na sequência dos dados.

2. Random-access files: é possível ler e escrever em qualquer local do arquivo.

Todos os disk files tem nomes que seguem as mesmas regras de nomeação de arquivos do sistema operacional.

Antes de usar um disk file para criar, modificar ou apagar dados, é preciso **abri-lo**.

Nosso computador atribui um *file pointer* aos arquivos e garante que o disco está apto a abrir e manipular o arquivo desejado.

Um *file pointer* armazena o endereço de memória do disco do arquivo que estamos trabalhando.

## Abrindo um Arquivo

Para abrir um arquivo usamos a função `fopen()`. No entanto, antes disso precisamos definir um *file pointer* da seguinte forma:

```C
FILE * fptr; // Define um file pointer chamado ftpr
```

Normalmente essa declaração vem antes da função `main()` para que ela seja uma variável global, acessível em *todo* o programa.

Aqui está um exemplo:

```C
#include <stdio.h>
FILE * fptr;
int main(void)
{
  fptr = fopen("c:\cprograms\cdata.txt", "w");
  // Restante do programa
  fclose(fptr); // Always close files you've opened
}
```

Assim, todas as vezes que formos realizar alguma operação com o arquivo `cdata.txt` precisaremos usar apenas a variável `fptr`.

A função `fclose()` recebe um file pointer como argumento e fecha o arquivo. Para evitar a possibilidade de perder dados, é necessário sempre fechar o arquivo quando não formos mais precisar dele.

Se o file pointer for igual a 0 significa que houve um erro ao tentar abrir o arquivo.

O segundo argumento `"w"` significa escrever. As *Mode Strings* desta função são:

Mode  | Descrição
----- | -------------------------------------------------------------------
`"w"` | Cria um novo arquivo caso ela exista ou não
`"r"` | Permite ler um arquivo existente. Se não existir, recebemos um erro.
`"a"` | Permite acrescentar dados ao fim de um arquivo ou criá-lo, caso não exista

## Usando Sequential Files

Só é possível fazer três coisas com um sequential file:

1. Criar

2. Ler

3. Escrever

Para escrever em um arquivo usamos `fprintf()`, que é um `printf()` com um file pointer.

Vejamos este [exemplo](./sample1.c) que cria e escreve alguns dados usando essa função.

## Lendo um Arquivo

Para lermos um arquivo usamos `fgets()`. Esta função lê as linhas de um arquivo e transforma em um array de caracteres (ou char pointer).

Como argumento, ela requer a quantidade máxima de elementos para o array que estamos lendo. É preciso cuidado para evitar ler além do final do arquivo, o que vai gerar um erro. Por isso é preciso checar pela localização do fim do arquivo.

`fgets()` lê uma linha por vez. Se nós especificarmos mais caracteres do que os existentes na linha sendo lida, a função para de ler a linha, desde que seu último caracter seja um *newline* (`\n`).

Vamos ver este [exemplo](./sample2.c) que mostra como ler e imprimir os dados no console a partir das informações em [`BookInfo.txt`](./BookInfo.txt)

A função `feofs()` usada no último programa retorna 1 (true) quando chegamos na última linha do arquivo que está sendo lido. Na prática, isso faz com que essa última linha não seja lida, na lógica que foi usada. Mas isso poderia ser contornado usando um else que imprime o conteúdo da última linha e em seguida dá um `break` para sair do loop.

Além de `fgets()` também é possível usar `fscanf()` para pegar valores numéricos individuais.

## Adicionando dados a um Arquivo

Vamos adicionar a linha `More books to come!` no final do arquivo `BookInfo.txt` usando o *append mode* neste [programa](./sample3.c).
