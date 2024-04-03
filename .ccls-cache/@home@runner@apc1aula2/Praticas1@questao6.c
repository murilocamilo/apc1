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

  float delta = pow(numeroB, 2) - 4 * numeroA * numeroC;
  printf("O delta é: %f\n", delta);

  float raiz_quadrada_delta = sqrt(delta);
  printf("A raiz quadrada de delta é: %f\n", raiz_quadrada_delta);
  
  float Bhaskara1 = (-numeroB + raiz_quadrada_delta) / (numeroA * 2) ;
  printf("A Bhaskara1 é: %f\n", Bhaskara1);

  float Bhaskara2 = (-numeroB - raiz_quadrada_delta) / (numeroA * 2);
  printf("A Bhaskara2 é: %f\n", Bhaskara2);
  
  return 0;
}