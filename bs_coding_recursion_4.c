#include<stdio.h>

unsigned long long int recursive_exp(int x, int y);

int main(void)
{
    int base, power;
    printf("Enter the base value: ");
    scanf("%d", &base);
    printf("Enter the power value: ");
    scanf("%d", &power);
    unsigned long long int exponent = recursive_exp(base,power);
    printf("The value of %d raised to the power %d = %llu",base,power,exponent);
}
unsigned long long int recursive_exp(int x, int y)
{
    if(y==1)
        return x;
    else
        return x*recursive_exp(x,y-1);
}
