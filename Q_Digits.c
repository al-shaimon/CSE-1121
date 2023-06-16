#include <stdio.h>

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        long long n;
        scanf("%lld", &n);
        if (n==0)
        {
          printf("0");
        }
        while (n > 0) {
            printf("%lld ", n % 10);
            n /= 10;
        }
        printf("\n");
    }
    return 0;
}
