#include<stdio.h>

int recursive_sum(int m);

int main(void)
{
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum = recursive_sum(n);
    printf("Sum = %d", sum);
}

int recursive_sum(int m)
{
    if(m==1)
        return 1;
    else
        return m + recursive_sum(m-1);
}
