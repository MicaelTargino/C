#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_SIZE 100

void concatStrings(char *finalStr,char *str1, char *str2) {
    while (*str1 != '\0') {
        *finalStr = *str1;
        finalStr++;
        str1++;
    }

    while (*str2 != '\0') {
        *finalStr = *str2;
        finalStr++;
        str2++;
    }
  
    // Null-terminate the final string
    *finalStr = '\0';
}

int main() {
    char *finalStr = (char*) malloc(MAX_SIZE * 2 * sizeof(char));
    char str1[MAX_SIZE];
    char str2[MAX_SIZE];

    printf("type the first string: ");
    fgets(str1, MAX_SIZE, stdin);

    printf("type the second string: ");
    fgets(str2, MAX_SIZE, stdin);

    concatStrings(finalStr, str1, str2);

    printf("the final string is: \n %s", finalStr);
  
    return 0;
}