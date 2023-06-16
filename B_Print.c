#include <stdio.h>
void loop(int m){
  int i;
  for(int i = 1;i<=m;i++){
    printf("%d",i);
    if (i!=m)
  {
    printf(" ");
  }
  }
  
  
}
int main()
{
  int n;
  scanf("%d",&n);
  loop(n);
}