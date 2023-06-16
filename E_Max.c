#include <stdio.h>
int main()
{
  int x,max = 0,t;
  scanf("%d", &t);
  while (t--)
  {
    scanf("%d", &x);
    if (x > max)
    {
      max = x;
    }
  }
  printf("%d\n", max);
  return 0;
}

// #include <stdio.h>

// int main() {
//     int n, max = 0, x;
//     scanf("%d", &n);
//     while (n--) {
//         scanf("%d", &x);
//         if (x > max) {
//             max = x;
//         }
//     }
//     printf("%d\n", max);
//     return 0;
// }
