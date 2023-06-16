#include <stdio.h>
int main()
{
  int A,B;
  char s;
  scanf("%d %c %d", &A,&s,&B);
  if (s=='+')
  {
    printf("%d\n", (A+B));
  }
  if (s=='-')
  {
    printf("%d\n", (A-B));
  }
  if (s=='*')
  {
    printf("%d\n", (A*B));
  }
  if (s=='/')
  {
    printf("%d\n", (A/B));
  }
  return 0;
}