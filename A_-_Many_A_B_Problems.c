#include<stdio.h>
int main ()
{
  int test,a1,b1,a2,b2,a3,b3,a4,b4,x1,x2,x3,x4;
  scanf("%d%d%d%d%d%d%d%d%d", &test,&a1,&b1,&a2,&b2,&a3,&b3,&a4,&b4);
  x1=a1+b1;
  x2=a2+b2;
  x3=a3+b3;
  x4=a4+b4;
  printf("%d\n",x1);
  printf("%d\n",x2);
  printf("%d\n",x3);
  printf("%d\n",x4);
  return 0;
}