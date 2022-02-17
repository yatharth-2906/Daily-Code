#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter the number of lines of pattern to be displayed: ");
    scanf("%d", &n);
    int c2=1;
    for(int i=1; i<=2*n-1; i++)
    {
        for(int k=1; k<=c2; k++)
            printf("* ");
        printf("\n");
        if(i<n)
        {
            c2++;
        }
        else
        {
            c2--;
        }
    }
}
