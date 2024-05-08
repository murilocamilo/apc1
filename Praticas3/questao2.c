//2. Faça um programa em C que calcule o valor do desconto sobre um valor bruto lido com base na escala: até de 100.00 aplica 1%; de 100.01 a 500.00 aplica 5%; acima de 500.00 aplica 10%.

#include <stdio.h>

int main(){
  
  float valor_bruto;
  printf("Entre com o valor bruto: ");
  int deu_certo = scanf("%f", &valor_bruto);
    
  float valor_desconto;
    if(valor_bruto <= 100.0f){
      valor_desconto = valor_bruto * 0.01;
    } else if (valor_bruto <= 500.0f){
      valor_desconto = valor_bruto * 0.05;
    } else {
      valor_desconto = valor_bruto * 0.1;
    }
      printf("O valor do desconto é: %f\n", valor_desconto);
    
  return 0;
    }