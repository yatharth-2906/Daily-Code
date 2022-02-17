#include<stdio.h>

int main(void)
{
    int n=8,sum =0,i=1;
    do
    {
        sum = sum +(n*i);
        i++;
    }while(i<=10);
    printf("The value of sum is: %d",sum);
}
