#include <stdio.h>
int main ()
{
  int e = 0;
  int o = 0;
  int p = 0;
  int n = 0;
  int num;
  for(int i = 0; i < 5; i++){
    scanf("%d", &num);
    if (num%2==0)
    {
      e++;
    }
    if (num%2!=0)
    {
      o++;
    }
    if (num>0)
    {
      p++;
    }
    if (num<0)
    {
      n++;
    }
  }
  printf("%d valor(es) par(es)\n", e);
  printf("%d valor(es) impar(es)\n", o);
  printf("%d valor(es) positivo(s)\n", p);
  printf("%d valor(es) negativo(s)\n", n);
  return 0;
}