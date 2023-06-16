#include <stdio.h>
#include <time.h>

int main() {
  int birth_year;
  printf("Enter your birth year: ");
  scanf("%d", &birth_year);

  time_t current_time = time(NULL);
  struct tm *time_info = localtime(&current_time);
  int current_year = time_info->tm_year + 1900;

  int age = current_year - birth_year;
  printf("Your age is: %d\n", age);

  return 0;
}
