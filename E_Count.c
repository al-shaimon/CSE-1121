#include <stdio.h>
#include <string.h>
int main()
{
  char s[1000000];
  // gets(s);
  scanf("%s",&s);
  int sum = 0;
  for(int i = 0; s[i];i++)
  {
    sum+=s[i]-48;
  }
  printf("%d",sum);
}