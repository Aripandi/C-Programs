#include<stdio.h>

main()
{
    float num1,num2,mul;

    printf("Enter the Number1: ");
    scanf("%f",&num1);
    printf("Enter the Number2: ");
    scanf("%f",&num2);

    mul = num1*num2;

    printf("By multiplying the %.2f and %.2f we get: %.2f",num1,num2,mul);
}
