#include <stdio.h>
#include <stdlib.h>

int main() {
    char sourceFileName[100], destFileName[100];
    FILE *sourceFile, *destFile;
    int ch;

    // Get source file name from user
    printf("Enter source file name: ");
    scanf("%s", sourceFileName);

    // Open source file in read mode
    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        perror("Error opening source file");
        return 1;
    }

    // Get destination file name from user
    printf("Enter destination file name: ");
    scanf("%s", destFileName);

    // Open destination file in write mode
    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        perror("Error opening destination file");
        fclose(sourceFile);
        return 1;
    }

    // Copy contents from source file to destination file character by character
    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully from %s to %s\n", sourceFileName, destFileName);

    // Close files
    fclose(sourceFile);
    fclose(destFile);

    return 0;
}
