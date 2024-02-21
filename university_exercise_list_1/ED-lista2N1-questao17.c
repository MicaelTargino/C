/*
** Função : checar se o número é par ou ímpar

** Autor : Micael Targino
** Data : 02/10/2023
** Observações:
*/

#include <stdio.h>

int main() {

    int num;

    printf("Digite um número inteiro: ");
    scanf("%i", &num);

    if (num % 2 == 0) {
      printf("O número é par");
    } else {
      printf("O número é ímpar");
    }
    
    return 0;
}
