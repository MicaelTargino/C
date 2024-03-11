#include <stdio.h>

#define ROWS 3
#define COLS 3

int main() {
    int arr[ROWS][COLS];
    int (*p)[COLS] = arr;
    int controlvalue;

    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            printf("Enter a value: ");
            scanf("%d", &controlvalue);
            *(*(p + i) + j) = controlvalue;
        }
    }

    for(int i = 0; i < ROWS; i++) {
        for(int j = 0; j < COLS; j++) {
            printf(" %d ", p[i][j]);
        }
        printf("\n");
    }

    return 0;
}
