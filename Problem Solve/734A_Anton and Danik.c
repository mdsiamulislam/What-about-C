#include <stdio.h>

int main() {
    int n, anton = 0, danik = 0;

    scanf("%d", &n);
    char s[n + 1]; // Increase the size of the array to accommodate the null terminator.

    scanf("%s", s);

    for (int i = 0; i < n; i++) {
        if (s[i] == 'A') {
            anton++;
        } else {
            danik++;
        }
    }

    if (anton > danik) {
        printf("Anton");
    } else if (anton < danik) {
        printf("Danik");
    } else {
        printf("Friendship");
    }

    return 0;
}
