# Switch

## Sintaxe

```C
switch (expression)
{
  case (expression1): {one or more C statements;}
  case (expression2): {one or more C statements;}
  case (expression3): {one or more C statements;}
  default: {one or more C statements;}
}
```

## Regras

- A variável *switch* pode ser do tipo *int* ou *char*.
- Lembrar de sempre usar o `break;` para evitar que outros cases sejam executados.
- É possível arranjar a ordem dos cases e do default de qualquer maneira.
- Não é uma boa ideia aninhar declarações switch.
