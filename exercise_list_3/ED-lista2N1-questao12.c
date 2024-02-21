/*
** Função :  calcule se um aluno foi aprovado ou nao, com base nos criterios apresentados


** Autor : Micael Targino
** Data : 02/10/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {

  float p1, p2, p3, media;

  printf("Digite a nota da primeira prova: ");
  scanf("%f", &p1);

  printf("\nDigite a nota da segunda prova: ");
  scanf("%f", &p2);

  media = (p1 + p2) / 2;

  if (media >= 5 && p1 >=3 && p2 >= 3) {
    printf("%.1f%s", media, " aprovado");
  } else {
    printf("\nDigite a nota da terceira prova: ");
    scanf("%f", &p3);

    if (p1 >= p2) {
      media = (p1 + p3) / 2;
    } else {
      media = (p2 + p3) / 2;
    }

    if (media >= 5) {
    printf("%.1f%s", media, " aprovado");
    } else {
    printf("%.1f%s", media, " reprovado");
    }
    
  }
    
  
    return 0;
}