#include <stdio.h>
#include <stdbool.h> // Include the bool data type

bool willProduceOutput(const char *p) {
    bool outputProduced = false;

    for (int i = 0; p[i] != '\0'; i++) {
        if (p[i] == 'H' || p[i] == 'Q' || p[i] == '9') {
            outputProduced = true;
            break; // Exit the loop as we found an instruction
        }
    }

    return outputProduced;
}

int main() {
    char p[101]; // Allow for a string of up to 100 characters plus the null terminator
    scanf("%s", p);

    if (willProduceOutput(p)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
