#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LEN 256

int main() {
    char filename[100];
    char line[MAX_LINE_LEN];

    printf("Enter filename: ");
    scanf("%s", filename);

    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        printf("Error: Could not open file %s\n", filename);
        return 1;
    }

    printf("Contents of %s:\n", filename);
    while (fgets(line, sizeof(line), file) != NULL) {
        printf("%s", line);
    }

    fclose(file);
    return 0;
}
