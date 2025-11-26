#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *inputFile, *outputFile;
    char ch;

    // Open input file in read mode
    inputFile = fopen("input.txt", "r");
    if (inputFile == NULL) {
        perror("Error opening input file");
        return 1;
    }

    // Open output file in write mode
    outputFile = fopen("output.txt", "w");
    if (outputFile == NULL) {
        perror("Error opening output file");
        fclose(inputFile);
        return 1;
    }

    // Read character by character
    while ((ch = fgetc(inputFile)) != EOF) {
        // Convert lowercase to uppercase
        if (ch >= 'a' && ch <= 'z') {
            ch = ch - ('a' - 'A');  // or use ch = toupper(ch);
        }
        fputc(ch, outputFile);
    }

    printf("Conversion done successfully. Check output.txt\n");

    // Close files
    fclose(inputFile);
    fclose(outputFile);

    return 0;
}
