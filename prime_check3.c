#include<stdio.h>

int main(void)
{
    int n,c=0,i=1;
    printf("Enter a number to check for prime: ");
    scanf("%d", &n);
    if(n==1)
        printf("%d is a prime number.",n);
    else{
            do
            {
                if(n%i==0)
                {
                    c++;
                }
                i++;
            }while(i<=n);
            if(c==2)
                printf("%d is a prime number.",n);
            else
                printf("%d is not a prime number.",n);
}
}
