#include<stdio.h>
#include<math.h>

int convertDecimal(int octal);
int main()
{
    int octal;
    printf("Enter the Octal n Number: ");
    scanf("%d",&octal);

    printf("%d Octal Number = %d Decimal Number",octal,convertDecimal(octal));

    return 0;
}

int convertDecimal(int octal)
{
    int decimal,i=0;

    while(octal!=0)
    {
        decimal += (octal%10)*pow(8,i);
        i++;
        octal/=10;
    }
    i = 1;

    return decimal;
}
