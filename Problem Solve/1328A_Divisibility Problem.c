#include <stdio.h>

int main() {
    int t;
    long long int a, b;
    scanf("%d", &t);

    while (t--) {
        int div = 0, pls = 0;
        scanf("%lld %lld", &a, &b);

        if (a % b == 0) {
            printf("0\n");
            continue;
        }

        div = a / b;
        pls = (div + 1) * b;
        printf("%d\n", pls - a);
    }

    return 0;
}
