#include<stdio.h>

int main()
{
  int n,i,max = 0;
  float arr[50];

  printf("Enter the  number of array: ");
  scanf("%d",&n);

  for(i=0;i<n;i++)
  {
      printf("Enter the number%d: ",i+1);
      scanf("%f",&arr[i]);
  }

  for(i=1;i<n;i++)
  {
      if(arr[i]>max)
      max = arr[i];
  }
  printf("Largest number is: %d",max);

  return 0;
}

