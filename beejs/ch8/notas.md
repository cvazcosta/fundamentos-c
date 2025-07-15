# Structs

Um *struct* é um data type definido pelo programador e que pode contar diversos dados de diferentes tipos. Um struct facilita na hora de passar variáveis para funções, permitindo passar apenas uma em vez de várias, tornando o código mais organizado e legível.

## Declarando um struct

```C
struct car {
  char *name;
  float price;
  int speed;
};
```

Normalmente um struct é declarado em escopo global, para que esteja acessível a qualquer função.

Após definir um novo tipo de dado, para criar uma variável com ele fazemos, por exemplo:

```C
struct car saturn;
```

Para inicializá-las usa-se o chamado *dot operator* `.`:

```C
saturn.name = "Saturn SL/2";
saturn.price = 15999.99;
saturn.speed = 175;
```

Também é possível inicializá-las da seguinte maneira, respeitando a ordem dada na definição da struct:

```C
struct car saturn = {"Saturn SL/2", 16000.99, 175};
```

Também é possível ser um pouco mais específico, evitando a necessidade de declarar cada valor na ordem da definição da struct. É considerado mais seguro do que o de cima:

```C
struct car saturn = {.speed=175, .name="Saturn SL/2"};
```

## Passando structs para funções

Um struct pode ser passado a uma função de 2 formas:

1. Passando o struct (uma cópia dele será usada na função)
2. Passando um pointer para o struct (o próprio valor da variável será alterado)

A 2ª opção é válida também no caso em que o struct é muito grande e fazer uma cópia dele pode consumir muitos recursos então é mais fácil copiar um pointer.

Vamos a um [exemplo](./sample1.c) de como passar um pointer de um struct para uma função.

No exemplo, vimos que na definição da função `set_price` tivemos de usar a notação `c->price = price` porque a *dot notation* só funciona exclusivamente com structs e não com pointers.

## Copiando e retornando structs

```C
struct car a, b;

b = a;  // Copy the struct
```

## Comparando structs

Só há uma maneira segura: comparar cada campo, um por vez.
