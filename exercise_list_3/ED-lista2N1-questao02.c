/*
** Função : Lê os coeficientes a , b e c de uma equação de segundo grau e,
antes de calcular as raízes, calcula o delta . Se este for negativo, informe que a equação
não tem solução real. Se for zero, mostra a única raiz. Se positivo, mostra as duas raízes.

** Autor : Micael Targino
** Data : 29/09/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {

    float a,b,c, delta, x1, x2;

    printf("Digite o coeficiente a: \n");
    scanf("%f", &a);
    printf("Digite o coeficiente b: \n");
    scanf("%f", &b);
    printf("Digite o coeficiente c: \n");
    scanf("%f", &c);

    // calcular delta
    delta = pow(b, 2) - (4 * a * c);
    printf("%f",delta);

    if (delta < 0) {
      printf("A equação não tem solução real");
    } else if (delta > 0) {
      // mostrar as duas raízes
      x1 = (-b + sqrt( delta )) / 2* a;
      x2 = (-b - sqrt( delta )) / 2 * a;
      printf("%s%f", "A primeira raiz é: ", x1);
      printf("%s%f", "\n A segunda raiz é: ", x2);
    } else {
      // mostrar a única raiz
      x1 = -b/ 2* a;
      printf("%s%f", "A raiz da equação é: ", x1);
    }
    return 0;
}