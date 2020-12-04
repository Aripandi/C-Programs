#include<stdio.h>

long int factNumber(int n);
int main()
{
    int num;
    printf("Enter the Numbers: ");
    scanf("%d",&num);
    printf("Factorial of numbers: %d",factNumber(num));

    return 0;
}

long int factNumber(int n)
{
  if(n>=1)
        return n*factNumber(n-1);
  else
    return 1;
}
