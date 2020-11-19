#include<stdio.h>

int main()
{
    char c;
    printf("Enter U/I to show Upper/Lowercase Character: ");
    scanf("%c",&c);

    if(c=='U' || c=='u')
     {
       printf("Uppercase: ");
       for(c='A';c<='Z';c++)
       printf("%c ",c);
     }
    else if(c=='L' || c=='l')
    {
       printf("Lowercase: ");
       for(c='a';c<='z';c++)
       printf("%c ",c);
    }
    else{
        printf("Please enter a Valid character!");
    }
}
