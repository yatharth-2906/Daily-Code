#include<stdio.h>

int sum(int x);

int main(void)
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    sum(n);
}

int sum(int x)
{
    int s=0;
    for(int i=1; i<=x; i++)
        s = s+i;
    printf("The sum of first %d natural numbers is: %d",x,s);
}
