#include <stdio.h>
#include <string.h>

int lengthOfLongestSubstring(char *s) {
    int n = strlen(s);
    int maxLength = 0;
    int freq[256] = {0};  // Frequency array for ASCII chars
    int left = 0, right = 0;

    while (right < n) {
        freq[(unsigned char)s[right]]++;

        // If duplicate found, shrink from left
        while (freq[(unsigned char)s[right]] > 1) {
            freq[(unsigned char)s[left]]--;
            left++;
        }

        int currentLength = right - left + 1;
        if (currentLength > maxLength) {
            maxLength = currentLength;
        }
        right++;
    }
    return maxLength;
}

int main() {
    char str[1000];
    printf("Enter string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove trailing newline

    int result = lengthOfLongestSubstring(str);
    printf("Length of longest substring without repeating characters: %d\n", result);
    return 0;
}
