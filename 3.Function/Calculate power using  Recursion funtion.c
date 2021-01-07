#include<stdio.h>

int power(int base,int p);
int main()
{
    int base,p,result;

    printf("Enter the number: ");
    scanf("%d",&base);
    printf("Enter the Power number(Positive number): ");
    scanf("%d",&p);

    result = power(base,p);

    printf("%d^%d = %d",base,p,result);
}

int power(int base,int p)
{
    if(p!=0)
        return base*power(base,p-1);
    else
        return 1;
}
