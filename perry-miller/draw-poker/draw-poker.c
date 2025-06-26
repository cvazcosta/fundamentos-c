/*
  Este é um programa que simula um jogo de poker. Os usuários podem jogar o
  quanto quiserem, apostando entre 1 e 5. A cada rodada, eles recebem 5 cartas
  e podem escolher quais cartas manter e quais cartas substituir.

  A nova mão é então avaliada e a recompensa é baseada no valor da mão.

  O saldo do usuário é mostrado juntamente com a opção de continuar ou não.
*/

// Header files

#include <stdio.h>
#include <time.h>
#include <ctype.h>
#include <stdlib.h>

// Duas constantes são definidas para determinar se as mãos são flushs ou 
// straights

#define FALSE 0
#define TRUE 1

// Protótipos das funções usadas

void printGreeting();
int getBet();
char getSuit(int suit);
char getRank(int rank);
void getFirstHand(int cardRank[], int cardSuit[]);
void getFinalHand(int cardRank[], int cardSuit[], int finalRank[], 
  int finalSuit[], int ranksinHand[], int suitsinHand[]);
int analyzeHand(int ranksinHand[], int suitsinHand[]);

int main()
{
  int bet;
  int bank = 100;
  int i;
  int cardRank[5]; // Cada carta tem 13 valores possíveis (ás ao rei)
  int cardSuit[5]; // Cada carta tem 4 naipes possíveis
  int finalRank[5];
  int finalSuit[5];
  int ranksinHand[13]; // Usado para avaliar a mão final
  int suitsinHand[4]; // Usado para avaliar a mão final
  int winnings;
  time_t t;
  char suit, rank, stillPlay;

  // A função abaixo é chamada fora do loop do...while porque a saudação só
  // precisa ser mostrada na inicialização

  printGreeting();

  // Loop que executa o programa enquanto o usuário desejar

  do
  {
    bet = getBet();

    srand(time(&t));

    getFirstHand(cardRank, cardSuit);
    printf("Your five cards: \n");
    for (i = 0; i < 5; i++)
    {
      suit = getSuit(cardSuit[i]);
      rank = getRank(cardRank[i]);
      printf("Card #%d: %c%c\n", i+1, rank, suit);
    }

    // Os arrays abaixo são usados para contabilizar quantas cartas o jogador
    // possui de cada ranking e de cada naipe

    for (i = 0; i < 4; i++)
    {
      suitsinHand[i] = 0;
    }

    for (i = 0; i < 13; i++)
    {
      ranksinHand[i] = 0;
    }

    getFinalHand(cardRank, cardSuit, finalRank, finalSuit, ranksinHand, 
      suitsinHand);
    
    printf("\nYour five final cards: \n");
    for (i = 0; i < 5; i++)
    {
      suit = getSuit(finalSuit[i]);
      rank = getRank(finalRank[i]);
      printf("Card #%d: %c%c\n", (i+1), rank, suit);
    }
    
    winnings = analyzeHand(ranksinHand, suitsinHand);

    printf("You won %d!\n", bet * winnings);
    bank = bank - bet + (bet * winnings);
    printf("\nYour bank is now %d.\n", bank);
    printf("\nDo you want to play again? ");
    scanf(" %c", &stillPlay);
    
  } while (toupper(stillPlay) == 'Y');

  return 0;
  
}
/******************************************************************************/


// Função que imprime uma saudação e as regras do jogo

void printGreeting()
{
  printf("***********************************************\n");
  printf("\n\n\tWelcome to the Absolute Beginner's Casino\n\n");
  printf("\tHome of Video Draw Poker\n\n");
  printf("***********************************************\n");

  printf("Here are the rules:\n");
  printf("You start with 100 credits, and you make a bet from ");
  printf("1 to 5 credits\n");
  printf("You are dealt 5 cards, and you then choose which ");
  printf("cards to keep or discard\n");
  printf("You want to make the best possible hand\n");
  printf("\nHere is the table for winnings (assuming a bet of 1 credit):");
  printf("\nPair\t\t\t\t1 credit");
  printf("\nTwo Pairs\t\t\t\t2 credits");
  printf("\nThree of a kind\t\t\t3 credits");
  printf("\nStraight\t\t\t\t4 credits");
  printf("\nFlush\t\t\t\t5 credits");
  printf("\nFull House\t\t\t8 credits");
  printf("\nFour of a kind\t\t\t10 credits");
  printf("\nStraight Flush\t\t\t20 credits");
  printf("\n\nHave fun!!\n\n");
}
/******************************************************************************/

// Função que retorna a primeira mão de cartas ao jogador

void getFirstHand(int cardRank[], int cardSuit[])
{
  int i, j;
  int cardDup;

  for (i = 0; i < 5; i++)
  {
    cardDup = 0;
    do
    {
      // Card rank pode ser (2-10, J, Q, K, A) 13 possíveis valores
      cardRank[i] = (rand() % 13);
      // Card suit pode ser clubs, spades, hearts, diamonds
      cardSuit[i] = (rand() % 4);

      // Loop para verificar se não houve duplicata de cartas
      for (j = 0; j < i; j++)
      {
        if ((cardRank[i] == cardRank[j]) && (cardSuit[i] == cardSuit[j]))
        {
          cardDup = 1;
        }
        
      }
      
    } while (cardDup == 1);
    
  }
  
}
/******************************************************************************/

char getSuit(int suit)
{
  switch (suit)
  {
    case 0:
      return ('c');

    case 1:
      return ('d');

    case 2:
      return ('h');

    case 3:
      return ('s');
  }
}
/******************************************************************************/

char getRank(int rank)
{
  switch (rank)
  {
  case 0:
    return ('A');
  
  case 1:
    return ('2');

  case 2:
    return ('3');

  case 3:
    return ('4');

  case 4:
    return ('5');

  case 5:
    return ('6');

  case 6:
    return ('7');

  case 7:
    return ('8');

  case 8:
    return ('9');

  case 9:
    return ('T');

  case 10:
    return ('J');

  case 11:
    return ('Q');

  case 12:
    return ('K');
  }
}
/******************************************************************************/

// Função para obter a aposta do usuario entre 1 e 5

int getBet()
{
  int bet;

  do // Será executado até o usuário digitar um valor entre 0-5
  {
    printf("How much do you want to bet? (Enter a number ");
    printf("1 to 5, or 0 to quit the game): ");
    scanf(" %d", &bet);

    if ((bet >= 0) && (bet <= 5))
    {
      return (bet);
    } else if (bet == 0)
    {
      exit(1);
    } else
    {
      printf("\n\nPlease enter a bet from 1-5 or 0 to quit the game\n");
    }
    
  } while ((bet < 0) || (bet > 5));
  
}
/******************************************************************************/

// Esta função percorre cada carta da mão inicial e pergunta ao usuário se ele
// deseja mantê-la. Senão, ela é trocada por outra

void getFinalHand(int cardRank[], int cardSuit[], int finalRank[],
  int finalSuit[], int ranksinHand[], int suitsinHand[])
{
  int i, j, cardDup;
  char suit, rank, ans;

  for (i = 0; i < 5; i++)
  {
    suit = getSuit(cardSuit[i]);
    rank = getRank(cardRank[i]);

    printf("Do you want to keep the card #%d: %c%c?", (i+1), rank, suit);
    printf("\nPlease answer (Y/N): ");    
    scanf(" %c", &ans);

    if (toupper(ans) == 'Y')
    {
      finalRank[i] = cardRank[i];
      finalSuit[i] = cardSuit[i];
      ranksinHand[finalRank[i]]++;
      suitsinHand[finalSuit[i]]++;
      continue;
    } else if (toupper(ans) == 'N')
    {
      cardDup = 0;
      do
      {
        cardDup = 0;
        finalRank[i] = (rand() % 13);
        finalSuit[i] = (rand() % 4);

        // Verificação da nova carta com as 5 da primeira mão para evitar 
        // duplicatas
        for (j = 0; j < 5; j++)
        {
          if ((finalRank[i] == cardRank[j]) && (finalSuit[i] == cardSuit[j]))
          {
            cardDup = 1;
          }          
        }

        // Verificação da nova carta contra o deck final de cartas para evitar
        // duplicatas
        for (j = 0; j < i; j++)
        {
          if ((finalRank[i] == finalRank[j]) && (finalSuit[i] == finalSuit[j]))
          {
            cardDup = 1;
          }          
        }
        
      } while (cardDup == 1);
      ranksinHand[finalRank[i]]++;
      suitsinHand[finalSuit[i]]++;
    }    
  }
}

/******************************************************************************/

// Função que analisa a mão final e determina o resultado

int analyzeHand(int ranksinHand[], int suitsinHand[])
{
  int num_consec = 0;
  int i, rank, suit;
  int straight = FALSE;
  int flush = FALSE;
  int four = FALSE;
  int three = FALSE;
  int pairs = 0;

  for (suit = 0; suit < 4; suit++)
  {
    if (suitsinHand[suit] == 5)
    {
      flush = TRUE;
    }    
  }

  rank = 0;
  while (ranksinHand[rank] == 0)
  {
    rank++;
  }

  for (; rank < 13 && ranksinHand[rank]; rank++)
  {
    num_consec++;
  }

  if (num_consec == 5)
  {
    straight = TRUE;
  }
  
  for (rank = 0; rank < 13; rank++)
  {
    if (ranksinHand[rank] == 4)
    {
      four = TRUE;
    }

    if (ranksinHand[rank] == 3 )
    {
      three = TRUE;
    }

    if (ranksinHand[rank] == 2)
    {
      pairs++;
    }
  }

  if (straight && flush)
  {
    printf("Straight flush\n\n");
    return (20);
  } else if (four)
  {
    printf("Four of a kind\n\n");
    return (10);
  } else if (three && pairs == 1)
  {
    printf("Full house\n\n");
    return (8);
  } else if (flush)
  {
    printf("Flush\n\n");
    return (5);
  } else if (straight)
  {
    printf("Straight\n\n");
    return (4);
  } else if (three)
  {
    printf("Three of a kind\n\n");
    return (3);
  } else if (pairs == 2)
  {
    printf("Two pairs\n\n");
    return (2);
  } else if (pairs == 1)
  {
    printf("Pair\n\n");
    return (1);
  } else
  {
    printf("High Card\n\n");
    return (0);
  }
}