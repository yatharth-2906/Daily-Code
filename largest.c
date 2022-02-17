#include<stdio.h>

int greatest(int a, int b, int c);

int main(void)
{
    int x,y,z;
    printf("Enter the value of first number: ");
    scanf("%d", &x);
    printf("Enter the value of second number: ");
    scanf("%d", &y);
    printf("Enter the value of third number: ");
    scanf("%d", &z);
    greatest(x,y,z);
}

int greatest(int a, int b, int c)
{
    if(a>=b && a>=c)
        printf("The Greatest Number is = %d",a);
    else if(b>=a && b>=c)
        printf("The Greatest Number is = %d",b);
    else
        printf("The Greatest Number is = %d",c);
}
