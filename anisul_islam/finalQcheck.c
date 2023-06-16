/*---------1a-------------*/

// #include <stdio.h>
// int main()
// {
//   int rows = 5;
//   for(int i=1;i<=rows;i++)
//   {
//     for(int j = 1;j<=rows;j++)
//       if (j<=i)
      
//       printf("C");
      
    
//     printf("\n");
//   }
//   return 0;
// }

/*---------1b-------------*/

// #include <stdio.h>
// #include <stdio.h>

// int main() {
//     int N;
//     printf("Enter a positive integer N: ");
//     scanf("%d", &N);

//     if (N <= 0) {
//         printf("N must be a positive integer.\n");
//         return 0;
//     }

//     for (int i = N; i >= 1; i--) {
//         for (int j = 1; j <= i; j++) {
//             printf("C");
//         }
//         printf("\n");
//     }

//     return 0;
// }

/*-----------1C(or)---------------*/
// #include <stdio.h>

// int isPrime(int n) {
//     if (n <= 1) {
//         return 0;  // Not a prime number
//     }

//     for (int i = 2; i * i <= n; i++) {
//         if (n % i == 0) {
//             return 0;  // Not a prime number
//         }
//     }

//     return 1;  // Prime number
// }

// int main() {
//     int T;
//     printf("Enter the number of test cases (T): ");
//     scanf("%d", &T);

//     while (T--) {
//         int N;
//         printf("Enter a non-negative integer (N): ");
//         scanf("%d", &N);

//         if (isPrime(N)) {
//             printf("Prime number\n");
//         } else {
//             printf("Not a prime number\n");
//         }
//     }

//     return 0;
// }


/*-------2a(i)-------------->*/
// #include <stdio.h>
// int magic(int n){
//   int m = 0;
//   m += n;
//   return m;
// }
// int main()
// {
//   for(int i = 1; i <= 5; i++){
//     printf("%d ",magic(i));
//   }
//   return 0;
// }

/*-----------2c-----------------*/

// #include <stdio.h>
// void shout (int n){
//   if (n <= 0) return;
//   printf("%d ", n);
//   shout (n/2);
//   printf("%d ", n);
// }
// int main()
// {
//   int n = 59;
//   shout(n);
//   return 0;
// }

/*-----------------3b(i)--------------------------*/
// #include <stdio.h>
// int main()
// {
//   int i;
//   int arr[5] = {1};
//   for(i = 0; i < 5;i++)
//     printf("%d ",arr[i]);
//   return 0;
// }

/*-----------------3b(ii)--------------------------*/
// #include <stdio.h>
// int main()
// {
//   int arr[5], i = 0;
//   while (i<5)
//     arr[i]=++i;
//   for(i=0;i<5;i++)
//     printf("%d, ",arr[i]);
//   return 0;
// }

/*-----------------4b-------------------*/
#include <stdio.h>
#include <string.h>
int main()
{
  char s1[]="IIUC", s2[]="CSE", s3[10];
  printf("%s\n", strcat(s2,s1));
  printf("%d\n", strlen(s2));
  printf("%s\n", strlwr(s2));
  printf("%s\n", strcpy(s3,s2));
  return 0;
}
