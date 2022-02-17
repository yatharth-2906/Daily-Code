#include<stdio.h>
#include<math.h>

int abs_val(int x);

int main(void)
{
    int n;
    printf("Enter an integer to display it's absolute value: ");
    scanf("%d", &n);
    abs_val(n);
}

int abs_val(int x)
{
    printf("The ablolute value of %d is = %.0f",x,fabs(x));
}
