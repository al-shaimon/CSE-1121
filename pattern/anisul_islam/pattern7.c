#include <stdio.h>
int main()
{
  int row,col,n,d;
  scanf("%d %d", &n,&d);
  for(row = 1; row <= n; row++)
  {
    if (row % 2 == 0)
    {
      printf("\n");
      continue;
    }
    
    for(col = 1; col <= n-row; col++)
    {
      printf(" ");
    }
    for(col = 1; col <= row; col++)
    {
      printf("*");
    }
    printf("\n");
  }
  return 0;
}