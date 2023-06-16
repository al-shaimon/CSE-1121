#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
  char s[100001];
  scanf("%s",&s);
  int len = strlen(s);
  for(int i = 0;i<len;i++){
    if (s[i] == ',')
    {
      s[i] = ' ';
    } else if (islower(s[i]))
    {
      s[i] = toupper(s[i]);
    } else if (isupper(s[i]))
    {
      s[i] = tolower(s[i]);
    }
  }
  printf("%s\n",s);
  return 0;
}