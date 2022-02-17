#include<stdio.h>

int recursive_fact(int m);

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int factorial = recursive_fact(n);
    printf("Factorial of %d = %d",n,factorial);
}

int recursive_fact(int m)
{
    if(m==1)
        return 1;
    else
        return m*recursive_fact(m-1);
}
