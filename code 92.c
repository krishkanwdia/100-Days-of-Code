#include <stdio.h>

#define ALPHABET_SIZE 26

int main() {
    char str[100];
    int freq[ALPHABET_SIZE] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Count frequency of lowercase letters
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            freq[ch - 'a']++;
        }
    }

    // Find first repeating lowercase character
    for (int i = 0; str[i] != '\0' && str[i] != '\n'; i++) {
        char ch = str[i];
        if (ch >= 'a' && ch <= 'z') {
            if (freq[ch - 'a'] > 1) {
                printf("First repeating lowercase character: %c\n", ch);
                return 0;
            }
        }
    }

    printf("No repeating lowercase character found.\n");
    return 0;
}
