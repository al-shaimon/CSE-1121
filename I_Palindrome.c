// #include <stdio.h>
// #include <string.h>
// int main()
// {
//     char s[1003];
//     int i,rev;
//     scanf("%s",&s);
//     int len = strlen(s);
//     int check = 0;
//     for(i=0,rev=len-1;i<len;i++,rev--){
//         if (s[i]==s[rev])
//         {
//             check = 1;
//         }
        
//     }
//     if (check==1)
//     {
//         printf("YES\n");
//     } else
//     {
//         printf("NO\n");
//     }
//     return 0;    
// }

#include <stdio.h>
#include <string.h>

int isPalindrome(char *s) {
    int len = strlen(s);
    int i;

    for (i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) {
            return 0;
        }
    }

    return 1;
}

int main() {
    char s[1001];
    scanf("%s", s);

    if (isPalindrome(s)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
