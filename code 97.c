#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    // Print the first character as an initial if it is alphabetic
    if (name[0] != '\0' && name[0] != '\n' && isalpha(name[0])) {
        printf("%c", toupper(name[0]));
    }

    // Traverse the rest of the name to find letters after spaces and print them
    for (int i = 1; name[i] != '\0' && name[i] != '\n'; i++) {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            printf("%c", toupper(name[i + 1]));
        }
    }

    printf("\n");
    return 0;
}
