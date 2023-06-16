#include <stdio.h>

void minMax(int n,int num,int min,int max)
{
  for(int i=1; i<n; i++) {
        scanf("%d", &num);
        if(num < min) {
            min = num;
        }
        if(num > max) {
            max = num;
        }
    }
    printf("%d %d", min, max); 
}

int main() {
    int n, num, min, max;
    scanf("%d", &n);
    scanf("%d", &num);
    min = max = num;
    minMax(n,num,min,max);
}
