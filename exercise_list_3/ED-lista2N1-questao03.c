/*
** Função : calcular o IMC (Índice de Massa Corporal) que leia o peso do usuário em quilogramas e a altura em metros e que depois calcule e apresente o IMC


** Autor : Micael Targino
** Data : 29/09/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {

    float altura, kg, imc;

    printf("Digite sua altura em metros: ");
    scanf("%f", &altura);

    printf("\nDigite seu peso em kg: ");
    scanf("%f", &kg);

    imc = kg / pow(altura, 2);

    printf("%f", imc);

    if (imc < 18.5) {
      printf("Voce esta abaixo do peso");
    } else if (imc >= 18.5 && imc <= 24.9) {
      printf("Vocé esta no peso normal");
    } else if (imc >= 25 && imc <= 29.9) {
      printf("Voce esta em sobrepeso");
    } else if (imc >= 30 && imc <= 34.9) {
      printf("Voce esta com obesidade grau I");
    } else if (imc >= 35 && imc <= 39.9) {
      printf("Voce esta com obesidade grau II");
    } else {
      printf("Voce esta com obesidade grau III");
    }
    
    return 0;
}