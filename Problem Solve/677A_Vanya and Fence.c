#include <stdio.h>

#define ll long long

int main() {
    ll n, h, i;
    while (scanf("%lld %lld", &n, &h) == 2) {
        ll a[n], stnd = 0, bnd = 0;
        for (i = 0; i < n; i++) {
            scanf("%lld", &a[i]);
            if (a[i] > h)
                bnd++;
            else
                stnd++;
        }
        printf("%lld\n", 2 * bnd + stnd);
    }
    return 0;
}
