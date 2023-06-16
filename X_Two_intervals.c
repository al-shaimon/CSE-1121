#include <stdio.h>
int main ()
{
  int l1,l2,r1,r2,max_l,min_r;
  scanf("%d %d %d %d", &l1,&r1,&l2,&r2);
  max_l = l1 > l2 ? l1 : l2;
  min_r = r1 < r2 ? r1 : r2;

  if (max_l <= min_r)
  {
    printf("%d %d\n", max_l,min_r);
  }
  else
  {
    printf("-1\n");
  }
  return 0;
}