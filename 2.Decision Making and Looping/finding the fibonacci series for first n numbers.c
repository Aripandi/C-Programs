#include<stdio.h>

int main()
{
    int n,i;
    int f1,f2,f3;

    printf("How many numbers to be displayed in Fibonacci series from 3: ");
    scanf("%d", &n);

    f1 = f2 = 1;

    printf("%d %d ",f1,f2);

    for(i=3;i<=n;i++)
    {
        f3 = f1+f2;
        printf("%d ",f3);

        //swifting numbers
        f1=f2;
        f2=f3;
    }

    return 0;
}
