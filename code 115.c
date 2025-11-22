#include <stdio.h>
#include <string.h>

int checkAnagram(char *s, char *t) {
    int count[26] = {0};
    int lenS = strlen(s);
    int lenT = strlen(t);

    if (lenS != lenT) {
        return 0; // Different lengths cannot be anagrams
    }

    for (int i = 0; i < lenS; i++) {
        count[s[i] - 'a']++;
        count[t[i] - 'a']--;
    }

    for (int i = 0; i < 26; i++) {
        if (count[i] != 0) {
            return 0; // Frequencies mismatch
        }
    }
    return 1; // All counts balanced: anagram
}

int main() {
    char s[1000], t[1000];

    printf("Enter first string (lowercase letters only): ");
    fgets(s, sizeof(s), stdin);
    s[strcspn(s, "\n")] = '\0'; // Remove trailing newline

    printf("Enter second string (lowercase letters only): ");
    fgets(t, sizeof(t), stdin);
    t[strcspn(t, "\n")] = '\0'; // Remove trailing newline

    if (checkAnagram(s, t)) {
        printf("Anagram\n");
    } else {
        printf("Not Anagram\n");
    }

    return 0;
}
