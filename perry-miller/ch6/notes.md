# Strings

- No final de cada string, C sempre adiciona o '\0' (null zero, binary zero, string terminator). É assim que ele identifica o final da string.
  - Dessa forma, a string crazy ocuparia 6 bytes (crazy\0).
  - Mesmo assim, ao medir o tamanho de uma string o null zero não fará parte do cálculo.
- Um detalhe importante sobre strings em C é que não é possível reatribuir um valor como nos outros tipos de dados. `month = "April";` por exemplo não seria permitido pelo compilador.
  - Para mudar o valor de uma string só é possível fazendo caracter por caracter ou por meio da função `strcpy(month, "April");` usando a biblioteca `<string.h>`.