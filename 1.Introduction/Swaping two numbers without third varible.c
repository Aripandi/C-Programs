#include<stdio.h>

int main()
{
    int a,b;

    printf("Enter A: \n");
    scanf("%d",&a);
    printf("Enter B: \n");
    scanf("%d",&b);;

    a = a+b;
    b = a-b;
    a = a-b;

    printf("After Swaping:\nA: %d \nB: %d ",a,b);

    return 0;
}
