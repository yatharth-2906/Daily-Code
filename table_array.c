#include<stdio.h>

int main(void)
{
    int n,m;
    printf("Enter the number of digits whose multiplication table is to be printed: ");
    scanf("%d", &n);
    printf("Enter the ending number till which the multiplication table is to be printed: ");
    scanf("%d", &m);
    int a[n][m],i,j;
    for(i=0; i<n; i++)
    {
        printf("Enter the digit %d whose multiplication table is to be printed: ",i+1);
        scanf("%d", &a[i][0]);
    }
    for(i=0; i<n; i++)
    {
        printf("Multiplication table of %d :\n",a[i][0]);
        for(j=0; j<m; j++)
        {
            a[i][j] = a[i][0]*(j+1);
            printf("%d multiplied by %d  = %d\n",a[i][0],j+1,a[i][j]);
        }
    }
}
