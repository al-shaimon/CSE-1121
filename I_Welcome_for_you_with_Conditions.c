#include <stdio.h>
int main()
{
  int a,b;
  scanf("%d%d", &a,&b);
  if (0<=a && a>=b)
  {
    printf("Yes\n");
  }
  else
  {
    printf("No\n");
  }
  return 0;
}