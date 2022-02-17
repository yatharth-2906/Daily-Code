#include<stdio.h>

int main(void)
{
    int n,c=0;
    printf("Enter the number of lines of the pattern to be printed: ");
    scanf("%d", &n);
    for(int i=65; c<n; i++)
    {
        for(int j=0; j<=c; j++)
            printf("%c",i);
        c++;
        printf("\n");
    }
}
