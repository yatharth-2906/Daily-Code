#include<stdio.h>

int swap(int *a, int *b);

int main(void)
{
    int m,n;
    printf("Enter the value of first number: ");
    scanf("%d", &n);
    printf("Enter the value of second number: ");
    scanf("%d", &m);
    swap(&n,&m);
    printf("The value of first number is : %d \n",n);
    printf("The value of second number is : %d",m);
}

int swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
}
