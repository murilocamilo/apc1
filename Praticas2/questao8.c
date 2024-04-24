//Faça um programa em C que leia as coordenadas de dois pontos (x1, y1) e (x2, y2) e calcule a distância entre eles (d = raiz_quadrada((x2-x1)² + (y2-y1)²)).

#include <stdio.h>
#include <math.h>

 int main (){
   
   float x1;
    printf("Entre com o valor de x1: ");
     int deu_certo = scanf("%f", &x1);
   
   float x2;
    printf("Entre com o valor de x2: ");
     deu_certo = scanf("%f", &x2);
   
   float y1;
    printf("Entre com o valor de y1: ");
     deu_certo = scanf("%f", &y1);
   
   float y2;  
    printf("Entre com o valor de y2: ");    
     deu_certo = scanf("%f", &y2); 
   
   float distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));  
    printf("A distancia entre os pontos é: %f\n", distancia);
   
   return 0;
}