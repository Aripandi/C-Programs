#include<stdio.h>

int main()
{
    int n,bin[32],i,j;

    printf("Enter the decimal number: ");
    scanf("%d",&n);

    i=0;
    while(n>0)
    {
        bin[i] = n%2;
        n /= 2;
        i++;
    }
    printf("Binay number: ");
    for(j=i-1;j>=0;j--)
       printf("%d",bin[j]);

    return 0;
}

//using funtion
/*#include<stdio.h>

int binary(int n);
int main()
{
    int n;
    printf("Enter the decimal number: ");
    scanf("%d",&n);
    printf("%d",binary(n));
}

int binary(int n)
{
    int i,j,bin[50];
    i=0;

    while(n>0)
    {
        bin[i] = n%2;
        n = n/2;
        i++;
    }

    for(j=i-1;j>0;j--)
    printf("%d",bin[j]);

    return bin[j];
}*/
