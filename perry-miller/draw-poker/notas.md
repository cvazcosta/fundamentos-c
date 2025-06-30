# Draw Poker Game

Esta é a documentação do projeto final do livro *C Programming - Absolute Begginer's Guide*.

## Fluxo do Jogo

O projeto consiste em um jogo de pôquer no qual o usuário:

1. Informa um valor entre 1 e 5 créditos para apostar

2. Recebe 5 cartas aleatoriamente

3. Informa se vai manter ou trocar cada uma delas

4. Recebe finalmente:

    - O último deck de 5 cartas
    - O resultado da mão
    - O valor de créditos recebidos
    - O valor atualizado de seu saldo de créditos

## Sistema de Pontuação e de Atribuição de Créditos

As pontuações seguem os critérios abaixo:

Nome           | Pontuação | Descrição
---------------|:---------:|----------------------------------------------------
High Card      | 0         | Nenhuma das situações previstas abaixo
Pair           | 1         | Duas cartas do mesmo valor
Two Pairs      | 2         | Dois pares de cartas do mesmo valor
Three of a Kind| 3         | Três cartas do mesmo valor
Straight       | 4         | Cinco cartas com valores consecutivos
Flush          | 5         | Cinco cartas do mesmo naipe
Full House     | 8         | Três cartas do mesmo valor e um *pair*
Four of a Kind | 10        | Quatro cartas do mesmo valor
Straight Flush | 20        | Cinco cartas c/ valores consecutivos do mesmo naipe

Os créditos a serem recebidos no final de cada rodada são calculados como o produto entre o valor apostado e a pontuação recebida:

$Creditos da Rodada = Aposta * Pontuacao$

E o saldo final é calculado segundo a fórmula abaixo:

$Saldo Final = Saldo - Aposta + (Aposta * Pontuacao)$

## Fluxo de Execução das Funções Auxiliares

Este tópico contém a explicação do funcionamento das funções auxiliares na ordem em que são chamadas na função principal.

### `void printGreeting()`

Função sem retorno que se destina apenas a imprimir uma mensagem de boas vindas e explicar as regras do jogo ao usuário.

É a primeira função a ser chamada após a declaração das variáveis em `main()` e é chamada fora do loop para que seja impressa apenas antes da primeira execução.

### `int getBet()`

É a primeira função chamada dentro do loop `do...while` e realiza as seguintes instruções:

1. Solicita e armazena o valor da aposta do usuário (entre 1-5) ou apertar 0 para sair do jogo.

2. Verifica qual foi o valor digitado.

Se for entre 1-5 o valor é retornado à função `main()` e armazenado na variável `bet`.

Se for 0, a execução é finalizada.

Se for qualquer outro valor fora deste intervalo, é impressa uma mensagem de instruções e o prompt de solicitação é impresso novamente para o usuário digitar uma entrada válida.

### `void getFirstHand(int cardRank[], intcardSuit[])`

Após a definição do valor da variável `bet`, é executada uma instrução para inicializar um valor aleatório baseado na função `srand(time(&t))`.

Em seguida, a função `getFirstHand(cardRank, cardSuit)` é chamada.

Esta é uma função sem retorno que recebe dois arrays de inteiros com 5 posições como argumento e preenche cada posição para que depois o valor e o naipe das cartas sejam impressos.

Funciona da seguinte forma:

1. Loop `for()` para percorrer os 5 índices de cada vetor

2. Dentro do `for()` é inicializada uma variável flag `cardDup` como zero.

3. Loop `do...while` que atribui valores à cada posição dos arrays `cardRank[]` e `cardSuit[]` usando a função `rand()` e dividindo seu resultado por 13 e por 4 respectivamente.
Isto garante que no array de valores sejam obtidos valores entre 0-12 e no segundo array valores entre 0-3 que representarão valores e naipes específicos conforme especificaremos noutra função.

4. Dentro do `do...while()` há um loop `for()` que verifica se a carta que foi gerada aleatoriamente já se encontra no deck. Caso já esteja, a variável flag recebe o valor 1 o que faz com que o loop externo recomece para gerar uma nova carta até que verifique-se que não há duplicatas.

### `char getRank(int rank) & char getSuit (int suit)`

Após a execução da função `getFirstHand(cardRank, cardSuit)`, ocorre a impressão da primeira mão do jogador. Isto é feito com um loop `for()` que percorre os 5 elementos de cada array, e a cada repetição as variáveis `suit` e `card` recebem o valor retornado pelas funções `getRank()` e `getSuit()`.

Ambas as funções são apenas uma estrutura `switch` que retorna um caracter com o valor ou primeira letra do valor e do naipe da carta.

### `void getFinalHand(int cardRank[], int cardSuit[], int finalRank[], int finalSuit[], int ranksinHand[], int suitsinHand[])`

Após a impressão da primeira mão de cartas, os arrays que vão contabilizar o número de cartas por valor e por naipe são inicializados (`ranksinHand[]` e `suitsinHand[]`).

Em seguida é chamada a função `getFinalHand()`. Ela recebe 6 arrays como argumento:

1. 2 arrays com os valores e naipes da primeira mão: `cardRank[]` e `cardSuit[]`

2. 2 arrays com os valores e naipes da mão final: `finalRank[]` e `finalSuit[]`

3. 2 arrays que contabilizarão o total de cartas por valor e por naipe: `ranksinHand[]` e `suitsinHand[]`

Ela funciona da seguinte maneira

1. Um loop `for()` que percorrerá as 5 posições dos arrays com o deck inicial e também com o deck final que será formado.

    1.1 No início as funções `getSuit` e `getRank` são chamadas para mostrar ao usuário as cartas que ele possui e perguntar se ele deseja mantê-la ou trocá-la.

    1.2 Se ele desejar mantê-la, os valores dos arrays `cardRank` e `cardSuit` são colocados também nos arrays `finalRank` e `finalSuit`.

    1.3 Além disso, os arrays `ranksinHand` e `suitsinHand` são incrementados em 1 unidade na posição equivalente ao valor dos elementos em `finalRank` e `finalSuit` na posição que está sendo percorrida atualmente.

    1.4 Se o usuário quiser trocar sua carta, dentro de um loop `do...while` é feita uma nova geração de valores usando a função `rand()`. Em seguida, são feitas duas verificações:

      1.4.1 Uma para ver se essa nova carta já pertence ao array que representa a primeira mão.

      1.4.2 Outra para ver se a nova carta está no array que representa a mão final.

    1.5 Quando for colocada uma nova carta que não é duplicada, então ocorre o mesmo tipo de incremento do tópico 1.3.

### `analyzeHand(ranksinHand, suitsinHand)`

Após a impressão do deck final, a função `analyzeHand` é chamada para identificar qual foi o resultado obtido pelo jogador.

#### Flush

O primeiro resultado a ser buscado é o **Flush**. É feito um loop `for()` que percorre as 4 posições do array `suitsinHand[]`. Se em alguma das posições houver o valor 5, isso indica que o usuário tinha 5 cartas do mesmo naipe.

#### Straight

Em seguida é feita uma lógica para identificar se o usuário possui 5 cartas consecutivas.

É usada uma variável `rank` para identificar qual o índice do menor valor que o usuário possui, começando do menor índice do array `ranksinHand`. É usado um loop `while` para identificá-lo e assim que o valor do índice for diferente de zero saímos desse loop para o próximo.

O loop seguinte, `for()` percorre todos os índices a partir do primeiro que seja diferente de zero. Se o índice for menor que 13 e o valor dele for diferente de zero, a variável `num_consec` é incrementada em 1 unidade e o loop reinicia.

Se `num_consec` for igual a 5, significa que o usuário possuia uma sequência então a variávei `straight` recebe o valor 1 (TRUE).

#### 2, 3 ou 4 cartas de mesmo valor

É feito um loop `for()` que percorre as 13 posições do array `ranksinHand`. Se alguma posição tiver valor igual a 4, a variável `four` recebe `TRUE`. Se alguma posição tiver valor igual a 3, a variável `three` recebe `TRUE`. Se alguma posição tiver valor igual a 2, a variável `pairs` é incrementada em 1 unidade.

#### Impressão de resultados

Em seguida há um longo bloco if que testa para cada possibilidade de pontuação e retorna o valor em acordo com o resultado.

O valor do resultado é armazendo na variável `winnings` em `main()` que é usada para o cálculo do saldo após o resultado.

Em seguida o usuário recebe seu resultado e é perguntado se deseja jogar novamente.
