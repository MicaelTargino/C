#include <stdio.h>

int main() {

    int codigo;
    float celsius, farenheit;

    printf("Se voce quer converter de celsius para farenheit, digite 1. Se quer converter de farenheit para celsius, digite 2: ");
    scanf("%i", &codigo);

    if (codigo == 1) {
      // converter de celsius para farenheit
      printf("Digite o valor em celsius: ");
      scanf("%f", &celsius);

      farenheit = 1.8 * celsius + 32;

      printf("%.1f%s", farenheit, " F");
      
    } else if (codigo == 2) {
      // converter de farenheit para celsius
      printf("Digite o valor em farenheit: ");
      scanf("%f", &farenheit);

      celsius = (farenheit - 32) / 1.8;
      printf("%.1f%s", celsius, " C");
      
      
    } else {
      printf("Codigo invalido.");
    }
    
    return 0;
}
