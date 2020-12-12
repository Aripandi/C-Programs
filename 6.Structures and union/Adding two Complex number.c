#include<stdio.h>

typedef struct complex{
 float real;
 float img;
}complex;

complex add(complex n1,complex n2);
int main()
{
    complex n1,n2,result;

    printf("Enter 1st Complex: \n");
    printf("Enter the 1st real and img number: ");
    scanf("%f %f",&n1.real,&n1.img);
    printf("Enter 2nd Complex: \n");
    printf("Enter the 2nd real and img number: ");
    scanf("%f %f",&n2.real,&n2.img);

    result = add(n1,n2);

    printf("Sum = %.1f + %.1fi",result.real,result.img);
    return 0;
}

complex add(complex n1,complex n2)
{
    complex temp;

    temp.real = n1.real+n2.real;
    temp.img = n1.img+n2.img;

    return(temp);
}
