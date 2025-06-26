# Retornando dados das funções

Neste capítulos veremos como passar valores da função que foi chamada para a função que executou a chamada. Também veremos as *functions prototypes*.

Entenderemos por que as funções `main()` que escrevemos até aqui terminam com `return 0;`.

Também entenderemos o verdadeiro propósito dos header files.

## Retornando valores

Como esperado, usamos a declaração `return` para que a função retorne esse valor a quem a chamar. Normalmente, os programadores colocam o valor a ser retornado entre parênteses como em: `return (answer);`.

Se uma função não retorna um valor, não é necessário colocar a declaração `return`, porque a função chamada retorna a `main()` automaticamente após sua conclusão.

Apesar de podermos passar diversos argumentos para uma função, ela só pode retornar um **único** valor.

Vejamos um [exemplo](./sample1.c) de cálculo de média para entender na prática.

É importante notar que em `main()` é preciso fazer algo com o valor recebido, como neste caso, atribuir à uma variável.

Também é possível retornar o resultado de expressões como, por exemplo, `return (quantity * price);`.

## O data type `return`

Nas funções que retornam valores, é preciso defini-las colocando o data type antes do seu nome, como fizemos no exemplo anterior `float localAvg()`.

Se o data type não for especificado, o padrão é `int`. Por isso que no final da função `main()` nós colocamos `return 0`, garantindo que esse valor seja retornado para o sistema operacional.

Se nossa função não retorna um valor ou não recebe nenhum valor como argumento, podemos usar a keyword `void`. No exemplo abaixo, temos uma função que não retorna nem recebe nenhum valor:

`void doSomething(void)`

De acordo com o padrão ANSI (American National Standards Institute), `main()` não pode receber o data type `void`. Deve ser sempre `int`. No entanto, a maioria dos compiladores permite esta tipagem.

## Passo final: Prototype

Se uma função retorna qualquer valor que não seja do tipo `int` é **necessário** fazer a prototipagem (na verdade, por boa prática é bom fazer para todas as funções, mesmo as que não retornam nenhum valor).

A prototipagem é apenas um modelo de alguma coisa e foi exatamente o que fizemos na primeira linha de código abaixo do `#include <stdio.h>` no nosso primeiro [exemplo](./sample1.c).

A princípio, parece uma linha a mais de código que só fazem o desenvolvedor perder tempo. Entretanto, sua importância recai no fato de que ao prototipar, C não permite que sejam passados valores de data types diferentes dos que foram especificados nos parâmetros da função. Se isso ocorrer, receberemos feedback do compilador nos avisando deste erro.

Para prototipar uma função, basta colocar uma duplicata da primeira linha dela em qualquer lugar antes da função `main()`. O ideal é prototipar **todas** as funções utilizadas em nosso programa (com exceção de `main()` desde que ela seja a 1ª função declarada em nosso programa), inclusive as *built-in functions* como `printf()`.

É por isso que no início de cada programa nós chamamos os *header files* das *built-in functions* que nós usaremos ao longo do programa. `<stdio.h>` contém os protótipos de todas as funções de entrada e saída que usamos até aqui.
