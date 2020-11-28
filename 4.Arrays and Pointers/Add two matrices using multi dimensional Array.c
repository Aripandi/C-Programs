#include<stdio.h>

int main()
{
    int r,c,a[100][100],b[100][100],sum[100][100],i,j;

    //get the value of rows and columns
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    printf("Enter the number of columns: ");
    scanf("%d",&c);

    //get and store the value in the 1st matrix
    printf("Enter the elements in 1st matrix: \n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++){
          printf("Enter the element a%d%d: ",i+1,j+1);
          scanf("%d",&a[i][j]);
    }

     //get and store the value in the 2nd matrix
    printf("Enter the Element in 2nd Matrix: \n");
    for(i=0;i<r;i++)
       for(j=0;j<c;j++){
         printf("Enter the element b%d%d: ",i+1,j+1);
         scanf("%d",&b[i][j]);
    }

    //now add the matrices and store in sum array
    for(i=0;i<r;i++)
      for(j=0;j<c;j++){
        sum[i][j] = a[i][j]+b[i][j];
    }

    //Print the added matrices

    printf("The Matrices are: \n");
    for(i=0;i<r;i++)
      for(j=0;j<c;j++){
        printf("%d ",sum[i][j]);
        if(j == c-1){
        printf("\n\n");
       }
    }
   return 0;
}
/*#include <stdio.h>
int main() {
    int r, c, a[100][100], b[100][100], sum[100][100], i, j;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);

    printf("\nEnter elements of 1st matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &a[i][j]);
        }

    printf("Enter elements of 2nd matrix:\n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("Enter element a%d%d: ", i + 1, j + 1);
            scanf("%d", &b[i][j]);
        }

    // adding two matrices
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            sum[i][j] = a[i][j] + b[i][j];
        }

    // printing the result
    printf("\nSum of two matrices: \n");
    for (i = 0; i < r; ++i)
        for (j = 0; j < c; ++j) {
            printf("%d   ", sum[i][j]);
            if (j == c - 1) {
                printf("\n\n");
            }
        }

    return 0;
}*/
