#include <stdio.h>

int main() {
    int n, niv = 0;
    scanf("%d", &n);

    char s[n];
    scanf("%s",&s);

    for (int i = 0; i < n; i++) {
        if (s[i] == s[i+1]) {
            niv++;
        }
    }

    printf("%d ", niv);
    return 0;
}
