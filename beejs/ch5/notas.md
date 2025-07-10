# Pointers

## Imprimindo o endereço de memória de uma variável

Neste [exemplo](./sample1.c) o autor mostra como imprimir o valor que representa o índice da posição de memória que uma variável está ocupando.

## Dereferencing

O operador dereference `*` é chamado de *indirection operator* porque ele permite acessar valores indiretamente por meio da variável pointer. Nosso segundo exemplo nos mostra um exemplo disto.

## Passando pointers como argumentos

Da mesma forma que quando passamos valores como argumentos, ao passar pointers uma cópia do valor que eles armazenam é passada para a função.

Como esse pointer estará apontando para o valor de uma determinada variável, poderemos na função usar o dereference operator `*` para acessar o valor que está armazenado na variável original. E tendo uma cópia do pointer é possível manipular o valor original armazenado naquele índice.

Vejamos este [exemplo](./sample3.c) para entender melhor. Por meio dele podemos entender como alterar o valor de uma variável do escopo de `main()` no escopo de uma outra função, neste caso `increment()`.

Uma outra maneira de fazer o mesmo que vimos no 3º exemplo é como segue:

```C
printf("i is %d\n", i); // Imprime 10
increment(&i);
printf("i is %d\n", i) // Imprime 11
```

É o mesmo que fazemos na função `scanf("%d", &i);` nós passamos um pointer com o endereço de memória de i e a função dereference esse pointer para modificar o valor da variável apontada por ela.

## NULL Pointer

É possível fazer com que uma pointer não aponte para nada atribuindo a ela o valor `NULL`.

```C
int *p;
p = NULL;
```

Na prática, em vez dela apontar para qualquer lixo (até ser inicializada) ela não apontará para nada e o valor de endereço que ele armazena será 0.

Não significa dizer que ao usar o dereferencing seu valor será 0 `*p = 0` e sim que `p = 0`, como vemos neste [exemplo](./sample4.c).
