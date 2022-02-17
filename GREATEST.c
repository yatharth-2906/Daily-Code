#include<stdio.h>

int main(void)
{
    int number, input, greatest;
    printf("Enter the number of values to be compared: ");
    scanf("%d", &number);
    printf("Enter the value of number 1: ");
    scanf("%d", &input);
    greatest = input;
    for(int i=2; i<=number; i++)
    {
        printf("Enter the value of number %d: ",i);
        scanf("%d", &input);
        if(input>greatest)
            greatest = input;
    }
    printf("The greatest number is: %d",greatest);
}
