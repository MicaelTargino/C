#include <stdio.h>
#include <stdlib.h>

int main() {
    int nums[8];

    int *p = (int*) malloc(8 * sizeof(int));

    p = nums;

    for(int i = 0; i < 8; i++) {
        *p = rand() % 20;
        p++;
    }

    p = nums; 

    for(int j = 0; j < 8; j++) {
        printf("%d \n", *p);
        p++;
    } 

    free(p);

    return 0;
}