#include<stdio.h>

int main(){

int idade_anos;
  printf("entre com a idade em anos: ");
  int deu_certo = scanf("%i", &idade_anos);

  int meses = idade_anos * 12;
  printf("A idade em meses é: %i\n", meses);
  deu_certo = scanf("%i", &meses);
  
  int dias = idade_anos * 365;
  printf("A idade em dias é: %i\n" , dias);
  deu_certo = scanf("%i", &dias);
  
  return 0;
}
