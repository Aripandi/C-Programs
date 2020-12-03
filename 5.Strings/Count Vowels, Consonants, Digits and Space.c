#include<stdio.h>

int main()
{
    char line[100];
    int vowels,consonant,digits,space;
    vowels = consonant = digits = space  = 0;

    //get the string
    printf("Enter the String: ");
    fgets(line,sizeof(line),stdin);

    for(int i=0;line[i]!='\0';i++){
      if(line[i] == 'a'|| line[i] == 'e'|| line[i] == 'i'||
         line[i] == 'o'|| line[i] == 'u'|| line[i] == 'A'||
         line[i] == 'E'|| line[i] == 'I'|| line[i] == 'O'||
         line[i] == 'U'){
                  vowels++;
                }
    else if((line[i] >= 'A' && line[i] <= 'z') || (line[i] >= 'a' && line[i] <= 'z' )){
     consonant++;
    }
    else if(line[i] >= '0' && line[i]<= '9'){
         digits++;
    }
    else if(line[i] == ' '){
         space++;
    }
    }

    //Print the value
    printf("Vowels: %d\n",vowels);
    printf("Consonant: %d\n",consonant);
    printf("Digits: %d\n",digits);
    printf("Space: %d\n",space);
}

