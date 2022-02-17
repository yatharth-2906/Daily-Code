#include<stdio.h>

int main(void)
{
    int n=8,sum =0,i=1;
    while(i<=10)
    {
        sum = sum +(n*i);
        i++;
    }
    printf("The value of sum is: %d",sum);
}
