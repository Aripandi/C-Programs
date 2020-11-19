#include<stdio.h>

int main()
{
    int i,n,t1 = 0, t2 = 1,next_term;

    printf("Enter the number of terms: ");
    scanf("%d",&n);

    printf("Fibonacci series: ");

    for(i=1;i<=n;++i)
    {
        printf("%d, ",t1);
        next_term = t1+t2;
        t1 = t2;
        t2 = next_term;
    }

    return 0;
}
