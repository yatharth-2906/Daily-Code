#include<stdio.h>

int main(void)
{
    int n,fact=1;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n>=0)
    {
        if(n==0)
        {
            fact =1;
        }
       else
       {
       for(int i=1; i<=n; i++)
            fact = fact*i;
       }
    }
    else
        printf("Invalid Input.");

    printf("Factorial of %d is equal to %d",n,fact);
}
