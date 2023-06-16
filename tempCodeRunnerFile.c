// #include <stdio.h>

// int main() {
//     int lines;
//     scanf("%d", &lines);
//     int spaces1 = lines - 1;
//     for (int i = 1; i <= lines; i++) {
//         for (int z = 1; z <= spaces1; z++) {
//             printf(" ");
//         }
//         for (int x = 1; x < i * 2; x++) {
//             printf("*");
//         }
//         printf("\n");
//         spaces1--;
//     }
//     spaces1 = 1;
//     for (int i = lines; i >= 1; i--) {
//         for (int z = 1; z <= spaces1; z++) {
//             printf(" ");
//         }
//         for (int x = i * 2; x > 1; x--) {
//             printf("*");
//         }
//         printf("\n");
//         spaces1++;
//     }
//     return 0;
// }

#include <stdio.h>
int main()
{
    int row,col,n;
    scanf("%d", &n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        for(col=row-1;col>=1;col--)
        {
            printf("*");
        }
        printf("\n");
    }

    for(row=n;row>=1;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=row;col++)
        {
            printf("*");
        }
        for(col=row-1;col>=1;col--)
        {
            printf("*");
        }
        printf("\n");
    }
}