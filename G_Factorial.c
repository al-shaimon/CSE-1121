#include<stdio.h>
int main()
{
  int n,t;
  scanf("%d", &t);
  for(int i = 0; i < t; i++)
  {
    scanf("%d", &n);
    long long factorial = 1;
    for (int j = 1; j <= n; j++)
    {
      factorial*=j;
    }
    printf("%lld\n", factorial);
  }
  return 0;
}

// #include <stdio.h>

// int main() {
//     int t, n, i, j, fact;
//     scanf("%d", &t);
//     for (i = 0; i < t; i++) {
//         scanf("%d", &n);
//         fact = 1;
//         for (j = 1; j <= n; j++) {
//             fact *= j;
//         }
//         printf("%d\n", fact);
//     }
//     return 0;
// }
