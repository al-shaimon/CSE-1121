#include <stdio.h>
#include <math.h>

int main() {
    int T, N, M, i;
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        scanf("%d%d", &M, &N);
        printf("%d\n", abs(M - N));
    }
    
    return 0;
}
