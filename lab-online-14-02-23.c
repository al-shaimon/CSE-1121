#include <stdio.h>
int main ()
{
  int a,b,c,d,e;
  scanf("%d%d%d%d%d", &a,&b,&c,&d,&e);
  if ((a+b+c+d+e)%5==0)
  {
    printf("%d\n", (a+b+c+d+e)/5);
  }
  else
  {
    printf("%d\n", (a+b+c+d+e)/5);
  }
  return 0;
}