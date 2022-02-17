#include<stdio.h>

int main(void)
{
    int y;
    float i;
    scanf("%d", &y);
    for(int j=1; j<=y; j++)
    {
        for(float x=5.5; x<=7.5; x = x+0.5)
        {
            i =2 + (j+(0.5*x));
            printf("y=%d, x = %.2f and i = %.2f \n",j,x,i);
        }
    }
}

