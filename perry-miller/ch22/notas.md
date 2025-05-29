# Percorrendo arrays

Buscar e ordenar valores é uma das funções mais fundamentais da programação. E este e os próximos capítulos terão por objetivo apresentar as técnicas mais simples.

O intuito agora não é aprender nenhuma feature nova da linguagem, mas sim a aplicação daquilo que já aprendemos até aqui.

## Preenchendo arrays

Na prática diária, os arrays de nossos programas normalmente serão preenchidos por uma combinação dos seguintes métodos:

1. Atribuição

2. Input do usuário

3. Arquivos em disco

## Encontrando valores armazenados em arrays

Vamos pensar no seguinte cenário: dois arrays, um com id_cliente e outro com o saldo bancário de suas contas. Esses arrays são chamados de **arrays paralelos** porque eles estão sempre em sincronia, isto é, o elemento 14 do primeiro array contém o id_cliente do cliente que tem o saldo bancário encontrado no elemento 14 do array saldo.

Vamos analisar um [programa](./sample1.c) que faz as seguintes funções:

1. Pergunte por um id de cliente

2. Procure o array pelo saldo correspondente ao id informado

3. Informe se o cliente já deve mais do que $100

### Exemplo 2 - Encontrando o maior valor dentro de um array

Este outro [programa](./sample2.c) mostra como identificar o maior valor de um array.

Ambos os exemplos mostrados nesse capítulo tratam do que é conhecido como **busca sequencial**, porque os elementos são percorridos do início ao fim do array até que o critério de busca seja atingido.

Os próximos capítulos tratarão de ordenação de arrays e outras técnicas de busca mais avançadas como busca binária e busca de Fibonacci.
