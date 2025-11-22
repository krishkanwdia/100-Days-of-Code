#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ' ') {
            str[i] = '-';
        }
        i++;
    }

    printf("String after replacing spaces with hyphens: %s\n", str);
    return 0;
}
