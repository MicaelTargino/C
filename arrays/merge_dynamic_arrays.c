#include <stdio.h>

void generateArray(int* arr, int length, int weight) {
    for (int i = 1; i <= length; i++) {
        *arr = i * weight;
        *arr++;
    }
}

void mergeArray(int* arr1, int* arr2, int* mergedArray, int length) {
    for (int i = 0; i < length; i++) {
        *mergedArray = *arr1 + *arr2;
        *arr1++;
        *arr2++;
        *mergedArray++;
    }
}

int main() {
    int* arr1 = (int*) malloc(10 * sizeof(int));
    int* arr2 = (int*) malloc(10 * sizeof(int));
    int* mergedArray = (int*) malloc(8 * sizeof(int));

    generateArray(arr1, 10, 1);
    generateArray(arr2, 10, 2);

    printf("First array:");
    for (int i = 0; i < 10; i ++) {
        printf("%d ", arr1[i]);
    }

    printf("\n");

    printf("Second array:");
    for (int i = 0; i < 10; i ++) {
        printf("%d ", arr2[i]);
    }

    mergeArray(arr1, arr2, mergedArray, 10);

    printf("\n");

    printf("Merged array:");
    for (int i = 0; i < 10; i ++) {
        printf("%d ", mergedArray[i]);
    }

    return 0;
}
