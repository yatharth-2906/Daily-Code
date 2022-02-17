#include<stdio.h>

int check_prime(int x);

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int i,nf=0;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            if(check_prime(i)==1)
                nf++;
        }
    }
    int prime_factors[nf],count=0;
    for(i=2; i<n; i++)
    {
        if(n%i==0)
        {
            if(check_prime(i)==1)
            {
                prime_factors[count]=i;
                count++;
            }
        }
    }
    printf("There are %d prime factors of %d.\nPrime Factors: ",nf,n);
    for(i=0; i<nf; i++)
        printf("%d ",prime_factors[i]);
}

int check_prime(int x)
{
    int c=0;
    for(int i=1; i<=x; i++)
    {
        if(x%i==0)
            c++;
    }
    if(c==2)
        return 1;
    else
        return 0;
}
