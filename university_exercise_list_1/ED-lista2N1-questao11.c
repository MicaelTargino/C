/*
** Função :  receba três números inteiros como entrada e imprima, como
saída, eles em ordem crescente


** Autor : Micael Targino
** Data : 02/10/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {

    int num1, num2, num3;
    int menor, meio, maior;

    printf("Insira o primeiro número: ");
    scanf("%i", &num1);

    printf("\nInsira o segundo número: ");
    scanf("%i", &num2);

    printf("\nInsira o terceiro número: ");
    scanf("%i", &num3);

    if (num1 > num2) {
      if (num1 > num3) {
        maior = num1;
        if (num2 > num3) {
          meio = num2;
          menor = num3;
        } else if (num3 > num2) {
          meio = num3;
          menor = num2;
        } else {
          meio = num2;
          menor = num2;
        }
      } else if (num3 > num1) {
          maior = num3;
          meio = num1;
          menor = num2;
        }  else {
          menor = num2;
          meio = num3;
          maior = num3;
        }
    } else if (num2 > num1) {
      if (num2 > num3) {
        maior = num2;
        if (num1 > num3) {
          meio = num1;
          menor = num3;
        } else if (num3 > num1) {
          meio = num3;
          menor = num1;
        } else {
          meio = num3;
          menor = num1;
        }
      } else if (num3 > num2 ){
        maior = num3;
        meio = num2;
        menor = num1;
      }
    } else {
      if (num1 > num3) {
          meio = num1;
          maior = num1;
          menor = num3;
      } else if (num3 > num1) {
          maior = num3;
          meio = num1;
          menor = num1;
      } else {
        maior = num1;
        meio = num1;
        menor = num1;
      }
    }

    printf( "%s%i%i%i" ,"A sequencia crescente dos números é de: ", menor, meio, maior);
  
    return 0;
}