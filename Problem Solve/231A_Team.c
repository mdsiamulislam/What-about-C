#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    int in[2];
    int min = 0;
    int passengers = 0; // Current number of passengers on the bus
    int maxPassengers = 0; // Maximum number of passengers

    for (int i = 0; i < n; i++) {
        scanf("%d", &in[0]); // Number of passengers getting off
        scanf("%d", &in[1]); // Number of passengers getting on

        passengers = passengers - in[0] + in[1]; // Update current number of passengers

        if (passengers > maxPassengers) {
            maxPassengers = passengers; // Update maximum number of passengers
        }
    }

    printf("%d", maxPassengers);

    return 0;
}
