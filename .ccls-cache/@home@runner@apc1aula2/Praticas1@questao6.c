#include<stdio.h>
#include<math.h>

int main(){

  int numeroA;
  printf("entre com o numero A: ");
  int deu_certo = scanf("%i", &numeroA);

  int numeroB;
  printf("entre com o numero B: ");
  deu_certo = scanf("%i", &numeroB);

  int numeroC;
  printf("entre com o numero C: ");
  deu_certo = scanf("%i", &numeroC);

  float delta = pow(numeroB, 2) - 4 * numeroB * numeroC;
  printf("O delta é: %f\n", delta);

  float Bhaskara = (-numeroB + sqrt(delta) /numeroA * 2 );
  printf("A Bhaskara é: %f\n", Bhaskara);

  float Bhaskara2 = (-numeroB - sqrt(delta) / numeroA * 2 );
  printf("A Bhaskara2 é: %f\n", Bhaskara2);
  
  return 0;
}