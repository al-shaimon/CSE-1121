// #include <stdio.h>
// int main()
// {
//   int i,n;
//   // for ( i = 3; i >= 1; i--)
//   //   for(j = 0; j <= i; j++)
//   //   printf("%d %d\n", i, j);
//   for (i = 1; i <= n; i++)
//   printf("%d\n", i);
//   return 0;
// }

// #include <stdio.h>

// int main() {
//   int p, q;
//   printf("Enter value of p: ");
//   scanf("%d", &p);
//   printf("Enter value of q: ");
//   scanf("%d", &q);

//   for (int i = p; i <= q; i++) {
//     if (i % 3 == 0) {
//       continue;
//     }
//     printf("%d\n", i);
//   }

//   return 0;
// }

// #include <stdio.h>

// int main() {
//     int a, b, sum = 0;
//     printf("Enter two integers: ");
//     scanf("%d %d", &a, &b);

//     for (int i = a; i <= b; i++) {
//         if (i % 2 != 0 && (i % 3 == 0 || i % 5 == 0)) {
//             sum += i;
//         }
//     }

//     printf("Sum of all integers in the range is: %d", sum);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N, d;
//     printf("Enter N: ");
//     scanf("%d", &N);
//     printf("Enter d: ");
//     scanf("%d", &d);

//     for (int i = 1; i <= N; i++) {
//         if (i % d == 0) {
//             printf("\n");
//             continue;
//         }
//         for (int j = 1; j <= N-i; j++) {
//             printf(" ");
//         }
//         for (int k = 1; k <= 2*i-1; k++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N, d;
//     printf("Enter N: ");
//     scanf("%d", &N);
//     printf("Enter d: ");
//     scanf("%d", &d);

//     for (int i = 1; i <= N; i++) {
//         if (i % d == 0) {
//             printf("\n");
//             continue;
//         }
//         for (int j = 1; j <= N-i; j++) {
//             printf(" ");
//         }
//         for (int k = 1; k <= 2*i-1; k++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int N, d;
//     printf("Enter N: ");
//     scanf("%d", &N);
//     printf("Enter d: ");
//     scanf("%d", &d);

//     for (int i = 1; i <= N; i++) {
//         if (i % d == 0) {
//             printf("\n");
//             continue;
//         }
//         for (int j = 1; j <= 2*i-1; j++) {
//             printf("*");
//         }
//         printf("\n");
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//   int i,j;
//   for(i=1;i<=5;i++)
//   {
//     for(j=1;j<=5;j++)
//     {
//       printf("*");
//     }
//     printf("\n");
//   }
//   return 0;
// }

#include <stdio.h>
int main()
{
  int i,j,k,n,d;
  scanf("%d %d", &n, &d);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(i%d==0){
        printf("\n");
      }
      else
      {
        for(k=1;k<=n-i;k++){
          printf(" ");
        }
        for(k=1;k<=i;k++){
          printf("*");
        }
      }
      
    }
  }
  return 0;
}