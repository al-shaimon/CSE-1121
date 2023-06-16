#include <stdio.h>
#include <string.h>
int main()
{
  char s[1000];
  char t[1000];
  scanf("%s",&s);
  scanf("%s",&t);
  int lenOfs = strlen(s);
  int lenOft = strlen(t);
  printf("%d %d\n%s %s",lenOfs,lenOft,s,t);
}