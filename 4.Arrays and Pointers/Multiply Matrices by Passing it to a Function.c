#include<stdio.h>

void getMatrix(int first[][10],int second[][10],int r1,int r2,int c1,int c2);
void  multiMatrix(int first[][10],int second[][10],int mul[][10],int r1,int r2,int c1,int c2);
void DisplayMatrix(int mul[][10],int  r1,int c2);

int  main()
{
    int first[10][10],second[10][10],mul[10][10],r1,r2,c1,c2;

    printf("Enter  the row and column of first Matrix: ");
    scanf("%d %d",&r1,&c1);

    printf("Enter  the row and column of second Matrix: ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("Error!Enter the Value again: \n");

        printf("Enter  the row and column of first Matrix: ");
        scanf("%d %d",&r1,&c1);

       printf("Enter  the row and column of second Matrix: ");
       scanf("%d %d",&r2,&c2);
    }

   //get the matrix
   getMatrix(first,second,r1,r2,c1,c2);

   //multiply th matrix
   multiMatrix(first,second,mul,r1,r2,c1,c2);

   //Display the matrix
   DisplayMatrix(mul,r1,c2);

   return 0;

}

void getMatrix(int first[][10],int second[][10],int r1,int r2,int c1,int c2)
{
    int i,j;
    printf("Enter the elements in Matrix 1: \n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("Enter the Elements in a%d%d: ",i+1,j+1);
            scanf("%d",&first[i][j]);
        }
    }

    printf("Enter the elements in Matrix 2: \n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("Enter the Elements in b%d%d: ",i+1,j+1);
            scanf("%d",&second[i][j]);
        }
    }
}

void  multiMatrix(int first[][10],int second[][10],int mul[][10],int r1,int r2,int c1,int c2)
{
    int  i,j,k;
    //initialize mul = 0
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            mul[i][j] = 0;
        }
    }

    //multiply first and second and store it in mul
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c2;j++)
        {
            for(k=0;k<c1;k++)
            {
                mul[i][j] += first[i][k]*second[k][j];
            }
        }
    }
}

void DisplayMatrix(int mul[][10],int r1,int c2)
{
    int  i,j;
    printf("Multiplied Matrices: \n");
     for(i=0;i<r1;i++)
     {
         for(j=0;j<c2;j++)
         {
             printf("%d ",mul[i][j]);
             if(j == c2-1)
             printf("\n\n");
         }
     }
}

