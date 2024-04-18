#include <stdio.h>

int main() {
    int n, t;
    scanf("%d %d", &n, &t);

    char s[101];
    scanf("%s", s);

    while (t--) {
        for (int i = 1; i < n; ++i) {
            if (s[i] == 'G' && s[i - 1] == 'B') {
                s[i] = 'B';
                s[i - 1] = 'G';
                ++i;
            }
        }
    }

    printf("%s\n", s);
    return 0;
}
