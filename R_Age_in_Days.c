#include <stdio.h>
int main()
{
  int days,years,months,r_days,f_days;
  scanf("%d", &days);
  printf("%d years\n", days/365);
  r_days=days%365;
  printf("%d months\n", r_days/30);
  f_days=r_days%30;
  printf("%d days\n", f_days);
  return 0;
}