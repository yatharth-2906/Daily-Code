#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of lines of pattern to be printed: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            printf("%d",j);
        for(int k=1; k<=2*n-2*i; k++)
            printf(" ");
        for(int l=i; l>0; l--)
            printf("%d",l);
        printf("\n");
    }
}
