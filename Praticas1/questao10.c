//10. Faça um programa em C que calcule a decomposição de um número inteiro qualquer em unidade, dezena, centena e milhar (ex.: 5637 é decomposto em 7 unidades, 3 dezenas, 6 centenas e 5 milhares).

#include <stdio.h>

int main(){

  int numero;
   printf("Entre com um número inteiro: ");
    int deu_certo = scanf("%i", &numero);

  int unidade = numero % 10;
   printf("Unidade: %i\n", unidade);
  
  int dezena = (numero / 10) % 10;
   printf("Dezena: %i\n", dezena);

  int centena = (numero / 100) % 10;
   printf("Centena: %i\n", centena);

  int milhar = (numero / 1000) % 10;
   printf("Milhar: %i\n", milhar);
  
  return 0;
}