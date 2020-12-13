#include<stdio.h>

struct Student{
  char name[50];
  int rollno;
  float mark;
}s[10];

int main()
{
    int i;
    //Storing information
    printf("Enter the student information:\n");
    for(i=0;i<5;i++)
    {
       s[i].rollno=i+1;
       printf("For Rollno %d\n",s[i].rollno);
       printf("Enter the Name: ");
       scanf("%s",&s[i].name);
       printf("Enter the mark: ");
       scanf("%f",&s[i].mark);
    }

    //Displaying the Information
    printf("displaying the Information: \n\n");
    for(i=0;i<5;i++)
    {
      printf("Roll number: %d\n",i+1);
      printf("Name: ");
      puts(s[i].name);
      printf("Mark %.2f: \n",s[i].mark);
    }
    return 0;
}
