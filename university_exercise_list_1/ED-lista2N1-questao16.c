#include <stdio.h>

int main() {
    char escolha_classe;
    char escolha_conversao;
    float valor;
    float resultado;

    printf("Escolha a classe de unidade:\n");
    printf("1. Peso\n");
    printf("2. Volume\n");
    printf("3. Comprimento\n");
    printf("Digite o número da classe de unidade: ");
    scanf(" %c", &escolha_classe);

    if (escolha_classe == '1') {
        printf("Escolha a conversão de peso:\n");
        printf("1. Libra para Quilograma\n");
        printf("2. Quilograma para Libra\n");
        printf("3. Onça para Grama\n");
        printf("4. Grama para Onça\n");
        printf("Digite o número da conversão: ");
        scanf(" %c", &escolha_conversao);
        printf("Digite o valor a ser convertido: ");
        scanf("%f", &valor);

            if (escolha_conversao == '1') {
                resultado = valor * 0.453592;
                printf("%.2f Libras é igual a %.2f Quilogramas.\n", valor, resultado);
            } else if (escolha_conversao == '2') {
                resultado = valor * 2.20462;
                printf("%.2f Quilogramas é igual a %.2f Libras.\n", valor, resultado);
            } else if (escolha_conversao == '3') {
                resultado = valor * 28.3495;
                printf("%.2f Onças é igual a %.2f Gramas.\n", valor, resultado);
            } else if (escolha_conversao == '4') {
                resultado = valor * 0.035274;
                printf("%.2f Gramas é igual a %.2f Onças.\n", valor, resultado);
            } else {
                printf("Opção inválida!\n");
            }
        } else if (escolha_classe == '2') {
            printf("Escolha a conversão de volume:\n");
            printf("1. Galão para Litro\n");
            printf("2. Litro para Galão\n");
            printf("3. Onça para Mililitro\n");
            printf("4. Mililitro para Onça\n");
            printf("Digite o número da conversão: ");
            scanf(" %c", &escolha_conversao);
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            if (escolha_conversao == '1') {
                resultado = valor * 3.78541;
                printf("%.2f Galões é igual a %.2f Litros.\n", valor, resultado);
            } else if (escolha_conversao == '2') {
                resultado = valor / 3.78541;
                printf("%.2f Litros é igual a %.2f Galões.\n", valor, resultado);
            } else if (escolha_conversao == '3') {
                resultado = valor * 29.5735;
                printf("%.2f Onças é igual a %.2f Mililitros.\n", valor, resultado);
            } else if (escolha_conversao == '4') {
                resultado = valor / 29.5735;
                printf("%.2f Mililitros é igual a %.2f Onças.\n", valor, resultado);
            } else {
                printf("Opção inválida!\n");
            }
        } else if (escolha_classe == '3') {
            printf("Escolha a conversão de comprimento:\n");
            printf("1. Milha para Quilômetro\n");
            printf("2. Quilômetro para Milha\n");
            printf("3. Jardas para Metro\n");
            printf("4. Metro para Jarda\n");
            printf("Digite o número da conversão: ");
            scanf(" %c", &escolha_conversao);
            printf("Digite o valor a ser convertido: ");
            scanf("%f", &valor);

            if (escolha_conversao == '1') {
                resultado = valor * 1.60934;
                printf("%.2f Milhas é igual a %.2f Quilômetros.\n", valor, resultado);
            } else if (escolha_conversao == '2') {
                resultado = valor / 1.60934;
                printf("%.2f Quilômetros é igual a %.2f Milhas.\n", valor, resultado);
            } else if (escolha_conversao == '3') {
                resultado = valor * 0.9144;
                printf("%.2f Jardas é igual a %.2f Metros.\n", valor, resultado);
            } else if (escolha_conversao == '4') {
                resultado = valor / 0.9144;
                printf("%.2f Metros é igual a %.2f Jardas.\n", valor, resultado);
            } else {
                printf("Opção inválida!\n");
            }
        } else {
            printf("Opção inválida!\n");
        }

    return 0;
}
