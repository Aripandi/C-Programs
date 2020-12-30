#include<stdio.h>
#include<math.h>

long long convert(int oct);
int main()
{
    int oct;
    printf("Enter the Octal Number: ");
    scanf("%d",&oct);
    printf("%d in Octal = %lld in Binary",oct,convert(oct));
    return 0;
}

long long convert(int oct)
{
  int dec,i=0;
  long long bin=0;

  //Convert octal to decimal
  while(oct!=0){
    dec += (oct % 10) * pow(8,i);
    i++;
    oct/=10;
  }
  i=1;

  //Convert decimal to binary
  while(dec!=0)
  {
      bin += (dec % 2) * i;
      dec /= 2;
      i *= 10;
  }
  return bin;
}
