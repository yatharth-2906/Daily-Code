#include<stdio.h>

int main(void)
{
    int n=8,sum =0;
    for(int i=1; i<=10; i++)
    {
        sum = sum +(n*i);
    }
    printf("The value of sum is: %d",sum);
}
