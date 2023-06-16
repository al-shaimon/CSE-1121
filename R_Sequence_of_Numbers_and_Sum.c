// #include <stdio.h>
// int main()
// {
//   int n,m;
//   while (1)
//   {
//     scanf("%d %d", &n,&m);
//     if (n <= 0 || m <= 0)
//     break;
//     int sum = 0;    
//     if (n >= -100)
//     {
//      for(int i = n; i <=m; i++)
//     {
//       printf("%d ", i);
//       sum += i;
//     }
//     }
//     if (m <= 100)
//     {
//       for(int i = m; i <=n; i++)
//     {
//       printf("%d ", i);
//       sum += i;
//     }
//     }
//     printf("sum =%d\n", sum);
//   }
//   return 0;
// }

#include<stdio.h>
int main()
{
    int i,j,a,b,temp;
    while(1){
        scanf("%d %d", &a, &b);
        if(a<=0||b<=0){
                break;
        }
        if(a>b){
            temp=a;a=b;b=temp;
        }
        int sum=0;
        for(j=a;j<=b;j++){
            printf("%d ", j);
            sum+=j;
        }
        printf("sum =%d\n", sum);
    }
    return 0;
}