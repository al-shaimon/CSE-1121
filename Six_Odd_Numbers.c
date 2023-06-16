#include <stdio.h>
int main ()
{
  int n;
  int i = 0;
  scanf("%d", &n);
  for ( n; i < 6; n++)
  {
    if (n%2!=0)
    {
      printf("%d\n", n);
      i++;
    }
  }
  return 0;
}
// #include <stdio.h>
// int main() 
// {
//     int x;
//     scanf("%d", &x);
    
//     int i, count = 0;
//     for (i = x; count < 6; i++) {
//         if (i % 2 != 0) {
//             printf("%d\n", i);
//             count++;
//         }
//     }
//     return 0;
// }
