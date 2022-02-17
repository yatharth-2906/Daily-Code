#include<stdio.h>

int main(void)
{
    int n;
    printf("Enter the number whose table is to be printed: ");
    scanf("%d", &n);
    for(int i=10; i>0; i--)
    {
        printf("%d into %d is: %d \n",n,i,i*n);
    }
}
