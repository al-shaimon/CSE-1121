#include <stdio.h>

int main() {
    int A, B, C, min, max;
    scanf("%d %d %d", &A, &B, &C);

    // Find the minimum number
    min = A;
    if (B < min) {
        min = B;
    }
    if (C < min) {
        min = C;
    }

    // Find the maximum number
    max = A;
    if (B > max) {
        max = B;
    }
    if (C > max) {
        max = C;
    }

    // Print the results
    printf("%d %d\n", min,max);

    return 0;
}
