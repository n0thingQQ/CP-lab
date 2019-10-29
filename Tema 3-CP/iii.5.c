#include<stdio.h>
#include<stdlib.h>
#include<string.h>
    struct date { char month[20];
                  int day;
                  char weekday[20];
                  int year
                };
    struct time {   int hours;
                    int minutes;
                    int seconds;
                };
    struct date_and_time {
                           struct date _date_;
                           struct time _time_;
                        };
    typedef struct  {int hours;
                        int minutes;
                        int seconds;
                        }Time;

int main()
{

     Time a ;
    a.hours = 6;
    a.minutes = 15;
    a.seconds = 21 ;
    printf("%i hours %i minutes %i seconds\n" ,a.hours,a.minutes,a.seconds);
    printf("%i hours %i minutes %i seconds" ,a.hours,a.minutes,a.seconds);









return 0;
}
