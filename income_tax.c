#include<stdio.h>

int main(void)
{
    float income,tax;
    printf("Enter your Annual Income in Rupee: ");
    scanf("%f", &income);
    if(income<250000)
        tax = 0;
    else if(income>=250000 && income<=500000)
        tax = (5*income)/100;
    else if(income>500000 &&  income<=1000000)
        tax = (20*income)/100;
    else
        tax = (30*income)/100;
    printf("The tax paid by employee to the government on his income of %f is: %f",income,tax);
}
