# `typedef`: Criando novos tipos

Em verdade, estaremos aprendendo como obter novos nomes para tipos de dados que já existem. Parece inútil, mas pode nos ajudar a tornar nosso código mais limpo.

Basicamente, podemos pegar qualquer tipo e dar um apelido usando `typedef`:

```C
typedef int antelope; // agora o tipo int será antelope
antelope x = 10; // x é do tipo int
```

Podemos até dar múltiplos nomes:

```C
typedef int antelope, bagel, mushroom; // Todos são ints
```

Essa redefinição segue as regras normais de escopo. Portanto, é comum achar essas declarações em escopo global para que todas as funções possam utilizá-la.

## `typedef` na prática

Vamos ver para que isso serve.

### `typedef` e `struct`

Um uso interessante dessa funcionalidade é renomear uma variável do tipo `struct` para evitar ter que usar essa keyword antes do nome definido ao declará-la.

```C
struct animal
{
  char *name;
  int leg_count, speed;
};

//  original name      new name
//            |         |
//            v         v
//      |-----------| |----|

typedef struct animal animal;
```

O mais comum é fazer isso logo ao declarar a struct, como abaixo:

```C
//  original name
//            |
//            v
//      |-----------|
typedef struct animal {
    char *name;
    int leg_count, speed;
} animal;                         // <-- new name

struct animal y;  // This works
animal z;         // This also works because "animal" is an alias
```

Outra forma mais comum e concisa é usar a *anonymous structures*.

```C
//  original name
//            |
//            v
//      |-----------|
typedef struct {
    char *name;
    int leg_count, speed;
} animal;                         // <-- new name

struct animal y;  // ERROR
animal z;         // This also works because "animal" is an alias
```

Outra forma comum é:

```C
typedef struct {
  int x, y;
} point;

point p = {p.x=20, p.y=40};

printf("%d, %d\n", p.x, p.y);
```

### `typedef` e outros data types

Um uso útil é abstrair os tipos para tornar a mudança deles mais fácil no futuro, caso haja necessidade.

```C
typedef float app_float;

app_float f1, f2, f3;
```

Para mudar para um long double, por exemplo, bastaria:

```C
typedef long double app_float;

app_float f1, f2, f3;
```

### `typedef` e Pointers

```C
typedef int *intptr;

int a = 10;
intptr x = &a;
```

O autor não gosta muito dessa prática porque ela não deixa explícito que x é um int pointer. Ele prefere deixar isso explícito no código para evitar confusões para as pessoas que estão lendo-o.

### `typedef` e capitalization

```C
typedef struct {
    int x, y;
} my_point;          // lower snake case

typedef struct {
    int x, y;
} MyPoint;          // CamelCase

typedef struct {
    int x, y;
} Mypoint;          // Leading uppercase

typedef struct {
    int x, y;
} MY_POINT;          // UPPER SNAKE CASE
```

Não há uma convenção quanto à forma de declaração. Todas acima poderão ser vistas por aí.

## Arrays e `typedef`

```C
// Make type five_ints an array of 5 ints
typedef int five_ints[5];

five_ints x = {11, 22, 33, 44, 55};
```

Também é possível fazer com arrays, mas não parece muito útil.
