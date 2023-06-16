#include <stdio.h>
#include <math.h>
int main()
{
  double a,b;
  scanf("%lf %lf", &a, &b);
  double floor_res = floor(a/b);
  double ceil_res = ceil(a/b);
  double round_res = round(a/b);
  printf("floor %.0lf / %.0lf = %.0lf\n", a, b, floor_res);
  printf("ceil %.0lf / %.0lf = %.0lf\n", a, b, ceil_res);
  printf("round %.0lf / %.0lf = %.0lf\n", a, b, round_res);
  return 0;
}