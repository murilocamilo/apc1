//2. Faça um programa em C que leia dois números inteiros e imprima o quociente e o resto da divisão entre eles.

#include <stdio.h>

int main() {

  int numero1, numero2;
    printf("Entre com o primeiro numero: ");
     int deu_certo = scanf("%i", &numero1);
    
    printf("Entre com o segundo numero: ");
      deu_certo = scanf("%i", &numero2);
  
  int quociente = 1.0f * numero1 / numero2;
   printf("O quociente da divisao dos numeros é: %i\n", quociente);
  
  int resto = numero1 % numero2;
    printf("O resto da divisao dos numeros é: %i\n", resto);
    
  
  return 0;
}