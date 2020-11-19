#include<stdio.h>

int main()
{
    double n1,n2,n3,n4;
    //get the values and store it
    printf("Enter the four numbers: ");
    scanf("%lf %lf %lf %lf",&n1,&n2,&n3,&n4);

    //use if to check the largest number
    if(n1>n2 && n1>n3 &&n1>n4)
        printf("%.2lf is greater",n1);
    if(n2>n1 && n2>n3 &&n2>n4)
        printf("%.2lf is greater",n2);
    if(n3>n1 && n3>n2 &&n3>n4)
        printf("%.2lf is greater",n3);
    if(n4>n1 && n4>n2 &&n4>n3)
        printf("%.2lf is greater",n4);
}
