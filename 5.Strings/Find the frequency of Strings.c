#include<stdio.h>

int main()
{
    char str[100],ch;
    int count,i;

    printf("Enter the string: ");
    gets(str);
    printf("Enter the letter to find frequency: ");
    ch = getchar();

    for(i=0;str[i]!='\0';i++)
    {
      if(str[i]==ch)
      count++;
    }

    printf("%c Repeat %d times",ch,count);

    return 0;
}
