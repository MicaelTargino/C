/*
** Função :  Ler dois números inteiros e calcular quantos % maior um número é em relação a outro (ou
menor, se for o caso).


** Autor : Micael Targino
** Data : 02/10/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {
  
    float num1, num2;
    float relacao;

    printf("Insira o primeiro número: ");
    scanf("%f", &num1);

    printf("\nInsira o segundo número: ");
    scanf("%f", &num2);

    if (num1 != num2) {
      relacao = (num1/num2) * 100;
    } else {
      relacao = 100;
    }


    printf("%.0f%s%.1f%s%.0f" ,num1 , "representa ", relacao, "% de ", num2);
    
  
    return 0;
}