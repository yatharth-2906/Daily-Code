#include<stdio.h>

int fact(int x);

int main(void)
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n>=0)
        printf("Factorial of %d is equal to %d",n,fact(n));
    else
        printf("Invalid Input.");
}

int fact(int x)
{
    int f=1;
    if(x==0)
        f=1;
    else
    {
        for(int i=1; i<=x; i++)
            f = f * i;
    }
    return f;

}
