#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *file;
    char filename[] = "numbers.txt";
    int num;
    int sum = 0;
    int count = 0;
    float average;

    file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return 1;
    }

    while (fscanf(file, "%d", &num) == 1) {
        sum += num;
        count++;
    }

    fclose(file);

    if (count == 0) {
        printf("No integers found in the file.\n");
        return 1;
    }

    average = (float)sum / count;
    printf("Sum = %d\n", sum);
    printf("Average = %.2f\n", average);

    return 0;
}
