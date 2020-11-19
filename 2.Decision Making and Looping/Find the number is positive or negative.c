#include<stdio.h>

int main()
{
    int num;

    //get the input from user
    printf("Enter the number: ");
    scanf("%d",&num);

    //use if to check whether the number is positive or negative

    if(num>0)
        printf("%d is a positive number",num);
    else if(num==0)
        printf("Entered number is Zero!");
    else
        printf("%d is negative number",num);

    return 0;
}
