#include <stdio.h>

int main() {
    int n, row, col;
    printf("Enter n = ");
    scanf("%d", &n);

    for (row = 1; row <= n; row++) {
        for (col = 1; col <= n; col++) {
            if (col == 1 || col == n || (row == col && row <= n/2 + 1) || (row + col == n + 1 && row <= n/2 + 1)) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
