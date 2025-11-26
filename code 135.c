#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE,   // implicitly 11
    TIMEOUT    // implicitly 12
};

int main() {
    printf("SUCCESS = %d\n", SUCCESS);
    printf("FAILURE = %d\n", FAILURE);
    printf("TIMEOUT = %d\n", TIMEOUT);
    return 0;
}
