// #include <stdio.h>
// int main()
// {
//   int n,i,sum=0;
//   scanf("%d",&n);
//   int arr[n];
//   for( i = 1; i <= n; i++)
//   {
//     scanf("%d",&arr[i]);
//     // printf("%d",arr[i]);
//     // for(i = 1; i <= n; i++)
//     // {
      
//     // }
//      sum += arr[i] - '0';
//     printf("%d\n",sum);
//   }
//     return 0;
  
// }

#include <stdio.h>
int main() {
    int n, i, sum = 0;
    char a[1000000];
    scanf("%d %s", &n, a);
    for (i = 0; i < n; i++) {
        sum += a[i] - '0';
    }
    printf("%d\n", sum);
    return 0;
}
