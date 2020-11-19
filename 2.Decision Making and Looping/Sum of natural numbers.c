#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter the value of n(positive integer): ");
    scanf("%d",&n);

    //using for loop to add the numbers
    for(i=0;i<=n;i++)
        sum = sum+i;

    //print output
    printf("Sum of first %d natural numbers is: %d",n, sum);

    return 0;
}
