// #include <stdio.h>
// int sum(int m,int n)
// {
//   return m+n;
// }
// int main()
// {
//   int x,y;
//   scanf("%d %d", &x,&y);
//   int plus = sum(x,y);
//   printf("%d\n",plus);
//   return 0;
// }

#include <stdio.h>
void summation(int m,int n)
{
  int sum = m + n;
  printf("%d",sum);
}

int main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  summation(x,y);
  // printf("%d\n",summation(x,y));
}