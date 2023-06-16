#include <stdio.h>
int main()
{
  char c;
  scanf("%c", &c);  
  if (c == 'z')
  {
    printf("a\n");
  } else{

    printf("%c", ++c);
  }
  return 0;
}