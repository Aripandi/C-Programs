#include<stdio.h>

struct time{
  int hours;
  int minutes;
  int seconds;
};

struct time start,stop,diff;

void differenceOfTimePeriod(struct time t1,struct time t2,struct time *diff);
int main()
{
    // Enter for 1st timing
    printf("Enter start time: \n");
    printf("Enter hours,minutes and seconds: ");
    scanf("%d %d %d",&start.hours,&start.minutes,&start.seconds);

    //Enter for 2nd timing
    printf("enter stop time: \n");
    printf("Enter hours,minutes and seconds: ");
    scanf("%d %d %d",&stop.hours,&stop.minutes,&stop.seconds);

    //finding difference
    differenceOfTimePeriod(start,stop,&diff);

    //print the values
    printf("The Difference: %d:%d:%d - ",start.hours,start.minutes,start.seconds);
    printf("%d:%d:%d ",stop.hours,stop.minutes,stop.seconds);
    printf("= %d:%d:%d\n",diff.hours,diff.minutes,diff.seconds);

    return 0;
}

void differenceOfTimePeriod(struct time start,struct time stop,struct time *diff)
{
    while(stop.seconds>start.seconds)
    {
        stop.seconds--;
        start.seconds += 60;
    }

    diff -> seconds = start.seconds-stop.seconds;

    while(stop.minutes>start.minutes)
    {
        stop.minutes--;
        start.minutes += 60;
    }

    diff -> minutes = start.minutes-stop.minutes;

    diff -> hours = start.hours-stop.hours;
}
