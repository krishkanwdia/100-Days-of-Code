#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;  // Convert lowercase to uppercase
        } else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + 32;  // Convert uppercase to lowercase
        }
        i++;
    }

    printf("Toggled case string: %s\n", str);
    return 0;
}
