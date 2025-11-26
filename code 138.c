#include <stdio.h>

enum UserRole { ADMIN, USER, GUEST };

int main() {
    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };
    int numRoles = sizeof(roleNames) / sizeof(roleNames[0]);

    for (int i = 0; i < numRoles; i++) {
        printf("%s = %d\n", roleNames[i], i);
    }

    return 0;
}
