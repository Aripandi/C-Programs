#include<stdio.h>

//function to get rows and columns of matrices
void getMatrix(int matrix[][10],int row,int column)
{
    printf("Enter the Element: \n");
    for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        printf("Enter a%d%d: ",i+1,j+1);
        scanf("%d",&matrix[i][j]);
    }
  }
}
void getMatrix2(int matrix2[][10],int row,int column)
{
    printf("Enter the Element: \n");
    for(int i=0;i<row;i++){
    for(int j=0;j<column;j++){
        printf("Enter b%d%d: ",i+1,j+1);
        scanf("%d",&matrix2[i][j]);
    }
  }
}


void multiplyMatrix(int first[][10],
                    int second[][10],
                    int result[][10],
                    int r1,int r2,int c1,int c2)

 {
    //function to make result  = 0

    for(int i=0;i<r1;i++){
    for(int j=0;j<c2;j++){
        result[i][j] = 0;
    }
}

//Multiplying the Matrices
    for(int i=0;i<r1;i++){
        for(int j=0;j<c2;j++){
        for(int k=0;k<c1;k++){
            result[i][j] += first[i][k]*second[k][j];
        }
      }
    }
}

void display(int result[][10],int row,int column)
{
    for(int i=0;i<row;i++)
    for(int j=0;j<column;j++){
        printf("%d ",result[i][j]);

    if(j == column-1){
        printf("\n\n");
    }
    }
}

int main()
{
    int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2;
    printf("Enter the row and column of first matrix: ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the row and column of second matrix: ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2){
        printf("Error!! Enter the elements again: \n");
        printf("Enter the row and column of first matrix: ");
        scanf("%d %d",&r1,&c1);
        printf("Enter the row and column of second matrix: ");
        scanf("%d %d",&r2,&c2);
      }


//get the matrix value
getMatrix(first ,r1 ,c1);

//get the second matrix
getMatrix2(second ,r2 ,c2);

//Multiply the matrix
multiplyMatrix(first,second,result,r1,r2,c1,c2);

//Display the result
display(result,r1,c2);

return 0 ;

}
