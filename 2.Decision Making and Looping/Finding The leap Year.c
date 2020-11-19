#include<stdio.h>

int main()
{
    int year;

    //get the value from user and store it
    printf("Enter the year: ");
    scanf("%d",&year);

    /*Using the if and else find the leap year
    A leap year is exactly divisible by 4 except for century years (years ending with 00).
    The century year is a leap year only if it is perfectly divisible by 400.*/

    if(year%400 == 0)
        printf("%d is a leap year.\n",year);
    else if(year%100 == 0)
        printf("%d is not a leap year.\n",year);
    else if(year%4 == 0)
        printf("%d is a leap year.\n",year);
    else
        printf("%d is not a leap year.\n",year);

    return 0;
}
