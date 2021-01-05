#include<stdio.h>

struct distance{
  int feet;
  float inch;
}d1,d2,result;

int main()
{
    //Get the value of 1st distance
    printf("Enter 1st Distance: \n");
    printf("Enter the Feet: ");
    scanf("%d",&d1.feet);
    printf("Enter the Inch: ");
    scanf("%f",&d1.inch);

    //Get the value of 2nd distance
    printf("Enter 2nd Distance: \n");
    printf("Enter the Feet: ");
    scanf("%d",&d2.feet);
    printf("Enter the Inch: ");
    scanf("%f",&d2.inch);

    //Add the Distance
    result.feet = d1.feet+d2.feet;
    result.inch = d1.inch+d2.inch;

    //if inch is greater than 12 convert it into feet
    while(result.inch>=12.0)
    {
        result.inch = result.inch-12.0;
        result.feet++;
    }

    printf("Sum of Distance = %d'-%.1f\"",result.feet,result.inch);

    return 0;
}
