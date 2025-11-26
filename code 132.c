#include <stdio.h>

// Define enum for traffic lights
enum traffic_light { RED, YELLOW, GREEN };

int main() {
    enum traffic_light light;

    // Example: Assign a value to light
    light = RED;

    // Print action based on traffic light value
    switch (light) {
        case RED:
            printf("Stop\n");
            break;
        case YELLOW:
            printf("Wait\n");
            break;
        case GREEN:
            printf("Go\n");
            break;
        default:
            printf("Invalid light\n");
    }

    return 0;
}
