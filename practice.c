#include<stdio.h>
#include<math.h>

int main(void)
{
    int m,n;
    printf("Enter the value of first number to be swapped: ");
    scanf("%d", &m);
    printf("Enter the value of second number to be swapped: ");
    scanf("%d", &n);
    printf("\nBefore Swapping \nThe First number is: %d \nThe second number is: %d \n",m,n);
    m = m^n;
    n = m^n;
    m = m^n;
    printf("\nAfter Swapping \nThe First number is: %d \nThe second number is: %d\n",m,n);
}
