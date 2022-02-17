#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of rows of the pattern to be displayed: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=i; j++)
            printf("%c",64+j);
        printf("\n");
    }
}
