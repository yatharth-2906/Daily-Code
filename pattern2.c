#include<stdio.h>

int main(void)
{
    int n=1,lines;
    printf("Enter the number of lines of pattern to be printed: ");
    scanf("%d", &lines);
    for(int i=1; i<=lines; i++)
    {
        for(int j=1; j<=lines-i; j++)
            printf(" ");
        for(int k=1; k<=n; k++)
            printf("*");
        n = n+2;
        printf("\n");
    }
}
