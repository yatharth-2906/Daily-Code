#include<stdio.h>

int main(void)
{
    int a,b,l_even;
    printf("Enter the range ");
    scanf("%d %d",&a,&b);
    if(b%2==0)
        l_even = b;
    else
        l_even = b-1;
    int sum=0,n=1;
    for(int i=1; i<=l_even; i++)
    {
        sum = sum + n;
        n=n+2;
    }
    printf("The sum of the series is %d",sum);
}
