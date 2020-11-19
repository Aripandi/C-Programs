#include<stdio.h>

int main()
{
    int num;
    printf("Enter the Value: ");
    scanf("%d",&num);

    //check a is odd or even using if
    if (num%2==0)
      printf("The Number is Even");
    else
      printf("The Number is odd");

    return 0;
}
