#include<stdio.h>

int main(void)
{
    int n,m;
    printf("Enter the number of rows of the array: ");
    scanf("%d", &n);
    printf("Enter the number of columns of the array: ");
    scanf("%d", &m);
    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            printf("Ënter the value of element at position(%d,%d): ",i+1,j+1);
            scanf("%d", &a[i][j]);
        }
    }
    printf("The matrix is: ");
    for(int i=0; i<n; i++)
    {
        printf("\n");
        for(int j=0; j<m; j++)
        {
            printf("%d ",a[i][j]);
        }
    }
}
