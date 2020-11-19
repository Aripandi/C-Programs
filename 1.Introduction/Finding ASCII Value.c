#include<stdio.h>

int main()
{
    char a;
    //get  the value from user and store it
    printf("Enter the Value: ");
    scanf("%c",&a);

    //print the char value as int to print its ACSII Value
    printf("ASCII Value of %c: %d",a,a);
}
