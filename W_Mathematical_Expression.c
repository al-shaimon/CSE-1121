#include <stdio.h>
int main()
{
  int a,b,c,output;
  char s,q;
  scanf("%d %c %d %c %d", &a,&s,&b,&q,&c);
  if (s == '+')
  {
    output = a + b;
  }else if (s == '-')
  {
    output = a - b;
  }else if (s == '*')
  {
    output = a * b;
  }else if (s == '/')
  {
    output = a / b;
  }
  if (output == c)
  {
    printf("Yes\n");
  }else{
    printf("%d\n", output);
  }
  return 0;
}