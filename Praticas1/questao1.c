//Faça um programa em C que calcule a média final a partir da fórmula (0,4 x A1) + (0,6 x A2). Considere A1 e A2 números reais entre 0 a 10.

#include <stdio.h>

int main(){
 printf("entre com a nota A1: ");
  float nota1;
   int deu_certo1 = scanf("%f", &nota1);
  
  printf("entre com a nota A2: " );
  float nota2;
   int deu_certo2 = scanf("%f", &nota2);
  
  float media = (0.4 * nota1) + (0.6 * nota2);

  printf( "A media final é: %f\n", media);
  
  
return 0;
  }

