#include<stdio.h>
int main(){
  int i = 1, sum = 0, n = 2;
  for ( i = 1; i <= n; i++)
  {
    sum = sum + i;
    printf("%d", sum);
  }
  
  return 0;
}