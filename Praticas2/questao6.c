//Faça um programa em C que leia o valor de compra, o ano de fabricação e o ano de depreciação e calcule o valor depreciado de um veículo (depreciação = (ano de depreciação - ano de fabricação) x 0,01 x valor de compra).

#include <stdio.h>

int main() {

  int valor_compra;
    printf("Entre com o valor de compra: ");
     int deu_certo = scanf("%i", &valor_compra);
  
  int ano_fabricacao;
    printf("Entre com o ano de fabricação: ");
     deu_certo = scanf("%i", &ano_fabricacao);
  
  int ano_depreciacao;
   printf("Entre com o ano de depreciação: ");
    deu_certo = scanf("%i", &ano_depreciacao);
  
  int valor_depreciado = (ano_depreciacao - ano_fabricacao) * 0.01 * valor_compra;
    printf("O valor depreciado é: %i\n", valor_depreciado);
  
return 0;
}