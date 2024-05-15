//faca um programa em c que calcule o fatorial de um numero inteiro. n! = n x n-1 x n-2 x n-3 x ... x 1
#include <stdio.h>

int main(){

  int numero;

  printf("Entre com um numero inteiro: ");
  int deu_certo = scanf("%i", &numero); 

  if(deu_certo){
    long int fatorial = 1;
    for(int i = numero; i > 1; i--) {
      fatorial *= i;
    }
    printf("O valor fatorial é: %li\n", fatorial);
  } else {
    printf("Numero invalido!\n");
  }

  return 0;
}