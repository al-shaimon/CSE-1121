// 1(C)
// #include <stdio.h>
// int main()
// {
//   double a = 0.1;
//   if (a*3 == 0.3)
//   {
//     printf("Equal\n");
//   }
//   else
//   {
//     printf("Not Equal\n");
//   }
//   return 0;
// }

#include <stdio.h>
int main()
{
int x, i;
scanf(“%d”, &x);
printf(“1”);
for (i = 3; i < x; i += 2)
{
if (x % i == 0) printf(“ %d”, i);
}
return 0;
}