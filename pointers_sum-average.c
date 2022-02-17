#include<stdio.h>

int sum(int *, int *);

int average(int *, int *);

int main(void)
{
    int m,n;
    printf("Enter the value of first number: ");
    scanf("%d", &m);
    printf("Enter the value of second number: ");
    scanf("%d", &n);
    int s = sum(&m,&n);
    int a = average(&m,&n);
    printf("The sum of %d and %d is: %d \n",m,n,s);
    printf("The average of %d and %d is: %d \n",m,n,a);
}

int sum(int *p, int *q)
{
    return (*p+*q);
}

int average(int *x, int *y)
{
    return (*x+*y)/2;
}
