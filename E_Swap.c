#include <stdio.h>
void swap(int m,int n)
{
  printf("%d %d", n,m);
}
int main()
{
  int x,y;
  scanf("%d %d", &x,&y);
  swap(x,y);
}