#include <stdio.h>
#include <string.h>

void printSubstrings(char *str) {
    int n = strlen(str);

    // Iterate over all possible substring lengths
    for (int len = 1; len <= n; len++) {
        // Iterate over all possible starting points
        for (int i = 0; i <= n - len; i++) {
            // Print substring of length 'len' starting at index 'i'
            printf("%.*s\n", len, str + i);
        }
    }
}

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Remove trailing newline if any from fgets
    str[strcspn(str, "\n")] = '\0';

    printf("All substrings are:\n");
    printSubstrings(str);

    return 0;
}
