#include <stdio.h>

// summing the Ith position of the array to the pointer variable (that points to the first item of the array) and setting its value;
// ex using i = 3: 
// address 1000 + 3 -> 1000 + 3 * sizeof(float) = address 1012 -> *(address 1012) = newItem;

int main() {
    float grades[3] = {0, 0, 0};
    float *ptr = &grades;

    for(int i =0; i < (sizeof(grades) / sizeof(float)); i++) {
        float newItem = 0;
        printf("Type your %d grade: ", i+1);
        scanf("%f", &newItem);

        *(ptr + i) = newItem;
    }

    for(int j =0; j < (sizeof(grades) / sizeof(float)); j++) {
        printf("%.2f\n", *(ptr + j));
    }

    return 0;
}
