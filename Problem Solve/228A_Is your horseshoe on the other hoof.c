#include <stdio.h>

typedef long long ll;

int main() {
    int count, ans;
    ll s1, s2, s3, s4;
    scanf("%lld %lld %lld %lld", &s1, &s2, &s3, &s4);

    ans = 0;
    count = 1;

    if (s1 != s2 && s1 != s3 && s1 != s4) {
        count++;
    }
    if (s2 != s3 && s2 != s4) {
        count++;
    }
    if (s3 != s4) {
        count++;
    }

    ans = 4 - count;

    printf("%d\n", ans);

    return 0;
}
