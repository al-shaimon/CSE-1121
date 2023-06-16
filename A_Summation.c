#include <stdio.h>
#include <math.h>
int main()
{
  int t;
  long long sum = 0;
  long long sum2 = 0;
  scanf("%d", &t);
  while (t--)
  {
    int num;
    scanf("%d", &num);
      sum2 += num;
      sum = abs(sum2);  
  }
  printf("%lld\n", sum);
  return 0;
}