#include<stdio.h>

int main(void)
{
    float a,b,c,d;
    printf("Enter the value of First Number: ");
    scanf("%f", &a);
    printf("Enter the value of Second Number: ");
    scanf("%f", &b);
    printf("Enter the value of Third Number: ");
    scanf("%f", &c);
    printf("Enter the value of Fourth Number: ");
    scanf("%f", &d);
    if(a>=b && a>=c && a>=d)
        printf("The Greatest Number is: %f",a);
    else if(b>=a && b>=c && b>=d)
        printf("The Greatest Number is: %f",b);
    else if(c>=b && c>=a && c>=d)
        printf("The Greatest Number is: %f",c);
    else if(d>=b && d>=c && d>=a)
        printf("The Greatest Number is: %f",d);
}
