#include<stdio.h>

void Cyclicswap(int *a,int  *b,int  *c);
int main()
{
    int a,b,c;

    //Get the value from user
    printf("Enter the Values of a,b and c: ");
    scanf("%d  %d %d",&a,&b,&c);

    //Print the  values before swap
    printf("Values before swapping: \nA=%d B=%d and C=%d\n",a,b,c);

    //using the call by reference
    Cyclicswap(&a,&b,&c);
    printf("Value after swapping: \nA=%d B=%d and C=%d",a,b,c);
}

void Cyclicswap(int *n1,int  *n2,int  *n3)
{
    int temp;

    //swap  the values
    temp = *n2;
    *n2 = *n3;
    *n3 = *n1;
    *n1 = temp;
}
