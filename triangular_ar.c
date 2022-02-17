#include<stdio.h>
#include<math.h>

int main(void)
{
    float a,b,c,s,ar;
    printf("Enter the length of first side of triangle: ");
    scanf("%f", &a);
    printf("Enter the length of second side of triangle: ");
    scanf("%f", &b);
    printf("Enter the length of third side of triangle: ");
    scanf("%f", &c);
    s = (a+b+c)/2;
    ar = pow((s*(s-a)*(s-b)*(s-c)),0.5);
    printf("The area of rectangle whose dimensions values are entered above is: %f",ar);
}
