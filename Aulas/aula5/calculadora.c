#include <stdio.h>

//adcionei a biblioteca math.h relizaçao de operaçoes matematicas

#include <math.h>

int main() {

int numero1;
  int numero2;


 printf("entre com o primeiro numero:");
  int deu_certo = scanf("%i", &numero1);

  printf("entre com o segundo numero:");
  deu_certo = scanf("%i", &numero2);

  int soma = numero1 + numero2;
  printf("A soma dos numeros é: %i\n", soma);

  int subtracao = numero1 - numero2;
  printf("A subtracao dos numeros é: %i\n", subtracao);

  int multiplicacao = numero1 * numero2;
  printf("A multiplicaçao dos numeros é: %i\n", multiplicacao);

  float divisao = 1.0f * numero1 / numero2; //conversao implicita
  //float divisao = numero1 / (numero2 * 1.0f);
  
  printf("A divisao dos numeros é: %f\n", divisao);

  int resto = numero1 % numero2;
  printf("O resto da divisao dos numeros é: %i\n", resto);

  //numero1 = numero1 + 1;
  //incremento

  printf("O incremento do primeiro numero é: %i\n", numero1++);
  printf("O incremento do primeiro numero é: %i\n", ++numero1);

  //numero1 = numero1 - 1;
  //decremento

  printf("O decremento do primeiro numero é: %i\n", numero1--);
  printf("O decremento do primeiro numero é: %i\n", --numero1);
  
double raiz_quadrada = sqrt(numero1);
  printf("A raiz quadrada do primeiro numero é: %f\n", raiz_quadrada);

double potencia = pow(numero1, 4); //numero1^4
  printf("O numero elevado a 4 é: %f\n", potencia);

  double logaritmo2 = log2(numero1);
  printf("O logaritmo na base 2 do numero é: %f\n", logaritmo2);

  const double PI = 3.14;
  double seno = sin(numero1 * PI / 180); //angulo em radiano * PI / 180
  printf("O seno do numero é: %f\n", seno);
  
  return 0;
}
