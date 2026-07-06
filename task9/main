#include <stdio.h>

long minSteps(long x, long y) {
    long D = y - x;
    if (D == 0) return 0;
    if (D == 1) return 1;

    long lo = 1, hi = 100000, h_odd = hi;
    while (lo <= hi) {
        long mid = (lo + hi) / 2;
        if (mid * mid >= D) { h_odd = mid; hi = mid - 1; }
        else lo = mid + 1;
    }

    lo = 1; hi = 100000;
    long h_even = hi;
    while (lo <= hi) {
        long mid = (lo + hi) / 2;
        if (mid * (mid + 1) >= D) { h_even = mid; hi = mid - 1; }
        else lo = mid + 1;
    }

    long n_odd = 2 * h_odd - 1;
    long n_even = 2 * h_even;
    return n_odd < n_even ? n_odd : n_even;
}

int main() {
    long x, y;
    scanf("%ld %ld", &x, &y);
    printf("%ld\n", minSteps(x, y));
    return 0;
}
