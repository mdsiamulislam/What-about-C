#include <stdio.h>

#define size 105

int p_arr[size], q_arr[size], test[size];

int main() {
    int n, p, q, t = 0, i, count;

    scanf("%d", &n);
    scanf("%d", &p);

    for (i = 1; i <= p; i++) {
        scanf("%d", &p_arr[i]);
        t = p_arr[i];
        test[t] = 1;
    }

    scanf("%d", &q);

    for (i = 1; i <= q; i++) {
        scanf("%d", &q_arr[i]);
        t = q_arr[i];
        test[t] = 1;
    }

    count = 0;

    for (t = 1; t <= n; t++) {
        if (test[t] == 1) {
            count++;
        }
    }

    if (count == n) {
        printf("I become the guy.\n");
    } else {
        printf("Oh, my keyboard!\n");
    }

    return 0;
}
