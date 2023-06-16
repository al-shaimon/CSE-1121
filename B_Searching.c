#include <stdio.h>
int main()
{
  int n;
  scanf("%d",&n);
  long long a[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%lld",&a[i]);
  }
  long long x;
  int w = -1;
  scanf("%lld",&x);
  for (int i = 0; i < n; i++)
  {
    if (x == a[i]){
      w = i;
      break;
    }
  }
  printf("%d",w);
  return 0;
}