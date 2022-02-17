#include<stdio.h>

int print_address(int *n);

int main(void)
{
    int a;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    print_address(&a);
}

int print_address(int *n)
{
    printf("The address is: %p",n);
}
