/*
** Função : caclular o custo de uma granja que cria frangos


** Autor : Micael Targino
** Data : 02/10/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {

   int qtde;
   float custo_final;
   int custo_anel_chip = 3;
   float custo_anel_alimento = 2.5; 
   float custo_por_frango;

   custo_por_frango = 3 + (2 * custo_anel_alimento);

   printf("Digite a quantidade de frangos: ");
   scanf("%i", &qtde);

   if (qtde <= 0) {
     printf("\nInsira um número válido.");
   } else {
     custo_final = custo_por_frango * qtde;
     printf("%s%f%s","\nO custo final é de: ", custo_final, " reais");
   }

    return 0;
}