// #include <stdio.h>
// int main()
// {
//   int n,m=0;
//   scanf("%d",&n);
//   long long int a[n];
//   for(int i=0;i<n;i++)
//   {
//     scanf("%lld",a[i]);
//     if(a[i] % 2 == 1)
//     {
//       m = 0;
//     }
//   }
//   // int i=1;
//   // int m = 0;
//   // while(i<=n)
//   // {
//   // if(a[i] % 2 == 1)
//   // {
//   //   m = 0;
//   // }
//   // i++;
//   // }
//   printf("%d",m);

//   return 0;
// }

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int zero = 0;
    int even = 1;
    while (even == 1) {
        for (int i = 0; i < n; i++) {
            if (a[i] % 2 == 1) {
                even = 0;
                break;
            }
            a[i] /= 2;
        }
        if (even == 1) {
            zero++;
        }
    }
    printf("%d\n", zero);
    return 0;
}
