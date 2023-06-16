#include <stdio.h>
int main()
{
  int x,t;
  int even = 0, odd = 0, positive = 0, negative = 0;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d", &x);
    if (x%2 == 0)
    {
      even++;
    } else
    {
      odd++;
    }
    if (x > 0)
    {
      positive++;
    }
    if (x < 0)
    {
      negative++;
    }
  }
  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n", even, odd, positive, negative);
  return 0;
}