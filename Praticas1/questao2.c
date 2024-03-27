//2. Faça um programa em C que calcule a área de um triângulo (a = base x altura / 2). Considere base e altura números inteiros maior que 0.

#include <stdio.h>

int main(){

printf("entre com a base: ");
  int base;
 int deu_certo = scanf("%d", &base);
  
  printf("entre com a altura: ");
  int altura;
  deu_certo = scanf("%d", &altura);

  int area = (base * altura /2);

printf("A area do triangulo é: %i\n", area);

  return 0;
}