#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of line of the pattern to be printed: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=n-i; j++)
            printf(" ");
        for(int k=1; k<=(2*i)-1; k++)
        {
            if(i!=n)
            {
            if(k==1 || k==(2*i)-1)
                printf("*");
            else
                printf(" ");
            }
            else
                printf("*");
        }
        printf("\n");
    }
}
