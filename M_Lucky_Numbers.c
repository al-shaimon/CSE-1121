#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);

    int has_lucky = 0;
    for (int i = A; i <= B; i++) {
        int n = i;
        int is_lucky = 1;
        while (n > 0) {
            int digit = n % 10;
            if (digit != 4 && digit != 7) {
                is_lucky = 0;
                break;
            }
            n /= 10;
        }
        if (is_lucky) {
            printf("%d ", i);
            has_lucky = 1;
        }
    }

    if (!has_lucky) {
        printf("-1");
    }

    return 0;
}
