#include <stdio.h>

int main() {
    char str[100];
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        // go until find \0 (null character)
        if (str[i] == ' ')
            count++;
    }

    printf("Number of white spaces: %d\n", count);
    return 0;
}
