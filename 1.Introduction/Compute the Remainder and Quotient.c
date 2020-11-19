#include<stdio.h>

int main()
{
    int dividend,divisor,remainder,quotient;

    //get the dividend and divisor value
    printf("Enter the Dividend value: ");
    scanf("%d",&dividend);
    printf("enter the divisor Value: ");
    scanf("%d",&divisor);

    //To find quotient
    quotient = dividend/divisor;

    //To find remainder
    remainder = dividend%divisor;

    //Print the Quotient and remainder
    printf("Quotient: %d\n",quotient);
    printf("Remainder: %d",remainder);
}
