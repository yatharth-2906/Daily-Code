#include<stdio.h>
int sum_natural_number(int n);

int main(void)
{
    int n;
    printf("Enter the number of natural numbers whose sum is to be added: \n");
    scanf("%d", &n);
    printf("The sum of natural numbers upto %d is: %d",n,sum_natural_number(n));
}

int sum_natural_number(int n)
{
    int sum =0;
    for(int i=n; i>=1; i--)
        sum = n + sum_natural_number(n-1);
    return sum;
}

