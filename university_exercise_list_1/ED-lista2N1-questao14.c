/*
** Função :  calcular s e v, dados s0, v0, a e t


** Autor : Micael Targino
** Data : 02/10/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {

    float s,v,t,a,s0, v0;

    printf("Digite o valor de s0: ");
    scanf("%f", &s0);
  
    printf("Digite o valor de v0: ");
    scanf("%f", &v0);

    printf("Digite o valorde a: ");
    scanf("%f", &a);

    printf("Digite o valorde t: ");
    scanf("%f", &t);

    s = s0 + (v0 * t) + ((a * pow(t,2))/2);

    v = v0 + (a * t);

    printf("%s%.1f" ,"O valor de s é: ", s);
    printf("%s%.1f" ,"O valor de v é: ", v);

    
    
  
    return 0;
}