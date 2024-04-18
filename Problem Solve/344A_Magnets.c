#include <stdio.h>
#include <string.h>

int main() {
    int n, cnt = 1;
    char s[101], tmp[101];
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%s", s);
        if (i == 0) {
            strcpy(tmp, s);
            continue;
        } else {
            if (strcmp(s, tmp) != 0)
                cnt++;
        }
        strcpy(tmp, s);
    }

    printf("%d", cnt);
    return 0;
}
