# Estruturas de repetição

## while

```C
while (condition)
{ block of one or more C statements; }
```

O bloco de execução será repetido *enquanto* a condição testada for verdadeira. Para evitar os famosos **loops infinitos** é preciso garantir que o bloco de execução realize algum tipo de variação na condição que é testada a cada iteração a fim de que eventualmente ela se torne falsa e o loop seja encerrado.

## do...while

```C
do
{ block of one or more C statements; }
while (condition)
```

Funciona de forma similar ao while, porém o bloco de execução será executado pelo menos uma vez. Caso o teste do while seja verdadeiro, então haverá a repetição.
