#include<stdio.h>

void ten_times(int *a);

int main(void)
{
    int m,n;
    printf("Enter a number: ");
    scanf("%d", &n);
    m=n;
    ten_times(&n);
    printf("The value of %d after multipling with 10 is %d",m,n);
}

void ten_times(int *a)
{
    *a = (*a)*10;
}
