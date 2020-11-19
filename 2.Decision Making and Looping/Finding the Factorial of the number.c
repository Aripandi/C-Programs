#include<stdio.h>

int main()
{
    int n,i;
    unsigned long long fact= 1;
    printf("Enter the number to find factorial: ");
    scanf("%d",&n);

    if (n<0)
        printf("Error!,Enter the positive number!");
    else{
        for(i=1;i<=n;i++)
        {
            fact *=i;
        }
        printf("Factorial of %d is %llu",n,fact);
    }
    return 0;
}
