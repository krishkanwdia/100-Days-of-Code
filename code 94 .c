#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    char longestWord[50];
    char tempWord[50];
    int longestLength = 0, tempLength = 0;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int i = 0, j = 0;
    
    while (sentence[i] != '\0' && sentence[i] != '\n') {
        if (sentence[i] != ' ') {
            tempWord[j++] = sentence[i];
        } else {
            tempWord[j] = '\0';
            tempLength = strlen(tempWord);
            if (tempLength > longestLength) {
                longestLength = tempLength;
                strcpy(longestWord, tempWord);
            }
            j = 0; // reset for next word
        }
        i++;
    }

    // Check last word as there is no trailing space
    tempWord[j] = '\0';
    tempLength = strlen(tempWord);
    if (tempLength > longestLength) {
        longestLength = tempLength;
        strcpy(longestWord, tempWord);
    }

    printf("Longest word: %s\n", longestWord);
    return 0;
}
