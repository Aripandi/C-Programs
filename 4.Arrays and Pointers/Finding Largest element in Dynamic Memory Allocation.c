#include<stdio.h>
#include<stdlib.h>

int main()
{
    int num,i;
    float *data;

    printf("Enter the number: ");
    scanf("%d",&num);

    data = (float *)calloc(num,sizeof(float));

    //get and store data
    for(i=0;i<num;i++){
        printf("Enter the element %d: ",i+1);
        scanf("%f",data+i);
    }

    //find the largest number
    for(i=1;i<num;i++){
    if(*data<*(data+i))
        *data=*(data+i);
    }

    //print the largest number
    printf("Largest number: %.2f",*data);

    return 0;
}
