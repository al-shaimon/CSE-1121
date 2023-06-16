// #include <stdio.h>
// int main()
// {
//   int n;
//   scanf("%d",&n);
//   int a[n];
//   for(int i = 1; i <= n; i++)
//   {
//     scanf("%d", &a[i]);
//     int min = a[0];
//     int freq = 1;
//     for (int i = 1; i < n; i++) {
//         if (a[i] < min) {
//             min = a[i];
//             freq = 1;
//         } else if (a[i] == min) {
//             freq++;
//         }
//     }
//     if (freq % 2 == 1) {
//         printf("Lucky\n");
//     } else {
//         printf("Unlucky\n");
//     }
//     return 0;
//   }
  
// }

// #include <stdio.h>

// int main() {
//   int n;
//   scanf("%d", &n);

//   int a[n];
//   for (int i = 0; i < n; i++) {
//     scanf("%d", &a[i]);
//   }

//   int min_element = a[0];
//   int min_element_frequency = 0;
//   for (int i = 1; i < n; i++) {
//     if (a[i] < min_element) {
//       min_element = a[i];
//       min_element_frequency = 1;
//     } else if (a[i] == min_element) {
//       min_element_frequency++;
//     }
//   }

//   if (min_element_frequency % 2 == 1) {
//     printf("Lucky\n");
//   } else {
//     printf("Unlucky\n");
//   }

//   return 0;
// }

#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    int min = a[0];
    int freq = 1;
    for (int i = 1; i < n; i++) {
        if (a[i] < min) {
            min = a[i];
            freq = 1;
        } else if (a[i] == min) {
            freq++;
        }
    }
    if (freq % 2 == 1) {
        printf("Lucky\n");
    } else {
        printf("Unlucky\n");
    }
    return 0;
}
