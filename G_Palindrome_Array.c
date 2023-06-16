#include <stdio.h>
int isPalindrome(int arr[], int n) {
    int i, j;
    for (i = 0, j = n - 1; i < j; i++, j--) {
        if (arr[i] != arr[j]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    if (isPalindrome(arr, n)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
