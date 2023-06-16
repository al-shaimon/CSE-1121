// By Hasnat
#include<stdio.h>
#include<math.h>
void equation(int x, int n)
{
    long long int sum=0;
    for(int i=2;i<=n;){
        sum+=pow(x,i);
        i+=2;
  }
  printf("%lld\n", sum);
}
int main()
{
    int x,n;
    scanf("%d%d",&x,&n);
    equation(x,n);

    return 0;
}

// #include <stdio.h>
// #include <math.h>

// void equation(int x, int n)
// {
//   int power = 0;
//     int sum = -1;
//     for (int i = 0; i <= n; i += 2) {
//         sum += pow(x, power);
//         power += 2;
//     }
//     printf("%d\n", sum);
// }

// int main() {
//     int x, n;
//     scanf("%d %d", &x, &n);
//     equation(x,n);
//     return 0;
// }

// #include <stdio.h>

// long long power(int base, int power)
// {
//     long long value = base;
//     for(long long i = 2; i <= power; i++)
//     {
//         value = value * base;
//     }
//     return value;
// }

// long long int func(long long a,long long int b)
// {
//     long long ans = 1;
//     for(long long int i = 2; i <= b; i = i + 2)
//     {
//         ans += power(a,i);
//     }
// }

// int main()
// {
//     long long x,y;
//     scanf("%d %d", &x,&y);
//     func(x,y);
// }

// #include <stdio.h>

// long long power(int base, int exponent) {
//     long long value = 1;
//     for (int i = 0; i < exponent; i++) {
//         value *= base;
//     }
//     return value;
// }

// long long equation(long long a, long long b) {
//     long long ans = 0;
//     long long powerOfA = a * a;
//     for (long long i = 2; i <= b; i += 2) {
//         ans += powerOfA;
//         powerOfA *= powerOfA;
//     }
//     return ans;
// }

// int main() {
//     long long int x, y;
//     scanf("%lld %lld", &x, &y);
//     long long result = equation(x, y);
//     printf("%lld\n", result);
//     return 0;
// }
