// #include <stdio.h>
// #include <string.h>
// int main()
// {
//   int t;
//   char s[100001];
//   scanf("%d", &t);
//   int check = 0;
//   while (t--)
//   {
//     scanf("%s",&s);
//     int len = strlen(s);
//     for(int i = 0; i < len - 2;i++){
//       if((s[i] == '0' && s[i+1] == '1' && s[i+2] == '0') || (s[i] == '1' && s[i+1] == '0' && s[i+2] == '1')){
//         check = 1;
//       }
//     }
//     if (check == 1)
//     {
//       printf("Good\n");
//     }else
//     {
//       printf("Bad\n");
//     }    
//   }
//   return 0;
// }

#include <stdio.h>
#include <string.h>

int isGoodString(char *s) {
    int len = strlen(s);
    int i;

    for (i = 0; i < len - 2; i++) {
        if ((s[i] == '0' && s[i + 1] == '1' && s[i + 2] == '0') ||
            (s[i] == '1' && s[i + 1] == '0' && s[i + 2] == '1')) {
            return 1;
        }
    }

    return 0;
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        char s[100001];
        scanf("%s", s);

        if (isGoodString(s)) {
            printf("Good\n");
        } else {
            printf("Bad\n");
        }
    }

    return 0;
}
