#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length ignoring newline character
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    int left = 0, right = length - 1;
    int isPalindrome = 1;

    while (left < right) {
        if (str[left] != str[right]) {
            isPalindrome = 0;
            break;
        }
        left++;
        right--;
    }

    if (isPalindrome) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}
