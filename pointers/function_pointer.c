#include <stdio.h>
#include <math.h>

void power_to(int num) {
    printf("%f\n", pow(num, 2)); // Changed %d to %f
}

int main() {
    int nums[5] = {1, 2, 3, 4, 5};
    int *arr_ptr = nums;
    void (*function_ptr)(int) = &power_to;

    for(int i = 0; i < 5; i++) {
        (*function_ptr)(*arr_ptr);
        arr_ptr++; // Increment pointer to move to the next element
    }

    return 0;
}
