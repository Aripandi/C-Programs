#include<stdio.h>
#include<stdlib.h>

struct course{
   char subject[30];
   int mark;
};

int main()
{
    struct course *ptr;
    int i,noOfRecords;
    printf("Enter the No of Records: ");
    scanf("%d",&noOfRecords);

    //memory allocation to noOfRecords
    ptr = (struct course *)malloc(noOfRecords * sizeof(struct course));
    for(i=0;i<noOfRecords;i++){
        printf("Enter the subject and mark: \n");
        scanf("%s %d",&(ptr+i)->subject,&(ptr+i)->mark);
    }

    //Display the records
    printf("Displaying the Records: \n");
    for(i=0;i<noOfRecords;i++)
        printf("%s\t%d\n",(ptr+i)->subject,(ptr+i)->mark);

    return 0;
}
