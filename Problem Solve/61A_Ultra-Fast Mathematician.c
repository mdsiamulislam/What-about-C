#include <stdio.h>

int main() {
    char s1[101], s2[101];
    scanf("%s%s", s1, s2);

    size_t len = strlen(s1);
    for (size_t i = 0; i < len; ++i) {
        if (s1[i] == s2[i]) {
            s1[i] = '0';
        } else {
            s1[i] = '1';
        }
    }

    printf("%s\n", s1);
    return 0;
}
