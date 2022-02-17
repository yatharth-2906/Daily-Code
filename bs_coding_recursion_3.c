#include<stdio.h>

int recursive_gcd(int a, int b);

int main(void)
{
    int m,n;
    printf("Enter two numbers to calculate their GCD:-\n");
    printf("Enter the first number: ");
    scanf("%d", &m);
    printf("Enter the second number: ");
    scanf("%d", &n);
    if(m<0)
        m=-1*m;
    if(n<0)
        n=-1*n;
    int gcd = recursive_gcd(m,n);
    printf("GCD of %d and %d = %d",m,n,gcd);
}

int recursive_gcd(int a, int b)
{
    if(a==0)
        return b;
    else if(b==0)
        return a;
    else
    {
        int g;
        for(int i=1; i<=a && i<=b; i++)
        {
            if(a%i==0 && b%i==0)
                g=i;
        }
        return g;
    }
}
