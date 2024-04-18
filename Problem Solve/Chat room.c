#include <stdio.h>
#include <string.h>

int main() {
    char n[100];
    scanf("%s", n);
    int len = strlen(n);
    int count = 0;

    for (int x = 0; x < len; x++) {
        if (n[x] == 'h' && count == 0) {
            count++;
        } else if (n[x] == 'e' && count == 1) {
            count++;
        } else if (n[x] == 'l' && count == 2) {
            count++;
        } else if (n[x] == 'l' && count == 3) {
            count++;
        } else if (n[x] == 'o' && count == 4) {
            count++;
        }
    }

    if (count == 5) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
