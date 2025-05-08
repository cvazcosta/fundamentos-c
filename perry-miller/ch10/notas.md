# Notas

O intuito do capítulo é ensinar sobre os *compound operators* e como usar *typecasting*.

Os *compound operators* são os *operadores de atribuição* que aprendemos em fontes anteriores como:

- +=
- -=
- *=
- /=
- %=

## Ordem de precedência

Um detalhe a ser observado é que os *compound operators* têm precedência menor que a das operações fundamentais. Por isso a operação abaixo resulta em algo que talvez seja contraintuitivo à primeira vista:

```C
total = 5;
total *= 2 + 3;
// Como o operador de soma tem precedência sobre o de atribuição, o resultado dessa operação é 5 * (2 + 3) = 25
```

## Typecasting

*Typecasting* equivale a mudar, temporariamente, o tipo de dado de uma determinada variável:

```C
int age = 6;
(float) age;
// age -> 6.000000
// age agirá como float apenas nessa operação
```

Uma boa prática ao usar *typecasting* em uma expressão é a de converter explicitamente todas as variáveis envolvidas para evitar problemas de arrendondamento possíveis ao envolver operações entre variáveis com diferentes tipos de dados.

Também é possível fazer esta operação em uma expressão:

```C
value = (float) (number - 10 * yrsService);
```
