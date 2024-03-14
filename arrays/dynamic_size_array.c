#include <stdio.h>

void printArray(int *array) {
    int len = sizeof(array) / sizeof(array[0]);
    for(int j; j < len; j++) {
        printf("%d", array[j]);
    }
}

int calcArrayLen(int *array, int totalSize) {
    int length = 0;

    for(int i = 0; i < totalSize; i++) {
        if (array[i] != -1) {
            length++;
        }
    }
    return length;
}

void appendItem(int *array, int num) {
    printf("Endereco do array: %p\n", &array);

    int totalSize = sizeof(array) / sizeof(array[0]);
    int length = calcArrayLen(array, totalSize);

    if (length == totalSize) {
        printf("Array is full\n");

        // from here to below I dont now where's the problem

        // allocate a new array in the memory with bigger size
        int *new_arr_ptr = (int*) malloc(2 * totalSize);

        // copy the elements of the array to the new array and add the new num
        for(int j; j < totalSize; j++) {
            new_arr_ptr[j] = array[j];
        }

        totalSize = 2 * totalSize;
        for(int i; i < totalSize; i++) {
            printf("%d", new_arr_ptr[i]);
        }

        // modify the array pointer to the new array
        array = new_arr_ptr;

        // free the first array pointer
        free(new_arr_ptr);

    } else {
        array[length] = num;
    }

}

int main(){
    int *array_ptr = (int*) malloc(2 * sizeof(int));
    int num;
    int inserting = 1;

    // initialize the array
    for(int j; j < 2; j++) {
        array_ptr[j] = -1;
    }

    while(inserting) {
        printf("Type an Integer to fill the array (-1 to exit): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        appendItem(array_ptr,num);
    }

    printArray(array_ptr);

    return 0;
}
