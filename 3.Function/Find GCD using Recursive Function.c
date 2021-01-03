#include<stdio.h>

int findGCD(int a,int b);
int main()
{
    int a,b,gcd;
    printf("Enter the two numbers: ");
    scanf("%d %d",&a,&b);

    gcd = findGCD(a,b);
    printf("GCD of %d and %d = %d",a,b,gcd);

    return 0;
}

int findGCD(int a,int b)
{
    if(a==0)
        return b;
    findGCD(b%a,a);
}
