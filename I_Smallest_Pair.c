#include <stdio.h>
#include <limits.h>
int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        int n, i, j;
        scanf("%d", &n);
        int arr[n];
        for (i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int minSum = INT_MAX;
        for (i = 0; i < n; i++) {
            for (j = i + 1; j < n; j++) {
                int sum = arr[i] + arr[j] + j - i;
                if (sum < minSum) {
                    minSum = sum;
                }
            }
        }
        printf("%d\n", minSum);
    }
    return 0;
}
