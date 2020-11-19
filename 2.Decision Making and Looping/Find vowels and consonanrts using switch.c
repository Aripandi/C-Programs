#include<stdio.h>

int main()
{
    char ch;

    //get the value and store it in ch
    printf("Enter the character: ");
    scanf("%c",&ch);

    //use switch to find the character is vowel or consonant
    switch(ch)
    {
       case 'a':
       case 'e':
       case 'i':
       case 'o':
       case 'u':
       case 'A':
       case 'E':
       case 'I':
       case 'O':
       case 'U':
           printf("The character is Vowel!");
           break;
       default:
           printf("The Character is consonant!");
    }
    return 0;
}
