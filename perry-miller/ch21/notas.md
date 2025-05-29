# Arrays

Na prática já trabalhamos com arrays antes ao armazenar strings em arrays de caracteres. O capítulo se dedica apenas a demonstrar que é possível criar um array de dados de qualquer tipo.

## Conceitos

Todos os arrays contém **elementos**. Um array só pode conter elementos do **mesmo** tipo.

Para definir um array é preciso especificar, além do tipo e do nome, os brackets [] com o tamanho máximo de elementos (subscripts) que pretendemos armazenar.

É possível especificar tamanhos maiores do que atualmente estamos usando se entendemos que poderemos precisar armazenar mais no futuro. Só é preciso tomar cuidado para não exagerar, pois arrays podem consumir muita memória e quanto mais espaço for reservado para o array menos espaço terei para o programa e para as outras variáveis.

É possível inicializar um array com mais de um elemento da seguinte forma:

`int vals[5] = {10, 40, 70, 90, 120};`

O array `vals` tem as seguintes posições:

Elemento | Posição
-------- | -------
10       | vals[0]
40       | vals[1]
70       | vals[2]
90       | vals[3]
120      | vals[4]

Também é possível inicializar um array com caracteres sem considerá-lo como uma string:

`char grades[5] = {'A', 'B', 'C', 'D', 'E'};`

Como o *null zero* (\0) não é o último elemento do array, ele não é tratado como string. Se ele for incluído na última posição, seria possível imprimi-lo usando `puts()` ou `printf()` e o `%s`.

O exemplo abaixo seria uma string:

`char italCity[7] = {'V', 'e', 'r', 'o', 'n', 'a', '\0'};`

Resultado equivalente (e mais prático) poderíamos obter por:

`char italCity[7] = "Verona";`

É possível inicializar um array sem definir exatamente a quantidade de elementos em um caso: no momento da sua definição e atribuindo um ou mais valores a ele.

```C
int ages[]; // Não funciona
int ages[] = {5, 27, 65, 40}; // Funciona
```

Cabe ressaltar que a função `sizeof()` retorna o **número de bytes reservados** e não o **número de elementos armazenados**.

Para atribuir zero a todos os elementos de um array fazemos:

`float amount[100] = {0.0};`

A maioria dos compiladores de C zeram todos os elementos de um array se nós definirmos o array com pelo menos um elemento com valor definido.

## Colocando valores em arrays

É possível usar loops para atribuir valores a diferentes posições de um array:

```C
int ages[3];

for (i = 0; i < 3; i++)
{
  printf("What is the age of child #%d? ", i+1);
  scanf(" %d", &ages[i]); 
}
```

Vejamos um exemplo de [programa](./sample1.c) que demonstra as duas formas pelas quais podemos atribuir valores a um array.
