#include <stdio.h>
#include<stdlib.h>

void input(int **a, int row, int col);

void output(int **a, int row, int col);

int main()
{
    int **arr;
    int n,m;
    printf("Enter the number of rows of the matrix: ");
    scanf("%d", &n);
    printf("Enter the number of columns of the matrix: ");
    scanf("%d", &m);
    arr = (int **)malloc(sizeof(int)*n);
    input(arr,n,m);
    output(arr,n,m);
}

void input(int **a, int row, int col)
{
    for(int i=0; i<row; i++)
    {
        a[i]=(int*)malloc(sizeof(int)*col);
        for(int j=0; j<col; j++)
        {
            printf("Enter the value of element of position(%d,%d): ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
}

void output(int **a, int row, int col)
{
    printf("The matrix is: ");
    for(int i=0; i<row; i++)
    {
        printf("\n");
        for(int j=0; j<col; j++)
        {
            printf("%d ", a[i][j]);
        }
    }
}
