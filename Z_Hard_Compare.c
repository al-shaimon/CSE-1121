#include <stdio.h>
#include <math.h>

int main() {
    long long a, b, c, d;
    scanf("%lld %lld %lld %lld", &a, &b, &c, &d);

    double result1 = b * log(a);
    double result2 = d * log(c);

    if (result1 > result2) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
