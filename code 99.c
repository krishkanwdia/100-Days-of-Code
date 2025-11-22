#include <stdio.h>
#include <string.h>

int main() {
    char date[20], day[3], month[3], year[5];
    char convertedDate[20];
    printf("Enter date in dd/04/yyyy format: ");
    fgets(date, sizeof(date), stdin);

    // Extract day, month, and year parts assuming fixed format dd/04/yyyy
    strncpy(day, date, 2);
    day[2] = '\0';

    strncpy(month, date + 3, 2);
    month[2] = '\0';

    strncpy(year, date + 6, 4);
    year[4] = '\0';

    // Check if month is "04" and convert to "Apr"
    if (strcmp(month, "04") == 0) {
        strcpy(month, "Apr");
    } else {
        // Could add more months here if needed.
        printf("Input month not '04'. Only '04' supported in this program.\n");
        return 1;
    }

    // Format the output date string as dd-Apr-yyyy
    snprintf(convertedDate, sizeof(convertedDate), "%s-%s-%s", day, month, year);

    printf("Converted date: %s\n", convertedDate);
    return 0;
}
