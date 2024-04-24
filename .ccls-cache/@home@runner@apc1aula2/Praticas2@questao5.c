//Faça um programa em C que leia o peso e a altura de uma pessoa e calcule o índice de massa corporal (imc = peso / altura²).

#include <stdio.h>
#include <math.h>

int main() {

  float peso;
   printf("Entre com o peso: ");
    int deu_certo = scanf("%f", &peso);
  
  float altura;
   printf("Entre com a altura: "); 
    deu_certo = scanf("%f" , &altura);
  
  double imc = peso / pow(altura, 2);
   printf( "O valor do imc é: %f\n", imc);

  return 0;
}

