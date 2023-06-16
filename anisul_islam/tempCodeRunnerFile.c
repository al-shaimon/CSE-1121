#include <stdio.h>

int main() {
    int N;
    printf("Enter a positive integer N: ");
    scanf("%d", &N);

    if (N <= 0) {
        printf("N must be a positive integer.\n");
        return 0;
    }

    for (int i = N; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("C");
        }
        printf("\n");
    }

    return 0;
}