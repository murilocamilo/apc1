#include <stdio.h>

int main() {

  float nota1;
  float nota2;
  printf("Entre com a nota1: ");
  int deu_certo = scanf("%f", &nota1);

  int nota1_eh_valida = nota1 >= 0 && nota1 <= 10;

  if (nota1_eh_valida) {
    printf("Entre com a segunda nota: ");
    deu_certo = scanf("%f", &nota2);

    int nota2_eh_valida = nota2 >= 0 && nota2 <= 10;
    if (nota2_eh_valida) {
      float media = (nota1 + nota2) / 2;
      printf("A média é: %f\n", media);

    } else {
      printf("Nota invalida! Informe um valor entre 0.0 e 10.0\n");
    }
   
  } else {
      printf("Nota invalida! Informe um valor entre 0.0 e 10.0\n");
    return 0;
  }
}