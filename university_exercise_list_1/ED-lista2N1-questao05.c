/*
** Função : dados 3 valores, que representam os lados de um triangulo, verifique se eles podem formar um triangulo e que tipo de triangulo formam

** Autor : Micael Targino
** Data : 29/09/2023
** Observações:
*/

#include <stdio.h>

int main() {
    int lado1, lado2, lado3;

    printf("Informe os três lados do triângulo:\n");
    scanf("%d %d %d", &lado1, &lado2, &lado3);

    if ((lado1 + lado2 > lado3) && (lado1 + lado3 > lado2) && (lado2 + lado3 > lado1)) {
        if (lado1 == lado2 && lado2 == lado3) {
            printf("É um triângulo equilátero.\n");
        } else if (lado1 == lado2 || lado1 == lado3 || lado2 == lado3) {
            printf("É um triângulo isóscele.\n");
        } else {
            printf("É um triângulo escaleno.\n");
        }
    } else {
        printf("Esses valores não formam um triângulo.\n");
    }

    return 0;
}
