#include <stdio.h>

int main() {
    long x1, y1, r1, x2, y2, r2;
    scanf("%ld %ld %ld %ld %ld %ld", &x1, &y1, &r1, &x2, &y2, &r2);

    long dx = x2 - x1;
    long dy = y2 - y1;
    long d2 = dx * dx + dy * dy;
    long sumR = r1 + r2;
    long diffR = r1 - r2;
    long sumR2 = sumR * sumR;
    long diffR2 = diffR * diffR;

    if (d2 == 0) {
        if (r1 == r2) {
            printf("-1\n");
        } else {
            printf("0\n");
        }
    } else if (d2 > sumR2) {
        printf("0\n");
    } else if (d2 == sumR2) {
        printf("1\n");
    } else if (d2 > diffR2) {
        printf("2\n");
    } else if (d2 == diffR2) {
        printf("1\n");
    } else {
        printf("0\n");
    }
    return 0;
}
