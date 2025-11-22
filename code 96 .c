#include <stdio.h>
#include <string.h>

// Function to reverse a word from start to end indices
void reverseWord(char *str, int start, int end) {
    char temp;
    while (start < end) {
        temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }
}

int main() {
    char sentence[200];
    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    int start = 0, end = 0, length = strlen(sentence);

    for (int i = 0; i <= length; i++) {
        // If space or end of string is found, reverse the current word
        if (sentence[i] == ' ' || sentence[i] == '\0' || sentence[i] == '\n') {
            end = i - 1;
            reverseWord(sentence, start, end);
            start = i + 1;
        }
    }

    printf("Sentence after reversing each word:\n%s", sentence);
    return 0;
}
