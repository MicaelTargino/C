/*
** Função : Dados três valores A , B e C , em que A e B são números reais e C é um caractere (+ , - , * , / ou ^ ), pede-se para imprimir o resultado da operação de A por B se C for um
símbolo de operador aritmético válido(tratar o símbolo); caso contrário deve ser impressa uma mensagem de operador não definido. Tratar erro de divisão por zero. Mostrar impressões complementares explicando como funciona a calculadora.


** Autor : Micael Targino
** Data : 29/09/2023
** Observações:
*/

#include <stdio.h>
#include <math.h>

int main() {

    float a,b, resultado;
    char c;

    printf("Digite o primeiro número: ");
    scanf("%f", &a);

    printf("\nDigite a operacao que deseja realizar (+, -, *, /, ^): ");
    scanf("%c", &c);

    printf("Digite o segundo número: ");
    scanf("%f", &b);

    if (c == '+') {
      resultado = a + b;
    } else if (c == '-') {
      resultado = c - b;
    } else if (c == '*') {
      resultado = a * b;
    } else if (c == '/') {
      resultado = a / b;
    } else if (c == '^') {
      resultado = pow(a, b);
    } else {
      printf("Operador aritmetico nao definido");
    }

    printf("%f", resultado);

    return 0;
}