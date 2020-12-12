#include<stdio.h>

struct student{
 char name[50];
 int rollno;
 float mark;
} s;

int main()
{
    printf("Enter the Information of stdents: \n");
    printf("Enter the Name: ");
    fgets(s.name,sizeof(s.name),stdin);
    printf("Enter the Rollno: ");
    scanf("%d",&s.rollno);
    printf("Enter the Mark: ");
    scanf("%f",&s.mark);

    printf("Displaying the Information of student: \n");
    printf("Name: %s",s.name);
    printf("Rollno: %d\n",s.rollno);
    printf("Mark: %.1f",s.mark);

    return 0;
}
