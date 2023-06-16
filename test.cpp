#include <stdio.h>
int main ()
{
  int input;
  scanf("%d", &input);
  printf("%d%c", input, input);
  if(input == 0){
    printf("Zero\n");
  }
  else if(input<0){
    printf("Negative\n");
  }
  else if(input>0){
    printf("Positive\n");
  }
  else{
    printf("Others\n");
  }
  return 0;
}