#include<stdio.h>

int main()
{
    int n,i;
    float num[100], sum = 0.0,avg;

    //get the number of arrays from user
    printf("Enter the number of elements: ");
    scanf("%d",&n);

    while(n>100 || n<1)
    {
        printf("Invalid Input! Please enter the number btw 1 and 100\n");
        printf("Enter the number of elements: ");
        scanf("%d",&n);
    }

    for(i=0;i<n;i++)
    {
        printf("Enter the number: ",i+1);
        scanf("%f",&num[i]);
        sum = sum+num[i];
    }

    avg = sum/n;
    printf("Average is: %.2f",avg);

    return 0;
}
