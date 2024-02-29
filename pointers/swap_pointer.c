#include <stdio.h>

void swap(int* x, int* y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int num1, num2;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);

    printf("Antes da troca: num1 = %d, num2 = %d\n", num1, num2);

    swap(&num1, &num2);

    printf("Apos a troca: num1 = %d, num2 = %d\n", num1, num2);
    return 0;
}