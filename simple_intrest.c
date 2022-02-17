#include<stdio.h>

int main(void)
{
    float principal,rate,time,simple_intrest;
    printf("Enter the Principal Value: ");
    scanf("%f", &principal);
    printf("Enter the rate of intrest: ");
    scanf("%f", &rate);
    printf("Enter the Time Period: ");
    scanf("%f", &time);
    simple_intrest = principal*(rate/100)*time;
    printf("The value of Simple Intrest is = %f",simple_intrest);
    return 0;
}
