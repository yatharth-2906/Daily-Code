#include<stdio.h>

int series(int a, int y);
int factorial(int b);   //Sum = x+ (x*x)/2! + (x*x*x*x) /4! + .... + (x^n)/n!

int main(void)
{
    int x,n;
    printf("Enter the number of terms of the series to be displayed: ");
    scanf("%d", &n);
    printf("Enter the value of x: ");
    scanf("%d", &x);
    series(n,x);
}

int series(int a, int y)
{
    int f,c=1;
    float sum = 0;
    int product =1;
    for(int i=2; c<=a; i=i+2)
    {
        f = factorial(i);
        for(int j=1; j<=i; j++)
            product = product * y;
        sum = sum + (float)product/f;
        ++c;
        product = 1;
    }sum = sum+y;
    printf("Sum = %f\n",sum);
}

int factorial(int b)
{
    int f=1;
    for(int i=1; i<=b; i++)
        f = f*i;
    return f;
}
