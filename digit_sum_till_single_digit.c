#include<stdio.h>

int digits_sum(unsigned long long int x);

int main(void)
{
    unsigned long long int n;
    printf("Enter the number: ");
    scanf("%llu", &n);
    int count=0;
    do
    {
        n = digits_sum(n);
        count++;
    }while(n>9);
    printf("The sum of the digits has been calculated %d times and the final sum id %llu.",count,n);
}

int digits_sum(unsigned long long int x)
{
    int sum=0,rem;
    while(x>0)
    {
        rem = x%10;
        sum = sum +rem;
        x = x/10;
    }
    return sum;
}
