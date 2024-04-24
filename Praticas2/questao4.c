//Faça um programa em C que leia a largura e o comprimento de um terreno em metros e calcule a sua área em hectares (1 hectare = 10.000 m²).

#include <stdio.h> 

int main(){

float largura;
 printf("Entre com a largura do terreno: ");
  int deu_certo = scanf("%f", &largura);
  
 float comprimento;
   printf("Entre com o comprimento do terreno: ");
    deu_certo = scanf("%f", &comprimento);
  
float area = largura * comprimento;
   printf("O valor da area do terreno é: %f\n", area);

  float hectares = area / 10000;
   printf("O valor da area do terreno em hectares é: %f\n", hectares);
    
  return 0;

}