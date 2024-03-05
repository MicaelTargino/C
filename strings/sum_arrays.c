// Implement a function that takes two pointers to integer arrays and their sizes as parameters, and prints the sum of each element in the arrays 
#include <stdio.h>

void sum_arrays(int *arr1, int size1, int *arr2, int size2) {
    if (size1 != size2) {
        return;
    }

    for(int i=0; i < size1; i++) {
        int result = *(arr1++) + *(arr2++);
        printf("%d", result);
    }
}

int main() {
    int arr1[] = {1,2,3,4,5};
    int arr2[] = {5,4,3,2,1};
    int size1 = sizeof(arr1)/sizeof(arr1[0]);
    int size2 = sizeof(arr2)/sizeof(arr2[0]);

    sum_arrays(arr1,size1, arr2, size2);

    return 0;
}