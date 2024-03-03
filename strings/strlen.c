#include <stdio.h>

#define MAX_LENGTH 1000 // Define a maximum length for the input string

// Function to calculate the length of a string
int myStrlen(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}

int main() {
    char str[MAX_LENGTH]; // Allocate a char array to hold the input string

    printf("Enter a string: ");
    // Use fgets to read a line of text from stdin. Subtract 1 from MAX_LENGTH to leave space for the null terminator.
    fgets(str, MAX_LENGTH, stdin);

    // Remove the newline character if fgets reads it into the buffer
    if (str[myStrlen(str) - 1] == '\n') {
        str[myStrlen(str) - 1] = '\0';
    }

    int length = myStrlen(str);

    printf("The length of the string is %d\n", length);

    return 0;
}
