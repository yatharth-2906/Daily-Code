#include<stdio.h>
int pattern();
int main(void)
{
    int n;
    printf("Enter the number of lines of pattern to be printed: ");
    scanf("%d", &n);
    pattern(n);
}

int pattern(int n)
{
    int k=1;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=k; j++)
            printf("*");
        printf("\n");
        k=k+2;
    }
}
