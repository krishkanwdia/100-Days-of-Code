#include <stdio.h>

int main() {
    int total_seconds, hours, minutes, seconds;

    // Input time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &total_seconds);

    // Convert to hours, minutes, seconds
    hours = total_seconds / 3600;
    minutes = (total_seconds % 3600) / 60;
    seconds = total_seconds % 60;

    // Display the result
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
