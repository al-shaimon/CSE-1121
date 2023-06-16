#include <stdio.h>
int main ()
{
  int n = 0;
  float num;
  float sum = 0;
  for(int i = 1; i <= 6; i++){
    scanf("%f", &num);
    if(num > 0)
    {
      sum = sum + num;
      n++;
    }
  }
  printf("%d valores positivos\n", n);
  printf("%.1f", sum/n);
  return 0;
}