#include <stdio.h>
int main()
{
  int n,m;
  scanf("%d %d", &n, &m);
  int arr[n][m];
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= m; j++)
    {
      scanf("%d", &arr[i][j]);
    }
  }
  int x;
  scanf("%d",&x);
  int found = 0;
  for(int i = 1; i <= n; i++)
  {
    for(int j = 1; j <= m; j++)
    {
      if (arr[i][j] == x)
      {
        found = 1;
        break;
      }
    }
     if (found)
      {
        break;
      }
  }
  if (found)
  {
    printf("will not take number\n");
  }
  el
}