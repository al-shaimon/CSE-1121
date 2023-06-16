#include <stdio.h>
int main() {
    char symbol;
    int t, x;
    scanf("%c %d", &symbol, &t);
    while(t--) {
        scanf("%d", &x);
        for (int i = 0; i < x; i++) {
            printf("%c", symbol);
        }
        printf("\n");
    }
    return 0;
}