#include<stdio.h>
#include<math.h>

int Decimal(long num);
int main()
{
    long num;

    printf("Enter the number: ");
    scanf("%ld",&num);
    printf("Decimal value of %ld is %ld",num,Decimal(num));
}

int Decimal(long num)
{
  int i=0,rem,dec=0;
    while(num>0)
    {
        rem=num%10;
        dec = dec+rem*pow(2,i);
        i++;
        num=num/10;
    }
    return dec;
}
