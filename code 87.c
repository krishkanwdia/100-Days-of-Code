#include <stdio.h>

int main() {
    char str[100];
    int spaces = 0, digits = 0, specialChars = 0, i = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            spaces++;
        } else if (str[i] >= '0' && str[i] <= '9') {
            digits++;
        } else if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))) {
            specialChars++;
        }
        i++;
    }

    printf("Spaces: %d\n", spaces);
    printf("Digits: %d\n", digits);
    printf("Special characters: %d\n", specialChars);

    return 0;
}
