#include<stdio.h>

int factorial(int x);

int check_prime(int y);

int check_even(int z);

int main(void)
{
    int n=0;
    int choice[1000];
    int data[1000];
    for(int i=0; 1; i++)
    {
        scanf("%d", &choice[i]);
        if(choice[i]!=4)
        {
            scanf("%d", &data[i]);
            n++;
        }
        else
            break;
    }
    for(int i=0; i<=n; i++)
    {
        if(choice[i]==1)
            factorial(data[i]);
        else if(choice[i]==2)
            check_prime(data[i]);
        else if(choice[i]==3)
            check_even(data[i]);
    }
}

int factorial(int x)
{
    int f=1;
    if(x==0 || x==1)
        f=1;
    else
    {
        for(int i=1; i<=x; i++)
            f = f*i;
    }
    printf("Factorial of number: %d \n",f);
}

int check_prime(int y)
{
    int c=0;
    for(int i=1; i<=y; i++)
    {
        if(c%i==0)
            c++;
    }
    if(c==2)
        printf("Prime \n");
    else
        printf("Not prime \n");
}

int check_even(int z)
{
    if(z%2==0)
        printf("Even \n");
    else
        printf("Odd \n");
}
