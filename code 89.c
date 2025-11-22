#include <stdio.h>

int main() {
    char str[100], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the character to count frequency: ");
    scanf("%c", &ch);

    int i = 0;
    while (str[i] != '\0' && str[i] != '\n') {
        if (str[i] == ch) {
            count++;
        }
        i++;
    }

    printf("Frequency of '%c' = %d\n", ch, count);
    return 0;
}
