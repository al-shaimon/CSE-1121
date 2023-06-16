#include <stdio.h>
int main()
{
  int n=0;
  float num;
  for(int i = 0; i < 6; i++){
    scanf("%f", &num);
    if (num > 0)
    {
      n++;
    }
    
  }
  printf("%d valores positivos\n", n);
  return 0;
}