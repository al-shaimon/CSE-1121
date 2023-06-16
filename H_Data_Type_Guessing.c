#include <stdio.h>

int main() {
    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);

    double result = (double)n * k / a;
    if (result <= 2147483647) {
        printf("int\n");
    } else if (result <= 9223372036854775807LL) {
        printf("long long\n");
    } else {
        printf("double\n");
    }

    return 0;
}
