#include<stdio.h>

int main()
{
    char s1[50]="Programming ",s2[50]="is fun",s3[50];
    int i=0,j=0;


    //get the string
    /*printf("Enter the first String: ");
    fgets(s1,sizeof(s1),stdin);
    printf("Enter the second String: ");
    fgets(s2,sizeof(s2),stdin);*/

    printf("First String: %s\n",s1);
    printf("Second string: %s\n",s2);
    //store the first string into s3 string
    while(s1[i]!='\0')
    {
        s3[j]=s1[i];
        i++;
        j++;
    }


    //store the second string into s3 string
    i=0;
    while(s2[i]!='\0')
    {
        s3[j]=s2[i];
        i++;
        j++;
    }
    s3[j]='\0';

    //Print the string
    printf("Concatenated String: %s", s3);

    return 0;
}
