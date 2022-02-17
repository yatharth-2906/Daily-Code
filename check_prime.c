#include<stdio.h>

int prime(int x);

int main(void)
{
    int n;
    printf("Enter a number to check for Prime: ");
    scanf("%d",&n);
    puts("The program will display 0 if number is prime else will display 1 as result.");
    int result = prime(n);
    printf("Result = %d",result);
}

int prime(int x)
{
    int r,c=0;
    for(int i=2; i<x; i++)
    {
        if(x%i==0)
        {
            c++;
            break;
        }
    }
    if(c==1)
    {
        r=1;
    }
    else
    {
        r=0;
    }
    return r;
}
