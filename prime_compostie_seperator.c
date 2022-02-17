#include<stdio.h>

int PRIME_CHECKER(int x);

int main(void)
{
    int n;
    printf("Enter the length of the array: ");
    scanf("%d", &n);
    int arr[n];
    int i;
    for(i=0; i<n; i++)
    {
        printf("Enter the %d element of the array: ",i+1);
        scanf("%d", &arr[i]);
    }
    int n_prime=0, n_composite=0;
    int prime[n], composite[n];
    for(i=0; i<n; i++)
    {
        if(PRIME_CHECKER(arr[i])==1)
        {
            prime[n_prime]=arr[i];
            n_prime++;
        }
        else
        {
            composite[n_composite]=arr[i];
            n_composite++;
        }
    }
    printf("The array in the required format is: ");
    for(i=0; i<n; i++)
    {
        if(i<n_prime)
            arr[i]=prime[i];
        else
            arr[i]=composite[i-n_prime];
        printf("%d ",arr[i]);
    }
}

int PRIME_CHECKER(int x)
{
    if(x==1 || x<1)
        return 0;
    else
    {
        int c=0;
        for(int i=2; i*i<=x; i++)
        {
            if(x%i==0)
            {
                c=1;
                break;
            }
        }
        if(c==0)
            return 1;
        else
            return 0;
    }
}
