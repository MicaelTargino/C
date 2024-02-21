/*
** Função :  programa que converta as coordenadas polares (raio r e ângulo a) em
coordenadas cartesianas (abscissa x e ordenada y)


** Autor : Micael Targino
** Data : 02/10/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {

    float r, a, x, y;

    printf("Digite o Raio: ");
    scanf("%f", &r);

    printf("Digite o angulo: ");
    scanf("%f", &a);

    x = r * cos(a);
    y = r * sin(a);

    printf("%s%.1f%s%.1f", "X é igual a: ", x, " e Y é igual a: ", y);
  
    return 0;
}