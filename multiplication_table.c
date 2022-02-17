#include<stdio.h>

int main(void)
{
    int n,m;
    printf("Enter the number whose multiplication table is to be printed: ");
    scanf("%d", &n);
    printf("Enter the ending entry of the multiplication table: ");
    scanf("%d", &m);
    for(int i=1; i<=m; i++)
    {
        printf("%d multiplied by %d = %d\n",n,i,n*i);
    }
}
