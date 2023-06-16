#include <stdio.h>
int main()
{
    int a,b,x,y,z;
    scanf ("%d%d", &a, &b);
    if(a==b){
        x=24-a+b;
        printf("O JOGO DUROU %d HORA(S)\n",x);
    }
    else if(a<=b){
        y=b-a;
        printf ("O JOGO DUROU %d HORA(S)\n",y);
    }
    else{
        z=24-a+b;
        printf("O JOGO DUROU %d HORA(S)\n",z);
    }
    return 0;
}
