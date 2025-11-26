#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LEN 256  // Maximum length of a line

int main() {
    FILE *file = fopen("info.txt", "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    char line[MAX_LINE_LEN];

    // Read and print lines until EOF
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
