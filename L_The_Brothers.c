#include <stdio.h>
#include <string.h>

int main() {
    char f1[100], s1[100], f2[100], s2[100];
    scanf("%s%s%s%s", f1, s1, f2, s2);
    if (strcmp(s1, s2) == 0) {
        printf("ARE Brothers\n");
    } else {
        printf("NOT\n");
    }
    return 0;
}



/*This is my Code*/

// #include <stdio.h>
// int main ()
// {
//   char f1[50];
//   char s1[50];
//   char f2[50];
//   char s2[50];
//   scanf("%s %s %s %s", &f1,&s1,&f2,&s2);
//   if (s1[0]==s2[0] && s1[1]==s2[1] && s1[2]==s2[2])
//   {
//     printf("ARE Brothers\n");
//   }
//   else
//   {
//     printf("NOT\n");
//   }
//   return 0;
// }