//5. Faça um programa em C que converta um valor qualquer em Gigabytes para um valor em bytes (1GB = 1024³Bytes).

#include <stdio.h>

int main(){
  int gigabytes;
   printf("Entre com o valor em gigabytes: ");
  
  int deu_certo = scanf("%i", &gigabytes);
  
  int bytes = gigabytes * 1024 * 1024 * 1024;
   printf("O valor em bytes é: %i\n", bytes);
  
  return 0;
}