/*
** Função : checar se um ano é bissexto ou não de acordo com as informacoes dadas

** Autor : Micael Targino
** Data : 02/10/2023
** Observações:
*/


#include <stdio.h>

int main() {

    int ano;

    printf("Digite um ano (yyyy): ");
    scanf("%i", &ano);

    if ((ano % 400 == 0) || ((ano % 4 == 0) && (ano % 100 != 0))) {
      printf("Esse ano é bissexto");
    } else {
      printf("Esse ano não é bissexto");
    }
    
    return 0;
}
