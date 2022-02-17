#include<stdio.h>

int main(void)
{
    float c,fr;
    printf("Enter the temperature in degree celcius: ");
    scanf("%f", &c);
    fr = ((9*c)/5)+32;
    printf("The temperature in farenheight is: %f",fr);
    return 0;
}
