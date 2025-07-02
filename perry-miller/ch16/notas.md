# Notas

O capítulo destina-se a mostrar como controlar o fluxo de execução dos loops usando as keywords `break`e `continue`.

## `break`

Normalmente eles são colocados dentro de *if*. O propósito do break é sair do loop.

```C
int main () {
  int numTest;
  float stTest, avg, total = 0.0;

  for (numTest = 0; numTest < 25; numTest++)
  {
    printf("What is the next student's test score? ");
    scanf(" %f", &stTest);

    if (stTest < 0.0)
    {
      break;
    }
    total += stTest;
  }
  
  avg = total / numTest;
  printf("The average is %.1f%%.\n", avg);
}
```

O exemplo acima mostra como sair do loop digitando um número negativo para interromper o loop e a contagem, caso hajam menos que 25 testes para avaliar a média.

## `continue`

Essa keyword faz com que todo o corpo do loop abaixo do `continue` seja ignorado na respectiva iteração voltando imediatamente ao topo do loop e começando o novo ciclo. Assim como o `break` ele também é normalmente usado dentro de um if.

```C
int main () {
  int i;

  for (i = 1; i <= 10; i++)
  {
    if (i % 2 == 1)
    {
      printf("I'm rather odd...\n");
      continue;
    }
  printf("Even up!\n");    
  }

  return 0;
  
}
```

O exemplo acima mostra como imprimir mensagens distintas a depender se o número for par ou ímpar.
