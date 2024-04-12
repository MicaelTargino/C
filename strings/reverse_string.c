#include <stdio.h>
#include <string.h>

void reverseStr(char* str, int strLen) {
    char* ptr1 = str;
    printf("%c", *ptr1);
  
    char* ptr2 = str + (strLen -1);
    printf("%c", *ptr2);

    while (ptr1 < ptr2) {
       char temp = *ptr1;
       *ptr1 = *ptr2;
       *ptr2 = temp;

       ptr1++;
       ptr2--; 
    }
}

int main() {
    char str[255];

    printf("Type the string: ");
    scanf("%s", str);

    reverseStr(str, strlen(str));

    printf("Reversed string: \n");
    printf("%s", str);

    return 0;
}