#include<stdio.h>

int main(void)
{
    int n;
    scanf("%d", &n);
    int arr[n][n];
    int i,j,d1=0,d2=0,diff;
    for(i=0; i<n; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", &arr[i][j]);
            if(i==j)
                d1 = d1+arr[i][j];
            if(i+j==n-1)
                d2 = d2+arr[i][j];
        }
    }
    if(d1>d2)
        diff = d1-d2;
    else
        diff = d2-d1;
    printf("%d", diff);
}
