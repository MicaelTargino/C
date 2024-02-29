// Write a program to declare an integer and a pointer to an integer. Assign the address of the integer to the pointer and change the value of the integer using the pointer.

#include <stdio.h>

int main() {
    int num = 0;
    int* numptr;

    numptr = &num;

    printf("Valor do ponteiro %d\n", *numptr);

    printf("Digite o novo número: ");
    scanf("%d", numptr);

    printf("Novo valor do ponteiro %d\n", *numptr);


    return 0;
}