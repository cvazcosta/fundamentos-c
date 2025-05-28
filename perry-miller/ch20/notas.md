# Funções numéricas

O capítulo se dedica a abordar algumas funções matemáticas de uso avançado e bem específico. Seu intuito é deixar claro ao leitor iniciante as possibilidades dadas por essas *built-in functions* da biblioteca `<math.h>`, mesmo que a probabilidade de que venhamos a usá-las sejam escassas.

**Atenção**: Ao usar a biblioteca `<math.h>` para que a compilação ocorra sem erros e suas funções sejam reconhecidas é preciso incluir a *flag* `-lm` junto à instrução como no exemplo abaixo:

`gcc sample1.c -lm -o sample1`

## Arredondando e truncando números

As funções `floor()` e `ceil()` servem para truncar e arredondar números não inteiros, respectivamente.

```C
lowVal1 = floor(18.5); // -> 18.0
lowVal2 = floor(-18.5); // -> -19.0

hiVal1 = ceil(18.5); // -> 19.0
hiVal2 = ceil(-18.5); // -> -18.0
```

## Obtendo o módulo de um número

A função `fabs()` permite obter o módulo de um número (sua versão positiva).

```C
printf("O valor absoluto de 25 é %.0f.\n", fabs(25.0));
printf("O valor absoluto de -25 é %.0f.\n", fabs(-25.0));
// O valor em ambos os casos será 25
```

## Potenciação e radiciação

A função `pow()` eleva um número a uma potência e a função `sqrt()` obtém a raiz quadrada de um número.

```C
printf("10 elevado ao cubo é: %.0f.\n", pow(10.0, 3.0));
printf("A raiz quadrada de 64 é: %.0f.\n", sqrt(64));
```

## Funções trigonométricas

Função | Descrição
------ | ---------
cos(x) | Retorna o cosseno do ângulo x
sin(x) | Retorna o seno do ângulo x
tan(x) | Retorna a tangente do ângulo x
acos(x)| Retorna o arcocosseno do ângulo x
asin(x)| Retorna o arcosseno do ângulo x
atan(x)| Retorna o arco tangente do ângulo x

Os ângulos devem ser fornecidos em *radianos*, mas se quisermos passá-lo em graus podemos convertê-los usando:

$graus = radianos * (180 ÷ 3.14159)$

## Funções logarítmicas

Função | Descrição
------ | ---------
exp(x) | Retorna o e elevado a uma potência x
log(x) | Retorna o logaritmo de x
tan(x) | Retorna o logaritmo de x na base 10

## Gerando aleatoriedade

A função `rand()` gera valores aleatórios entre 0 e 32767. Ela pode ser usada declarando a biblioteca `<stdlib.h>`. Para obter um conjunto específico de números podemos usar a operação módulo `%` como no exemplo abaixo:

`dado = (rand() % 5) + 1; // Retorna valores de 1 a 6`

No entanto, essa função por si só não garante uma aleatoriedade completa. Os números gerados normalmente ficam dentro de um mesmo subconjunto.

Para resolver isto existe a função `srand()` que dá um valor base para a função `rand()` gerar um número aleatório.

O grande segredo está em dar um número aleatório para o `srand()` de forma que ele seja diferente a cada execução.

Normalmente se faz uso da função `time(&t)` que retorna o número correspondente até o centésimo de segundo atual. Essa função precisa da biblioteca `<time.h>`.

Vamos ver este [exemplo](./sample1.c) que simula a jogada de dois dados apresentando o resultado. Em seguida o usuário informa se a próxima jogada será maior, menor ou igual a última jogada.
