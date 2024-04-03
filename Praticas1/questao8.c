#include<stdio.h>

int main(){
  
  int segundo;
  printf("entre com o segundo: ");
  int deu_certo = scanf("%i", &segundo);

  int horas = segundo / 3600;
  printf("A hora é: %i\n", horas);
  
  int minuto = segundo / 60;
  printf("O minuto é: %i\n", minuto);

  int segundos = segundo % 60;
  printf("O segundo é: %i\n", segundos);
  
  
  
  return 0;
}
