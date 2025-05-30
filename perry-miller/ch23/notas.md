# Ordenando arrays e fazendo buscas mais rápidas

Nesse capítulo iremos aprender a técnica de ordenamento de dados mais simples chamada de **bubble sort**.

## Sorting

Realizar a ordenação de itens de uma lista é muito mais fácil utilizando os arrays que vimos nos capítulos anteriores. Isso se dá em função da conveniência em trocar itens de posição em função de seus índices (subscripts) dentro do array.

A técnica que iremos aprender aqui é a mais simples de entender, ainda que não seja muito eficiente.

Podemos ver a aplicação dessa técnica neste [programa](../../ascencio-campos/ch5/ex1-2) que recebe quatro números inteiros e os ordena de forma ascendente.

## Buscas mais rápidas

Em alguns casos, ordenar os elementos de um array torna a busca mais rápida. Um exemplo é o caso do [programa](./sample1.c) que criamos para buscar o saldo do cliente com base em seu ID.

Se ordenássemos a seguinte lista:

Desordenado | Ordenado
----------- | --------
313         | 178
532         | 313
178         | 422
902         | 532
422         | 562
562         | 902

E depois fizéssemos uma busca pelo ID 413, poderíamos apenas comparar com três valores para saber que esse ID não existe (178, 313 e 422). Ao verificar que o ID a ser comparado é maior que o ID digitado já poderíamos sair do loop e informar o usuário que não houve correspondência. Vejamos o [programa](./sample1.c) que demonstra isso.
