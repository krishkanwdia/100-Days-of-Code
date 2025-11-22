#include <stdio.h>

int main() {
    int side1, side2, side3;

    // Input three sides of the triangle
    printf("Enter three sides of triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check for triangle validity first (triangle inequality)
    if (side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1) {
        // Classify triangle based on side lengths
        if (side1 == side2 && side2 == side3) {
            printf("Equilateral triangle.\n");
        }
        else if (side1 == side2 || side1 == side3 || side2 == side3) {
            printf("Isosceles triangle.\n");
        }
        else {
            printf("Scalene triangle.\n");
        }
    }
    else {
        printf("Not a valid triangle.\n");
    }

    return 0;
}
