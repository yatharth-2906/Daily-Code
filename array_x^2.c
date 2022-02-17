#include<stdio.h>

int main(void)
{
    int arr[3];
    int i,j;
    for(i=0; i<3; i++)
    {
        scanf("%d", &arr[i]);
    }
    int result[3][3];
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(j==0)
                result[i][j]=arr[i]+arr[i];
            else if(j==1)
                result[i][j]=arr[i]*arr[i];
            else if(j==2)
                result[i][j]=arr[i]*arr[i]*arr[i];
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}
