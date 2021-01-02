#include<stdio.h>
#include<math.h>

int checkPrimeNumber(int num);
int checkArmstrongNumber(int n);
int main()
{
    int num,flag;
    printf("Enter the number: ");
    scanf("%d",&num);

    //Check for prime number
    flag = checkPrimeNumber(num);
    if(flag==1)
        printf("%d is Prime Number\n",num);
    else
        printf("%d is Not a prime number\n",num);

    //Check for Armstrong number
    flag = checkArmstrongNumber(num);
    if(flag==1)
        printf("%d is Armstrong number\n",num);
    else
        printf("%d is not a Armstrong number\n",num);

    return 0;
}

int checkPrimeNumber(int num)
{
 int i,flag=1,squareRoot;

 //computing squareRoot
 squareRoot = sqrt(num);
 for(i=2;i<=squareRoot;i++)
 {
     if(num%i==0){
        flag = 0;
     break;
     }
 }
 return flag;
}

int checkArmstrongNumber(int n)
{
 int i,digits=0,sum=0,flag=1,temp;
 for(i=n;i>0;i=i/10)
 {
     digits++;
     temp = n;
 }

 while(n>0)
 {
     sum =sum+pow(n%10,digits);
     n = n/10;
 }
 if(temp==sum)
    flag=1;
 else
    flag=0;

 return flag;
}
