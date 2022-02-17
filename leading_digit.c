#include<stdio.h>
#include<math.h>

int l_digit(int x);

int main(void)
{
    int n;
    printf("Enter a number to display it's leading digit: ");
    scanf("%d", &n);
    l_digit(n);
}

int l_digit(int x)
{
    int a=x,r;
    while(a>0)
    {
        r = a%10;
        a = a/10;
    }
    printf("Leading Digit = %d",r);
}
