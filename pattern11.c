#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of lines of pattern to be displayed: ");
    scanf("%d", &n);
    int c=1;
    for(int i=1; i<=2*n-1; i++)
    {
        for(int j=1; j<=c; j++)
            printf("%d",j);
        printf("\n");
        if(i<n)
            c++;
        else
            c--;
    }
}
