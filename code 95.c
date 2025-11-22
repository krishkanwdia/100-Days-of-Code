#include <stdio.h>
#include <string.h>

int isRotation(char *s1, char *s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    // Lengths must be equal for rotation
    if (len1 != len2) {
        return 0;
    }

    // Create a new string by concatenating s1 with itself
    char temp[2 * len1 + 1];
    strcpy(temp, s1);
    strcat(temp, s1);

    // Check if s2 is a substring of the concatenated string
    if (strstr(temp, s2) != NULL) {
        return 1;  // s2 is a rotation of s1
    }
    return 0;  // Not a rotation
}

int main() {
    char str1[100], str2[100];

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    if (isRotation(str1, str2)) {
        printf("'%s' is a rotation of '%s'\n", str2, str1);
    } else {
        printf("'%s' is not a rotation of '%s'\n", str2, str1);
    }

    return 0;
}
