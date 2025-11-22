#include <stdio.h>
#include <ctype.h>

int main() {
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    int i = 0;

    // Print the initial of the first name in uppercase
    if (name[0] != '\0' && name[0] != '\n' && isalpha(name[0])) {
        printf("%c. ", toupper(name[0]));
    }

    // Iterate through the string to print initials of middle names
    // and full surname at the end
    while (name[i] != '\0' && name[i] != '\n') {
        if (name[i] == ' ' && isalpha(name[i + 1])) {
            // Check if this is the last space in the string
            int j = i + 1;
            int isLastSpace = 1;
            while (name[j] != '\0' && name[j] != '\n') {
                if (name[j] == ' ') {
                    isLastSpace = 0;
                    break;
                }
                j++;
            }
            if (isLastSpace) {
                // Print full surname (from i+1 to end)
                printf("%s", &name[i + 1]);
                break;
            } else {
                // Print the initial of middle name
                printf("%c. ", toupper(name[i + 1]));
            }
        }
        i++;
    }

    return 0;
}
