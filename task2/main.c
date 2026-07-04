#include <stdio.h>
int main() {
    int p;
    scanf("%d", &p);
    long long a[20];
    for (int i = 0; i < p; i++) {
        scanf("%lld", &a[i]);
    }
    long long nsk = a[0];
    for (int i = 1; i < p; i++) {
        long long x = nsk, y = a[i], t;
        while (y != 0) {
            t = y;
            y = x % y;
            x = t;
        }
        long long nsd = x;
        nsk = nsk / nsd * a[i];
    }
    printf("%lld\n", nsk);
    return 0;
}
