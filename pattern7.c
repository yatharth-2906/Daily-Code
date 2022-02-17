#include<stdio.h>

int main(void)
{
    int c1,c2;
    for(int i=1; i<=11; i++)
    {
        if(i<=6)
        {
            c1=6-i;
            c2=2*i-1;
        }
        else
        {
            c1++;
            c2 = c2-2;
        }
        for(int j=1; j<=c1; j++)
            printf(" ");
        for(int k=1; k<=c2; k++)
        {
            if(k==1||k==c2)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
}
