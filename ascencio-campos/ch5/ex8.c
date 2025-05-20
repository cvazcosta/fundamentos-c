#include <stdio.h>

int main () {
  int idade, q1, q2, q3, q4, soma;
  float altura, peso, media, porc;
  char cor_olhos, cor_cabelos;

  q1 = q2 = q3 = q4 = soma = 0;

  for (int i = 1; i <= 6; i++)
  {
    printf("\nDados da %dª pessoa\n", i);
    printf("Informe a idade: ");
    scanf(" %d", &idade);

    printf("Informe o peso: ");
    scanf(" %f", &peso);

    printf("Informe a altura: ");
    scanf(" %f", &altura);

    printf("\nCor dos olhos\n");
    printf("A - Azul\n");
    printf("C - Castanho\n");
    printf("P - Preto\n");
    printf("V - Verde\n");
    printf("Informe a cor: ");
    scanf(" %c", &cor_olhos);

    printf("\nCor dos cabelos\n");
    printf("C - Castanho\n");
    printf("L - Loiro\n");
    printf("P - Preto\n");
    printf("R - Ruivo\n");
    printf("Informe a cor: ");
    scanf(" %c", &cor_cabelos);

    // Contando a qtd de pessoas acima de 50 anos e abaixo de 60kg
    if (idade > 50 && peso < 60)
    {
      q1++;
    }

    // Contando a qtd de pessoas acima de 1,5m e somando suas idades
    if (altura > 1.5)
    {
      soma += idade;
      q2++;
    }

    // Contando a qtd de pessoas com olhos azuis
    if (cor_olhos == 'A' || cor_olhos == 'a')
    {
      q3++;
    }

    // Contando a qtd de pessoas ruivas sem olhos azuis
    if (cor_cabelos == 'R' || cor_cabelos == 'r')
    {
      if (cor_olhos != 'A' || cor_olhos != 'a')
      {
        q4++;
      }
    }
  }

  printf("\n### Resultados ###");
  // Imprimindo qtd de pessoas acima de 50 anos e abaixo de 60kg
  printf("\n1. Pessoas acima de 50 anos e abaixo de 60kg: %d\n", q1);

  // Calculando e imprimindo a média de idade das pessoas abaixo de 1,5m
  media = soma / q2;
  printf("2. Média de idade das pessoas abaixo de 1,50m: %.1f\n", media);

  // Calculando e imprimindo percentagem de pessoas com olhos azuis dentre todas
  porc = (float) ((q3 / 6.0) * 100);
  printf("3. Porcentagem de pessoas com olhos azuis: %.1f%%\n", porc);

  // Imprimindo qtd de pessoas ruivas sem olhos azuis
  printf("4. Pessoas ruivas sem olhos azuis: %d\n", q4);

  return 0;
  
}