//7. Faça um programa em C que calcule a altura alcançada por um avião após ter percorrido uma certa distância (seno(ângulo) = altura/distância). Considere o ângulo de inclinação do avião menor ou igual a 45°.

#include <stdio.h>
#include <math.h>

int main(){
  
  float distancia;
   printf("Entre com a distancia percorrida: ");
    int deu_certo = scanf("%f", &distancia);

  float angulo;
   printf("Entre com o angulo de inclinação: ");
    deu_certo = scanf("%f", &angulo);

   float altura = sin(angulo) * distancia;
   printf("A altura alcançada é: %.2f\n", altura);
  
  return 0;

}
