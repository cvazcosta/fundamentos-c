# Arrays

Um aspecto interessante da linguagem C é que ela possui arrays. Ou pelo menos o conceito. Na prática, veremos que os arrays em C na verdade são todos pointers. Mas não por agora.

Ao declarar arrays é preciso definir um tamanho fixo para ele. Mas nem sempre, coisa que veremos futuramente.

## Identificando o tamanho de um array

Como a linguagem C não tem essa informação, é preciso encontrá-la por meio de um truque exemplificado abaixo.

```C
int x[12]; // 12 ints
printf("%zu\n", sizeof x); // 48 total bytes
printf("%zu\n", sizeof(int)); // 4 bytes per int
printf("%zu\n", sizeof x / sizeof(int)); // 48/4 = 12 ints!
```

Este truque, porém, só funciona no escopo onde o array foi declarado. Se o array for passado para uma função não vai funcionar. Isto porque, quando passamos um array como argumento, na verdade estamos passando o endereço de memória do primeiro elemento, visto que todo array é um pointer do primeiro elemento.

## Array Initializers

Arrays podem ser inicializados com valores, mas **apenas valores constantes**. Não é recomendável inicializá-lo com mais elementos do que o limite definido, mas é possível o fazer com menos elementos. Os demais, em geral, são definidos como 0.

Um atalho interessante para inicializar todos os elementos como 0 é como segue: `int a[100] = {100};`

Também é possível determinar o valor de elementos específicos como no exemplo abaixo:

`int a[10] = {0, 11, 22, [5]=55, 66, 77};`

O resultado é: `0 11 22 0 0 55 66 77 0 0`

Também é possível colocar expressões constantes como:

```C
#define COUNT 5
int a[COUNT] = {[COUNT-3]=3, 2, 1};
```

Também é possível deixar a linguagem definir o tamanho do array com base na quantidade de elementos inicializados:

```C
int a[3] = {22, 37, 3490};
// is the same as:
int a[] = {22, 37, 3490}; // Left the size off!
```

## Out of bounds

A linguagem C permite acessar itens além do tamanho definido do array. Quando isso acontece estamos provocando o chamado *undefined behavior* o que gera consequências imprevisíveis e inesperadas ao comportamento do programa.

## Arrays multidimensionais

Arrays podem ter múltiplas dimensões. Em um array bidimensional o primeiro índice aponta para o número de linhas e o segundo para o número de colunas. Vemos isto no exemplo abaixo:

```C
int row, col;

int a[2][5] = { // Initialize a 2D array
  {0, 1, 2, 3, 4},
  {5, 6, 7, 8, 9}
};

for (row = 0; row < 2; row++) {
  for (col = 0; col < 5; col++) {
    printf("(%d,%d) = %d\n", row, col, a[row][col]);
}
}
```

O que fizemos acima foi uma matriz de 2x5. Quando queremos armazenar strings, é possível o fazer com arrays bidimensionais. Cada linha será uma string, cada coluna será um caracter da string.

Também é possível inicializá-los com índices explícitos: `int a[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};`

resultando em:

```Plain Text
1 0 0
0 1 0
0 0 1
```

## Arrays e Pointers

Ainda não é hora de ver com mais detalhes o relacionamento entre arrays e pointers. Mas iremos explorar como passar arrays para funções.

### Definindo um pointer para um array

```C
int a[5] = {11, 22, 33, 44, 55};
int *p;

p = &a[0]; // p aponta para o 1º elemento do array a
```

Outra maneira mais simples seria fazermos:

```C
p = a;
```

Isto porque **o nome do array é na verdade um pointer para o endereço de memória do primeiro índice**.

### Passando arrays unidimensionais para funções

Vejamos este [exemplo](./sample1.c) para entender melhor. Um aspecto relevante é o fato de que as mudanças que fazemos em um array dentro de uma função chamada, são mantidas e notadas na função que está chamando, em função de significar passar o argumento *by reference*.

### Passando arrays multidimensionais para funções

Com exceção do índice da 1ª dimensão, C precisa saber do tamanho exato das demais dimensões.

Logo poderíamos definir uma função que recebe um array bidimensional das duas formas abaixo:

```C
void print_2D_array(int a[2][3])
void print_2D_array(int a[][3])
```

Importante lembrar que o compilador de C faz checagems mínimas sobre os limites dos arrays em *compile-time* e **nenhuma checagem** em *runtime*.
