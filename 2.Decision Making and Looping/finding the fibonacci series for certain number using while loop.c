#include<stdio.h>

int main()
{
    int f1=0,f2=1,f3,n;

    printf("Enter the positive integer: ");
    scanf("%d",&n);

    printf("Fibonacci series: %d %d ",f1,f2);
    f3 = f1+f2;

    while(f3<=n)
    {
        printf("%d ",f3);

        f1 = f2;
        f2 = f3;

        f3 = f1+f2;
    }

    return 0;
}
