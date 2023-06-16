// #include <stdio.h>
// int main()
// {
//   // int i = 378;
//   // float x = 123.9453600;
//   // printf("%6d %2.4f \n", i,x);
//   // printf(" %-6d %12.4f \n", i, x);
//   int m = 8123;
//   float x = 34.6502988987987;
//   char str[30] = "Quality";
//   // printf("%08d\n", m);
//   // printf("%12.5g\n", x);
//   printf("%-7.9sb\n", str);
// }

#include <stdio.h>
#include <math.h>
int main ()
{
  int A,B,C;
  scanf("%d%d%d", &A,&B,&C);
  double S =(A+B+C)/2.00;
  double Area=(sqrt(S*(S-A)*(S-B)*(S-C)));
  printf("%.2lf\n", Area);
}