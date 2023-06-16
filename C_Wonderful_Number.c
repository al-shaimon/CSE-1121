// #include <stdio.h>
// void check(int m){
// if (m % 2 == 0)
//   {
//     printf("NO\n");
//   } else{
//     printf("YES\n");
//   }
// }
// int main()
// {
//   long long n;
//   scanf("%lld", &n);
//   check(n);
// }


// #include<stdio.h>
 
// int ispalindrome(int n)
// {
//     int rev = 0,temp = n;
//     while(temp > 0){
//         rev = (rev << 1) | (temp & 1);
//         temp >>= 1;
//     }
//         return n == rev;
// }
 
// int iswonderful(int n)
// {
//     return (n % 2 == 1) && ispalindrome(n);
// }
 
// int main()
// {
//     int N;
//     scanf("%d",&N);
//     if (iswonderful(N))
//     {
//         printf("YES\n");
//     } else
//     {
//         printf("NO\n");
//     }
    
//     return 0;
// }    

#include <stdio.h>

int checking_odd(int num)
{
    if (num % 2 == 0)
    {
        return 0;
    }
    else
    {
        return 1;
    }
    
}

int checking_palindrome(int num)
{
    
}

int main()
{
    int n;
    scanf("%d",&n);
    if(checking_odd(n) && checking_palindrome(n))
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }
    
}