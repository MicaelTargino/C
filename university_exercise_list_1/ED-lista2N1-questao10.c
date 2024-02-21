/*
** Função :  receba três números inteiros como entrada e imprima, como
saída, o maior número recebido


** Autor : Micael Targino
** Data : 02/10/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {

    int num1, num2, num3;

    printf("Insira o primeiro número: ");
    scanf("%i", &num1);

    printf("\nInsira o segundo número: ");
    scanf("%i", &num2);

    printf("\nInsira o terceiro número: ");
    scanf("%i", &num3);

    if (num1 > num2) {
      if (num1 > num3) {
        printf("%i%s", num1, " é o maior número");
      } else {
        printf("%i%s", num3, " é o maior número");
        } 
    } else if (num2 > num1) {
      if (num2 > num3) {
        printf("%i%s", num2, " é o maior número");
        
      } else {
        printf("%i%s", num3, " é o maior número");
      }
    } else {
      if (num1 > num3) {
        printf("%i%s", num1, " é o maior número");
      } else {
        printf("%i%s", num3, " é o maior número");
      }
    }
  
    return 0;
}