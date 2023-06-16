#include <stdio.h>
int main ()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int min,mid,max;
    if (a <= b && a <= c)
    {
        min = a;
        if (b <= c)
        {
            mid = b;
            max = c;
        } else {
            mid = c;
            max = b;
        }
        
    } else if (b <= a && b <= c)
    {
        min = b;
        if (a <= c)
        {
            mid = a;
            max = c;
        } else
        {
            mid = c;
            max = a;
        }
    } else if (c <= a && c <= b)
    {
        min = c;
        if (a <= b)
        {
            mid = a;
            max = b;
        } else {
            mid = b;
            max = a;
        }
    }
    printf("%d\n%d\n%d\n\n%d\n%d\n%d\n", min,mid,max,a,b,c);
    return 0;
}