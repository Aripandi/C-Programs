#include<stdio.h>
#include<math.h>

int main()
{
    int num,i,sum = 0,digits=0,temp;
    printf("Enter the number: ");
    scanf("%d",&num);

    for(i=num;i>0;i=i/10)
    {
        digits++;
        temp = num;
    }

    while(num>0)
    {
        sum = sum+pow(num%10,digits);
        num = num/10;
    }

    if(temp == sum)
        printf("%d Armstrong Number",sum);
    else
        printf("Not a Armstrong Number");

    return 0;
}
