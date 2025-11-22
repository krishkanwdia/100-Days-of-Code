#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a lowercase string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert to uppercase by subtracting 32 from ASCII value
        }
        i++;
    }

    printf("Uppercase string: %s\n", str);
    return 0;
}
