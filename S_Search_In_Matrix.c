#include <stdio.h>
int main() {
    int n, M;
    scanf("%d %d", &n, &M);
    int A[n][M];
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            scanf("%d", &A[i][j]);
        }
    }
    int X;
    scanf("%d", &X);
    int found = 0;
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j < M; j++) 
        {
            if (A[i][j] == X) 
            {
                found = 1;
                break;
            }
        }
        if (found) {
            break;
        }
    }
    if (found) {
        printf("will not take number\n");
    } else {
        printf("will take number\n");
    }
    return 0;
}
