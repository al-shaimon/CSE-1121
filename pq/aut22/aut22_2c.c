#include <stdio.h>
int divisorcheck(int x, int y) {
    if (x % y == 0 || y % x == 0) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int x, y;
    scanf("%d %d", &x,&y);
    printf("%d", divisorcheck(x, y));
    return 0;
}
