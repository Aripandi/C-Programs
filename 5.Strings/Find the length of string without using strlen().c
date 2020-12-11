#include<stdio.h>

int main(){
    char s[]="Programming is fun";
    int i;

   /* printf("Enter the String: ");
    gets(s);*/

    for(i = 0 ; s[i] != '\0'; ++i);

    printf("NO.OF Strings: %d", i);
    return 0;
}
