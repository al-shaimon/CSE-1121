#include <stdio.h>
void avg(int n,int j,double a,double sum,double average)
{
  while (n--)
  {
    scanf("%lf", &a);
    sum += a;
  }
    average = sum / j;
  printf("%0.7lf ", average);
}
int main()
{
  int n;
  double a,sum,average;
  scanf("%d", &n);
  int j = n;
   sum = 0;
  avg(n,j,a,sum,average);
  return 0;
}