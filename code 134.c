#include <stdio.h>

// Define enum for status codes
enum Status {
    SUCCESS,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status code;

    // Example: set code to different enum values to test
    code = SUCCESS;

    switch (code) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;
        case FAILURE:
            printf("Operation failed. Please try again.\n");
            break;
        case TIMEOUT:
            printf("Operation timed out. Please retry later.\n");
            break;
        default:
            printf("Unknown status code.\n");
    }

    return 0;
}
