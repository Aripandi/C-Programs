#include<stdio.h>

int main()
{
    int n;
    int count = 0;
    printf("Enter the Integer: ");
    scanf("%d",&n);

    while(n!=0)
    {
        n = n/10;
        count++;
    }

    printf("No.of.digits: %d",count);

}
