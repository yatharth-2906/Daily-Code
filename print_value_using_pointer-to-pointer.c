#include<stdio.h>

int main(void)
{
    int i;
    printf("Enter the value of a number: ");
    scanf("%d", &i);
    int *j = &i;
    int **k = &j;
    printf("The value of number entered by the user is: %d",**k);
}
