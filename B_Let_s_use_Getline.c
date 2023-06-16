#include <stdio.h>
#include <string.h>
int main()
{
  char str[1000000];
  scanf("%[^\\]",&str);
  printf("%s",str);
  return 0;
}