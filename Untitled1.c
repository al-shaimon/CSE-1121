#include <stdio.h>
int main()
{
    double money, restmoney;
    scanf("%lf", &money);
    printf("%.2lf\n", money);
    printf("%.2lf nota(s) de R$ 100,00\n", money/100);
    restmoney = money%100;
    printf("%.2lf nota(s) de R$ 50,00\n", restmoney/50);
    restmoney = restmoney%50;
    printf("%.2lf nota(s) de R$ 20,00\n", restmoney/20);
    restmoney = restmoney%20;
    printf("%.2lf nota(s) de R$ 10,00\n", restmoney/10);
    restmoney = restmoney%10;
    printf("%.2lf nota(s) de R$ 5,00\n", restmoney/5);
    restmoney = restmoney%5;
    printf("%.2lf nota(s) de R$ 2,00\n", restmoney/2);
    restmoney = restmoney%2;
    printf("%.2lf nota(s) de R$ 1,00\n", restmoney/1);
    return 0;
}
