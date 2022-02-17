#include<stdio.h>
#include<math.h>
int main(void)
{
    float a,b,c,root_1,root_2;
    printf("Enter the coefficient of x^2: ");
    scanf("%f", &a);
    printf("Enter the coefficient of x^1: ");
    scanf("%f", &b);
    printf("Enter the value of constant term: ");
    scanf("%f", &c);
    root_1 = ((-1*b) + pow(((b*b)-4*a*c),0.5))/2*a;
    root_2 = ((-1*b) - pow(((b*b)-4*a*c),0.5))/2*a;
    printf("The value of first root is: %f \n",root_1);
    printf("The value of second root is: %f \n",root_2);
}
