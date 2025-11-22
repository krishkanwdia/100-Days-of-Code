#include <stdio.h>
#include <ctype.h>

int main() {
    char str[1000];
    printf("Enter the string: ");
    fgets(str, sizeof(str), stdin);

    // Capitalize first alphabet letter
    int i = 0;
    while (str[i] && !isalpha(str[i])) {
        i++;
    }
    if (str[i] >= 'a' && str[i] <= 'z') {
        str[i] = str[i] - ('a' - 'A');
    }

    // Lowercase the rest of the string
    for (int j = i + 1; str[j] != '\0'; j++) {
        if (str[j] >= 'A' && str[j] <= 'Z') {
            str[j] = str[j] + ('a' - 'A');
        }
    }

    printf("Sentence case: %s", str);
    return 0;
}
