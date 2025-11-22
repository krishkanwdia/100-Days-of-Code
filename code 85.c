#include <stdio.h>

int main() {
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    // Find length manually ignoring newline character if any
    int length = 0;
    while (str[length] != '\0' && str[length] != '\n') {
        length++;
    }

    // Reverse the string in place
    int start = 0, end = length - 1;
    while (start < end) {
        char temp = str[start];
        str[start] = str[end];
        str[end] = temp;
        start++;
        end--;
    }

    printf("Reversed string: %s\n", str);
    return 0;
}
