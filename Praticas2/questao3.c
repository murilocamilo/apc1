//3. Faça um programa em C que leia uma temperatura em graus Celsius e calcule o valor correspondente em graus Fahrenheit (°F = 9/5°C + 32).

#include <stdio.h>

int main() {

  float celcius;
  float fahrenheit;

  printf("Entre com a temperatura em Celcius: ");
  int deu_certo = scanf("%f", &celcius);
  fahrenheit = (celcius * 9/5 + 32);
  
  printf("A temperatura em Fahrenheit é: %.2f\n", fahrenheit);
  
  return 0;
}