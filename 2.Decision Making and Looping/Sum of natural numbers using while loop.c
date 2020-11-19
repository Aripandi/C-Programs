#include<stdio.h>

int main()
{
    int n,count,sum=0;

    printf("Enter the value of n(positive integer): ");
    scanf("%d",&n);

    count = 1;

    while(count<=n)
    {
        sum = sum+count;
        count++;
    }
    printf("sum of first %d natural number is= %d",n, sum);
    return 0;
}
