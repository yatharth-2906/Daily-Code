#include<stdio.h>
int fibonacci();
int main(void)
{
    int n;
    printf("Enter the position of the element in the fibonacci series: ");
    scanf("%d", &n);
    printf("The %d element of the fibonacci series is: %d",n,fibonacci(n));
}

int fibonacci(int n)
{
    int element, n1=0,n2=1;
    for(int i=3; i<=n; i++)
    {
        element = n1+n2;
        n1=n2;
        n2=element;
    }
    return element;
}
