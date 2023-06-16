// #include <stdio.h>

// int main() {
//     int initial_hour, initial_minute, final_hour, final_minute;
//     int duration, hours, minutes;

//     // Read input
//     scanf("%d %d %d %d", &initial_hour, &initial_minute, &final_hour, &final_minute);

//     // Calculate duration
//     if (initial_hour == final_hour && initial_minute == final_minute) {
//         duration = 24 * 60; // special case: game lasts 24 hours
//     } else {
//         duration = ((final_hour * 60 + final_minute) - (initial_hour * 60 + initial_minute) + 24 * 60) % (24 * 60);
//     }

//     // Convert duration to hours and minutes
//     hours = duration / 60;
//     minutes = duration % 60;

//     // Print output
//     printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);

//     return 0;
// }

// Practice 1
#include<stdio.h>
int main()
{
  int h1,m1,h2,m2,duration,hours,minutes;
  scanf("%d %d %d %d", &h1,&m1,&h2,&m2);
  if (h1==h2 && m1==m2)
  {
    duration=24*60;
  }else
  {
    duration=((h2*60+m2)-(h1*60+m1)+24*60)%(24*60);
  }
  hours=duration/60;
  minutes=duration%60;
  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", hours, minutes);
  return 0;
}
