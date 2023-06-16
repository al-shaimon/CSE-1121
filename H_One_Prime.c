#include <stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);

    for (i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("NO");
            return 0;
        }
    }

    printf("YES");
    return 0;
}
