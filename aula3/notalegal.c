#include <stdio.h>

int main() {
 printf("\x1b[32m----------------------------------\n");
 printf("            N O T A L E G A L     \n");
 printf("----------------------------------\x1b[0m\n");
 printf("\x1b[1mITEM                    QTD  VALOR\n");
 printf("%-14s %12i %6.2f\n", "banana nanica", 2, 20.0);
 printf("%-14s %12i %6.2f\n", "uva globo", 1, 15.00);
 printf("%-14s %12i %6.2f\n", "laranja lima", 1, 18.00);

  //printf("banana nanica           2    20,00\n");
  // printf("uva globo               1    15,00\n");
  //printf("laranja lima            1    18,00\n");
 printf("\x1b[32m----------------------------------\n");
 printf("TOTAL                   4    53,00\x1b[0m\n");
  
  
  return 0;
}