#include<stdio.h>

int main(void)
{
    int c=1;
    for(int i=1; i<=9; i++)
    {
        for(int j=1; j<=c; j++)
            printf("* ");
        if(i<5)
            c++;
        else
            c--;
        printf("\n");
    }
}
