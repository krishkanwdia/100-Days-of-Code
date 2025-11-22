#include <stdio.h>

int isVowel(char ch) {
    // Check if character is a vowel (either uppercase or lowercase)
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        return 1;
    }
    return 0;
}

int main() {
    char str[100];
    int i = 0, j = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove vowels by shifting characters left
    while (str[i] != '\0' && str[i] != '\n') {
        if (!isVowel(str[i])) {
            str[j++] = str[i];
        }
        i++;
    }
    str[j] = '\0';  // Null terminate the modified string

    printf("String after removing vowels: %s\n", str);
    return 0;
}
