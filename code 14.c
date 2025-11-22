#include <stdio.h>
#include <ctype.h>  // for isalpha()

int main() {
    char ch;

    // Input a character from user
    printf("Enter a character: ");
    scanf(" %c", &ch);

    // Check if input is an alphabet
    if (isalpha(ch)) {
        // Convert to lowercase for simplicity
        char lower_ch = tolower(ch);

        // Check for vowel
        if (lower_ch == 'a' || lower_ch == 'e' || lower_ch == 'i' || 
            lower_ch == 'o' || lower_ch == 'u') {
            printf("%c is a vowel.\n", ch);
        } else {
            printf("%c is a consonant.\n", ch);
        }
    } else {
        printf("%c is not an alphabet.\n", ch);
    }

    return 0;
}
