#include <stdio.h>
int main ()
{
  int n,i;
  scanf("%d", &n);
  for ( i = 2; i <= n; i = i+2)
  {
    printf("%d\n", i);
  }
  if (i == 2)
  {
    printf("-1\n");
  }
  return 0;
}