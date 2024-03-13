#include <stdio.h>

int main() {
    char *main_str = (char *) malloc(255 * sizeof(char));
    char *copied_str = (char *) malloc(255 * sizeof(char));

    printf("Enter a sentence: ");
    fgets(main_str, sizeof(255 * sizeof(*main_str)), stdin);

    printf("Original string: %s", main_str);

    
    char *copied_str_ptr = copied_str;
    
    int length = strlen(main_str);
    for(int i = 0; i < length; i++) {
        *copied_str_ptr = *main_str;
        copied_str_ptr++;
        main_str++;
    }

    main_str -= length;
    copied_str_ptr = copied_str;

    printf("Copied string: %s", copied_str_ptr);

    free(main_str);
    free(copied_str);

    return 0;
}