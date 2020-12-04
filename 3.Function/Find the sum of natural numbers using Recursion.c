#include<stdio.h>

int addinteger();
int main()
{
    int num;
    printf("Enter the Positive Integer: ");
    scanf("%d",&num);
    printf("Sum of integers: %d",addinteger(num));
    return 0;
}

int addinteger( int n)
{
    if(n!=0)
        return n + addinteger(n-1);
    else
        return n;
}
