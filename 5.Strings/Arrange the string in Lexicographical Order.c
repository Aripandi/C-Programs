#include<stdio.h>
#include<string.h>

int main()
{
    char a[5][50],temp[50];
    int i,j,n;

    printf("Enter the No.of.Strings: ");
    scanf("%d",&n);

    //get the value in string
    printf("Enter the %d strings: ",n);
    for(i=0;i<=n;i++)
    {
        //scanf("%s",&a[i]);
        fgets(a[i],sizeof(a[i]),stdin);
    }

    //Arrage string in lexocographical order
    for(i=0;i<=n;i++){
        for(j=i+1;j<=n;j++){
            if(strcmp(a[i],a[j])>0){
                strcpy(temp,a[i]);
                strcpy(a[i],a[j]);
                strcpy(a[j],temp);
            }
        }
    }

    //Print the strings
    printf("Arranged strings: ");
    for(i=0;i<=n;i++){
        fputs(a[i],stdout);
    }

    return 0;
}
