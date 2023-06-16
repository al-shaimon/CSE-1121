#include <stdio.h>
int main() {
    int n, min = 100000, index;
    scanf("%d", &n);
    int arr[n];
    for (int i = 1; i < n; i++) {
        scanf("%d", &arr[i]);
        if (arr[i] < min) {
            min = arr[i];
            index = i;
        }
    }
    printf("%d %d\n", min, index);
    return 0;
}
