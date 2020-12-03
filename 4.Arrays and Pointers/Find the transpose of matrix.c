#include<stdio.h>

int main()
{
    int  a[50][50], transpose[50][50],r,c,i,j;

    //get the rows and columns
    printf("Enter the Rows and columns: ");
    scanf("%d %d",&r,&c);

    //get the value in matrix elements
    printf("Enter the matrix elements: \n");
    for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        printf("Enter the element a%d%d: ",i+1,j+1);
        scanf("%d",&a[i][j]);
    }

    //Print the value
    for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        printf("%d ",a[i][j]);
        if(j == c-1)
            printf("\n\n");
    }

    //Find the Transpose of matrix
    for(i=0;i<r;i++)
    for(j=0;j<c;j++){
        transpose[j][i] = a[i][j];
    }

    //print the transpose of matrix
    printf("Transpose of Matrix: \n");
    for(i=0;i<c;i++)
    for(j=0;j<r;j++){
        printf("%d ",transpose[i][j]);
    if(j==r-1){
        printf("\n\n");
    }
    }
}
