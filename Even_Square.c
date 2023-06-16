#include <stdio.h>
int main ()
{
  int n;
  int i = 0;
  scanf("%d", &n);
  for ( n; i < n ; n++)
  {
    if (n%2!=0)
    {
      printf("%d\n", n);
      i++;
    }
  }
  return 0;
}