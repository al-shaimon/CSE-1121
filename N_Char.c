#include <stdio.h>

int main() {
  char alpha;
  scanf("%c", &alpha);
  if (alpha >= 'a' && alpha <= 'z')
  {
    alpha-=32;
  }
  else if(alpha >= 'A' && alpha <= 'Z'){
    alpha+=32;
  }
  printf("%c", alpha);
  return 0;
}