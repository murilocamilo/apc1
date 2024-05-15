#include <stdio.h>

int main (){
  int numero = 1;
  int maior = 0;
  int menor = 0;
  
  while(numero != 0){
    printf("Entre com um numero inteiro, 0 para terminar: ");
    int deu_certo = scanf("%i", &numero);

    if (deu_certo){
      if (numero > maior ){
        maior = numero;
      }
      if (numero < menor){
        menor = numero;
      }
    } else {
      getchar();
      printf("Numero invalido!\n");
    }
  }
  
  printf(" O maior numero foi %i e o menor foi %i\n", maior, menor);
  
  return 0;
}