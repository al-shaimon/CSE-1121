#include <stdio.h>
int main ()
{
  int i,n,e;
  scanf("%d", &n);
  for (i = 1; i <= 10; i++)
  {
    e=i*n;
    printf("%d x %d = %d\n", i,n,e);
  }
  return 0;
}