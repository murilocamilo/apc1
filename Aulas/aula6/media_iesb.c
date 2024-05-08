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
if(media >= 9.0f && media <= 10.0f){
  printf("A mensao é SS\n");
} else if (media >= 7.0f && media <= 8.9f){
  printf("A mensao é MS\n");
} else if (media >= 5.0f && media <= 6.9f){
  printf("A mensao é MM\n");
} else if (media >= 3.0f && media <= 4.9f){
  printf("A mensao é MI\n");} else if (media >= 0.1f && media <= 2.9f){
  printf("A mensao é II\n");
}else if (media == 0.0f){
  printf("A mensao é SR\n");
}
  
    } else {
      printf("Nota invalida! Informe um valor entre 0.0 e 10.0\n");
    }
   
  } else {
      printf("Nota invalida! Informe um valor entre 0.0 e 10.0\n");
    return 0;
  }
}