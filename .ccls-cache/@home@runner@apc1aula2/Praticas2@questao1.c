//1. Faça um programa em C que leia três números reais e imprima a média aritmética desses números

#include <stdio.h>

int main() {

  float numero1; 
   printf("Entre com o primeiro numero: ");
    int deu_certo = scanf("%f", &numero1);
  
  float numero2;
   printf("Entre com o segundo numero: ");
    deu_certo = scanf("%f", &numero2);
  
  float numero3;
   printf("Entre com o terceiro numero: ");
     deu_certo = scanf("%f", &numero3);
  
   float media_aritmetica = (numero1 + numero2 + numero3) / 3;
    printf("O valor da media aritmetica é: %f\n", media_aritmetica);
 
  return 0;
} 


