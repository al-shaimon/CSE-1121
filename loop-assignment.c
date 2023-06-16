// Problem 2:
#include <stdio.h>
int main ()
{
  int i;
  scanf("%d", &i);
  do
  {
    printf("%d\n", i);
    i--;
  } while (i>=1);
  
  return 0;
}

// Problem 3:
#include<stdio.h>
int main()
{
char i='a';
do
{
  printf("%c\n", i);
  i++;
} while (i<='z');

return 0;
}

// Problem 6:
#include <stdio.h>
int main()
{
  int i,n;
  scanf("%d", &n);
  i=1;
  do
  {
    printf("%d\n", i);
    i++;
  } while (i<=n);
  return 0;
}