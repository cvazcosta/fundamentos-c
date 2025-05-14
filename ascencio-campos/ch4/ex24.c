#include <stdio.h>

int main () {
  float preco, aumento, imposto, n_preco;
  int cat;
  char sit;

  printf("Informe o preço: ");
  scanf(" %f", &preco);

  printf("\nEscolha a Categoria\n");
  printf("1- Limpeza\n");
  printf("2- Alimentação\n");
  printf("3- Vestuário\n");
  printf("Informe a categoria desejada: ");
  scanf(" %d", &cat);

  printf("\nInforme a Situação\n");
  printf("R- Precisa de refrigeração\n");
  printf("N- Não precisa\n");
  printf("Informe a situação desejada: ");
  scanf(" %c", &sit);

  // Calculando o valor do aumento
  if (preco <= 25) {
    if (cat == 1)
      aumento = preco * 0.05;
    else if (cat == 2)
      aumento = preco * 0.08;
    else 
      aumento = preco * 0.10;
  } else {
    if (cat == 1)
      aumento = preco * 0.12;
    else if (cat == 2)
      aumento = preco * 0.15;
    else 
      aumento = preco * 0.18;
  }

  // Mostrando o valor do aumento
  printf("Aumento: R$ %.2f\n", aumento);

  // Calculando o valor do imposto
  if (cat == 2 || sit == 'R' || sit == 'r') {
    imposto = preco * 0.05;
  }
  else {
    imposto = preco * 0.08;
  }

  // Mostrando o valor do imposto
  printf("Imposto: R$ %.2f\n", imposto);

  // Calculando e mostrando o novo preço
  n_preco = preco + aumento - imposto;
  printf("Novo Preço: R$ %.2f\n", n_preco);

  // Classificando e mostrando a classificação do produto
  if (n_preco <= 50)
    printf("Barato\n");
  else if (n_preco >= 120)
    printf("Caro\n");
  else 
    printf("Normal\n");      

  return 0;
}