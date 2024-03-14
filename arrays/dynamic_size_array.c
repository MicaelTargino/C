#include <stdio.h>
#include <stdlib.h>

void printArray(int *array, int length) {
    for(int j = 0; j < length; j++) {
        if (array[j] != -1) {
            printf("%d ", array[j]);
        }
    }
    printf("\n");
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

void appendItem(int **array, int *totalSize, int num) {
    int length = calcArrayLen(*array, *totalSize);
    if (length == *totalSize) {
        // Allocate a new array in the memory with a bigger size
        int newSize = 2 * (*totalSize);
        int *new_arr_ptr = (int*)malloc(newSize * sizeof(int));
        
        // Copy the elements of the array to the new array
        for(int j = 0; j < *totalSize; j++) {
            new_arr_ptr[j] = (*array)[j];
        }
        
        // Initialize the new part of the array
        for (int j = *totalSize; j < newSize; j++) {
            new_arr_ptr[j] = -1; // Initialize new elements to -1
        }

        // Free the old array and update the pointer
        free(*array);
        *array = new_arr_ptr;
        // Append the new item now that the array has been properly initialized
        (*array)[length] = num;
        *totalSize = newSize; // Update the total size
    } else {
        (*array)[length] = num; // Append the new item if there's space
    }
}


int main() {
    int totalSize = 2;
    int *array_ptr = (int*)malloc(totalSize * sizeof(int));

    // Initialize the array
    for(int j = 0; j < totalSize; j++) {
        array_ptr[j] = -1;
    }

    int num;
    while(1) {
        printf("Type an Integer to fill the array (-1 to exit): ");
        scanf("%d", &num);

        if (num == -1) {
            break;
        }

        appendItem(&array_ptr, &totalSize, num);
    }

    int length = calcArrayLen(array_ptr, totalSize);
    printArray(array_ptr, length);
    free(array_ptr); // Don't forget to free the allocated memory!

    return 0;
}
