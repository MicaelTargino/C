/*
** Função : Elabore um programa que, dada a idade de um nadador, classifique-o em uma faixa etaria
** Autor : Micael Targino
** Data : 29/09/2023
** Observações:
*/

#include <stdio.h>

int main() {
    int idade;

    // Solicita ao usuário que insira a idade do nadador
    printf("Informe a idade do nadador: ");
    scanf("%d", &idade);

    // Verifica em qual categoria o nadador se enquadra
    if (idade >= 4 && idade <= 7) {
        printf("Categoria: Infantil A\n");
    } else if (idade >= 8 && idade <= 9) {
        printf("Categoria: Infantil B\n");
    } else if (idade >= 10 && idade <= 12) {
        printf("Categoria: Juvenil A\n");
    } else if (idade >= 13 && idade <= 17) {
        printf("Categoria: Juvenil B\n");
    } else if (idade >= 18 && idade <= 25) {
        printf("Categoria: Sênior\n");
    } else {
        printf("Idade fora da faixa etária\n");
    }

    return 0;
}
