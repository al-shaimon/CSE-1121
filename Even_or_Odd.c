#include <stdio.h>
int main ()
{
  int n=0;
  int i,num;
  for (i = 0; i < 5; i++)
  {
    scanf("%d", &num);
    if (num%2==0)
    {
      n++;
    }
  }
  printf("%d valores pares\n", n);
  return 0;
}