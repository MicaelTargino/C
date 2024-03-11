#include <stdio.h>

int add(int n1, int n2) {
    return n1 + n2;
}

int subtract(int n1, int n2) {
    return n1 - n2;
}

int multiply(int n1, int n2) {
    return n1 * n2;
}

int divide(int n1, int n2) {
    return n1/n2;
}

int main() {
    int running = 1;
    int n1, n2, operation;
    int result = 0;

    int (*add_ptr)(int, int) = &add;
    int (*sub_ptr)(int, int) = &subtract;
    int (*multiply_ptr)(int, int) = &multiply;
    int (*divide_ptr)(int, int) = &divide;

    while(running) {
        printf("Type two numbers (0 0 to exit)");
        scanf("%d %d", &n1, &n2);

        if (n1 == 0 && n2 == 0) {
            running = 0;
        }

        printf("Type the operation to perform \n 1 to add \n 2 to subtract \n 3 to multiply \n 4 to divide \n");
        scanf("%d", &operation);

        switch (operation) {
            case 1: 
                result = (*add_ptr)(n1, n2);
                break;
            case 2:
                result = (*sub_ptr)(n1, n2);
                break;
            case 3:
                result = (*multiply_ptr)(n1, n2);
                break;
            case 4:
                result = (*divide_ptr)(n1, n2);
                break;
        }

        printf("result: %d \n", result);
    
    }

    return 0;
}