#include <stdio.h>

int main() {
    float grades[3];
  
    //initialize ptr containing the address for the fist item of array (grades[0])
    float *ptr = &grades;

    for(int i =0; i < (sizeof(grades) / sizeof(float)); i++) {
        float newItem = 0;
        printf("Type your %d grade: ", i+1);
        scanf("%f", &newItem);
      
        // use pointer arithmetics to set the value for an array element based on the ith position
        *(ptr + i) = newItem;
    }

    printf("Array before reversing: ");

    for(int j =0; j < (sizeof(grades) / sizeof(float)); j++) {
      
        // use pointer arithmetics to read the value for an array element based on the ith position
        printf(" %.2f ", *(ptr + j));
    }

    printf("\nArray after reversing: ");

    // set pointer to the last element of the array
    float *endPtr = &grades[3];
  
    for(int k = 0; k < sizeof(grades) / sizeof(float); k++) {
      
        // print the value of the subtraction from the address of the last array element with the K value, printing the array reversed 
        printf(" %.2f ", *(endPtr - (k + 1)));
    }

    return 0;
}
