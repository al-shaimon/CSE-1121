#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    for(int i = 2; i <= n; i++) {
        int prime = 1;
        for(int j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                prime = 0;
                break;
            }
        }
        if(prime) {
            printf("%d ", i);
        }
    }
    return 0;
}
