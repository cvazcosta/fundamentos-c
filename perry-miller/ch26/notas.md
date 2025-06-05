# Maximizando a memória do computador

## Heap Memory

Heap memory é o conjunto de espaço de memória ainda não utilizado pelo computador. É o que sobra após a inicialização do sistema operacional, do programa e das variáveis do programa.

Em diversas ocasiões será necessário acessar a heap, porque o programa vai precisar de mais memória do que inicialmente declaramos quando definimos nossas variáveis.

Este capítulo se dedica a nos ensinar por que e como usar a memória heap em vez de variáveis.

A única forma de acessar dados armazenados na **heap** é por meio de **pointers**!

## Pensando na heap

Será mais fácil entender o conceito de memória heap se nós pensarmos nela como uma grande pilha de memória livre.

À medida em que nossos programas são executados nós estaremos alocando (usando) e desalocando (deixando de usar) a heap memory.

Quando requisitamos heap memory para a execução de nossos programas, não é possível saber exatamente de onde virá esse espaço adicional. Assim, mesmo que hajam duas declarações subsequentes que requisitem esse espaço, não é possível garantir que a segunda requisição irá utilizar o endereço de memória subsequente ao da primeira. Essa lógica se aplica também quando desalocamos a heap memory. Em suma, **é possível apenas saber que a memória vem e vai para a heap**.

Importa notar que, se nós alocarmos 10 bytes de memória de uma vez, estes serão contíguos. Mas outra requisição de alocação não necessariamente irá pegar os endereços de memória subsequentes aos dos primeiros 10 bytes. Isto ocorre porque normalmente existem diversas outras aplicações que também fazem uso da heap de forma simultânea ao nosso programa.

**É fundamental manter o controle da memória que é alocada pelos nossos programas**. Isso é feito por meio das pointers e ela sempre irá apontar para o primeiro heap value da seção de memória que foi alocada. Para obter os valores das demais seções basta usar a notação de pointers ou de arrays que aprendemos nos dois últimos capítulos.

## Por que precisamos da heap?

O problema com as variáveis que aprendemos até agora é que para usá-las precisamos saber de antemão qual o tipo e quantas iremos precisar para que o nosso programa faça o esperado. Porém, à medida em que os usuários vão utilizando o programa certos requisitos podem mudar, por exemplo:

Definimos um array para armazenar 100 ids de clientes, mas o usuário agora tem 101. Nosso programa não tem como armazenar esse id a mais em tempo de execução (runtime). Será preciso um programador mudar a definição do array e recompilar o programa para que ele possa fazer o armazenamento correto.

Com a heap memory não é preciso saber de antemão quanto espaço de memória irei precisar. Sua quantidade de uso pode variar à medida que meu programa faz as devidas alocações e desalocações. Com isso, é possível armazenar tantos ids quanto necessário em runtime, sem precisar recompilar.

Essa alocação dinâmica deve ser feita de maneira cuidadosa, entretanto, de forma a utilizar a memória disponível do computador apenas tanto quanto for necessário para a execução desejada de nossa aplicação. Expandindo seu uso ou diminuindo conforme a necessidade e permitindo que as outras aplicações concorrentes possam utilizar a memória livre disponível.

## Como alocar a heap memory?

Precisamos de apenas duas funções da `<stdlib.h>`:

- `malloc(tamanho em bytes desejado)` para alocar memória
- `free()` para desalocar memória

Vamos pensar em um programa que calcula a média de entradas de temperatura. A princípio o programa irá alocar 10 integers para as 10 primeiras entradas. Se o usuário quiser adicionar mais, mais 10 espaços de integer serão alocados.

Primeiro, iremos criar um pointer para os 10 primeiros heap values:

```C
int * temps;
```

Em seguida, alocamos 10 integer spaces:

```C
temps = (int *) malloc(10 * sizeof(int));
```

A sentença `malloc(10 * sizeof(int))` diz para reservar 10 integer spaces **contíguos** na heap memory. O que significa que é a quantidade de bytes necessária para 10 integers, número obtido pela multiplicação de 10 pelo número de bytes de um integer.

Percebamos o que acabou de acontecer:

- A função `malloc()` aloca o número de bytes que solicitamos e garante que nenhum programa sobrescreva nada nesses endereços até que nosso programa libere esse espaço.

- A variável pointer `temps` está armazenando o primeiro endereço de memória que está sendo reservado pela função `malloc()`.

- A expressão `(int *)` é um *typecasting* que converte o resultado da função `malloc()` para um integer pointer. Isso é necessário porque por padrão `malloc()` retorna um *char pointer*;

Agora que temos esses 10 integers nós podemos tratá-lo da mesma forma como tratamos arrays. É possível armazenar dados referindo-se a temps[0], temps[1] e etc.

### Qual a grande vantagem de `malloc()`?

Ela pode ser usada em qualquer lugar no programa, são somente onde definimos variáveis e arrays, usualmente no início. Assim, se nosso programa precisar de 100 double values é possível alocar esse espaço somente no momento em que isto for necessário e não no começo, o que fará com que esse espaço seja usado do início ao fim do programa.
