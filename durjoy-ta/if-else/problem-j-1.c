#include<stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    if(x<=70)
    {
        printf("0\n");
    }
    else if(70<x && x<=100)
    {
        printf("500\n");
    }
    else
    {
        printf("2000\n");
    }
    return 0;
}
