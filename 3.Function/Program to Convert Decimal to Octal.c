#include<stdio.h>

int convertOctal(int deciNumber);
int main()
{
    int deciNumber;

    printf("Enter the Decimal Number: ");
    scanf("%d",&deciNumber);

    printf("%d decimal Number = %d Octal Number",deciNumber,convertOctal(deciNumber));

    return 0;
}

int convertOctal(int deciNumber)
{
    int octal = 0,i=1;
    while(deciNumber != 0)
    {
        octal += (deciNumber%8)*i;
        deciNumber /= 8;
        i *= 10;
    }
    return octal;
}
