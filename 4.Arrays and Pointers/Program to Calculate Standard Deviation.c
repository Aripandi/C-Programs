#include<stdio.h>
#include<math.h>

float calculateSD(float data[]);
int main()
{
    int i;
    float data[10];
    printf("Enter the 10 Elements: ");
    for(i=0;i<10;i++)
        scanf("%f",&data[i]);
    printf("The Standard Deviation  = %.6f",calculateSD(data));
    return 0;
}

float calculateSD(float data[])
{
    int i;
    float sum = 0.0,sd = 0.0,mean;

    for(i=0;i<10;i++){
     sum += data[i];
    }
    mean = sum/10;
    for(i=0;i<10;i++)
    sd += pow(data[i]-mean,2);
    return sqrt(sd/10);
}
