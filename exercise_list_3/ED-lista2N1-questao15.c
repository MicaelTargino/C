/*
** Função : criar um jogo de pedra papel e tesoura entre o usuario e o computador

** Autor : Micael Targino
** Data : 02/10/2023
** Observações:
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int usuario, computador;

    srand(time(NULL));

    printf("Escolha uma opção:\n");
    printf("0 - Pedra\n");
    printf("1 - Papel\n");
    printf("2 - Tesoura\n");
    scanf("%d", &usuario);
    
    computador = rand() % 3;
    
    if (usuario == computador) {
        printf("Empate!\n");
    } else if ((usuario == 0 && computador == 2) || (usuario == 1 && computador == 0) || (usuario == 2 && computador == 1)) {
        printf("Você venceu!\n");
    } else {
        printf("O computador venceu!\n");
    }
    
    return 0;
}
