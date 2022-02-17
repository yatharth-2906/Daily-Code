#include<stdio.h>

int main(void)
{
    int n, c=0;
    printf("Enter a number to check for prime: ");
    scanf("%d", &n);
    if(n==1)
        printf("%d is a prime number.",n);
    else{
    for(int i=1; i<=n; i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
        printf("%d is a prime number.",n);
    else
        printf("%d is not a prime number.",n);
}
}
