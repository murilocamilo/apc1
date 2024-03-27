//3. Faça um programa em C que calcule o perímetro de uma pizza (P = 2 x PI x r). Considere o raio um número inteiro e a constante PI igual a 3,1416.

#include <stdio.h>

int main(){

  float PI = 3.1416;
  float perimetro;
  float raio;
  printf("Entre com o valor do raio: ");  
  int deu_certo = scanf("%f", &raio);
 
  perimetro = 2 * PI * raio;
  
  printf("O perimetro da pizza é: %.2f\n", perimetro);
  
  return 0;
}