#include <stdio.h>

int main() {
    float percentage;

    // Input percentage
    printf("Enter the percentage (0-100): ");
    scanf("%f", &percentage);

    // Assign grade based on percentage
    if (percentage >= 90 && percentage <= 100) {
        printf("Grade A\n");
    }
    else if (percentage >= 80 && percentage < 90) {
        printf("Grade B\n");
    }
    else if (percentage >= 70 && percentage < 80) {
        printf("Grade C\n");
    }
    else if (percentage >= 60 && percentage < 70) {
        printf("Grade D\n");
    }
    else if (percentage >= 0 && percentage < 60) {
        printf("Grade F\n");
    }
    else {
        printf("Invalid percentage input.\n");
    }

    return 0;
}
