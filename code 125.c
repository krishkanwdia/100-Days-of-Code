#include <stdio.h>
#include <stdlib.h>

#define MAX_LINE_LEN 256

int main() {
    char filename[100];
    char line[MAX_LINE_LEN];

    // Get the filename from user
    printf("Enter filename to open in append mode: ");
    scanf("%s", filename);

    // Open the file in append mode
    FILE *file = fopen(filename, "a");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    // Clear input buffer
    while (getchar() != '\n');

    // Get the new line of text to append
    printf("Enter the line to append: ");
    if (fgets(line, sizeof(line), stdin) == NULL) {
        printf("Error reading input\n");
        fclose(file);
        return 1;
    }

    // Write the new line to the file
    fprintf(file, "%s", line);

    // Close the file
    fclose(file);

    printf("Text appended successfully to %s\n", filename);

    return 0;
}
