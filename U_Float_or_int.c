#include <stdio.h>
int main()
{
  double n;
  scanf("%lf", &n);
  int integer = (int) n;
  double floating = n - integer; 
  if (floating == 0)
  {
    printf("int %d\n", integer);
  }
  else{
    printf("float %d %0.3lf\n", integer, floating);
  }
  return 0;
}