#include <stdio.h>
int main()
{
  double money,tax;
  scanf("%lf", &money);
  if (money>0 && money<=2000)
  {
    printf("Isento\n");
  }
  else if (money>2000 && money<=3000)
  {
    tax=(money-2000)*0.08;
    printf("R$ %.2lf\n", tax);
  }
  else if (money>3000 && money<=4500)
  {
    tax=((money-3000)*0.18+(1000*0.08));
    printf("R$ %.2lf\n", tax);
  }
  else if (money>4500)
  {
    tax=((money-4500)*0.28+(1500*0.18)+(1000*0.08));
    printf("R$ %.2lf\n", tax);
  }
  return 0;
}