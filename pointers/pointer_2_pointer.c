#include <stdio.h>

int main() {
    int num;
    int newNum;

    printf("Enter a value: ");
    scanf("%d", &num);

    int *numPtr = &num;

    int *numPtr2 = numPtr;

    printf("Enter a new value: ");
    scanf("%d", &newNum);

    *numPtr2 = newNum;

    printf("New value: %d", num);

    return 0;
}