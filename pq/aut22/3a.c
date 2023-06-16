#include <stdio.h>
// int main() {
//     int A[] = {1, 4, 3, 2, 5, 6};
//     int n = sizeof(A) / sizeof(A[0]);
//     for (int i = 0; i < n; i++) {
//         printf("i = %d, A[%d] = %d\n", i, i, A[i]);
//     }
//     return 0;
// }

// Aut 22 1a

int main()
{
  int i,j;
  for( i = 3; i >= 1; i--){
    for( j = 0; j <= i; j++){
      printf("%d %d\n", i,j);
   }
  }
}

// Spring 22 1a

// int main()
// {
//   int i,j;
//   for( i = 0; i < 3; i++){
//     for( j = 2; j >= 0; j--){
//       printf("%d %d\n", i,j);
//     }
//   }
// }