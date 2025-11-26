#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *file;
    char filename[100];
    int characters = 0, words = 0, lines = 0;
    int inWord = 0;
    char ch;

    printf("Enter filename to open: ");
    scanf("%s", filename);

    file = fopen(filename, "r");
    if (file == NULL) {
        printf("Could not open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(file)) != EOF) {
        characters++;

        if (ch == '\n') {
            lines++;
        }

        if (isspace(ch)) {
            inWord = 0;
        } else
