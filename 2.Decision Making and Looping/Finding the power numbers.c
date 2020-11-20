//using while loop
#include<stdio.h>

int main()
{
    int base,exp;
    long long result = 1;
    printf("Enter the Base Value: ");
    scanf("%d",&base);
    printf("Enter the Exponent value: ");
    scanf("%d",&exp);

    //using while to calculate power of numbers
    while(exp!=0)
    {
        result *= base;
        exp--;
    }

   printf("Answer: %lld",result);
   return 0;
}

