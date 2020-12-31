#include<stdio.h>

int main()
{
    int n,i,IsPrime = 0;
    printf("Enter the number: ");
    scanf("%d",&n);

    for(i=2;i<=n/2;i++)
    {
        //condition for not a prime
        if(n%i == 0)
        {
            IsPrime = 1;
            break;
        }
    }

    if(n==1)
        printf("Neither a prime nor a Composite!");
    else
    {
        if(IsPrime == 1)
            printf("%d is not a prime",n);
        else
            printf("%d is a prime",n);
    }

    return 0;
}
