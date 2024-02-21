#include <stdio.h>

int main() {
    float grades[3] = { 0, 0, 0 };
    float sum = 0;
    float mean;
    float controller;
    int i,j;

    for (i=0; i < 3; i++) {
        printf("Insert a grade: ");
        scanf("%f", &controller);
        grades[i] = controller;
    }

    for (j = 0; j < 3; j++) {
        sum += grades[j];
    }

    printf("Sum of grades: %.2f\n", sum);

    mean = sum / 3;

    printf("Mean of grades: %.2f", mean);

    return 0;
}