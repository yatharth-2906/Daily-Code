#include<stdio.h>

int factorial(int x);
int prime(int y);
int eo(int z);

int main(void)
{
    int choice,number;
    printf("Press 1 to display factorial of a number. \nPress 2 to check for prime number. \nPress 3 to check for even and odd. \nPress 4 to exit.\n");
    while(1)
    {
        printf("Enter your choice: \n");
        scanf("%d", &choice);
        if(choice==1)
        {
            printf("Enter the number: \n");
            scanf("%d", &number);
            factorial(number);
        }
        else if(choice==2)
        {
            printf("Enter the number: \n");
            scanf("%d", &number);
            prime(number);
        }
        else if(choice==3)
        {
            printf("Enter the number: \n");
            scanf("%d", &number);
            eo(number);
        }
        else
            break;
    }
}

int factorial(int x)
{
    int f=1;
    for(int i=1; i<=x; i++)
        f = f * i;
    printf("Factorial value is %d \n",f);
}

int prime(int y)
{
    int c=0;
    for(int i=2; i<y; i++)
    {
        if(y%i==0)
        {
            c++;
            break;
        }
    }
    if(c==1)
        printf("Not Prime. \n");
    else
        printf("Prime. \n");
}

int eo(int z)
{
    if(z%2==0)
        printf("Even.\n");
    else
        printf("Odd. \n");
}
