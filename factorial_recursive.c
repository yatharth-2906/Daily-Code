#include<stdio.h>

int fact(int x);

int main(void)
{
    int n;
    printf("Enter the number: ");
    scanf("%d", &n);
    if(n>=0)
        printf("Factorial of %d is equal to %d",n,fact(n));
    else
        printf("Invalid Input.");
}

int fact(int x)
{
  if(x==0||x==1)
        return 1;
  else
    return x*fact(x-1);
}
