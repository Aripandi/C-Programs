#include<stdio.h>

int main()
{
    float first,second,temp;

    //get the first and second value
    printf("Enter the First Value: ");
    scanf("%f",&first);
    printf("Enter the Second value: ");
    scanf("%f",&second);

    //swap first value to temp
    temp = first;

    //swap second value to first
    first = second;

    //swap temp value to second
    second = temp;

    //print the swapped values
    printf("After swapping, First value: %.2f\n",temp);
    printf("After swapping, Second value: %.2f\n",first);
}
