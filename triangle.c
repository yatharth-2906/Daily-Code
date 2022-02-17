#include<stdio.h>

int main(void)
{
    float height, base;
    printf("Enter the length of height of rectangle: ");
    scanf("%f", &height);
    printf("Enter the length of base of rectangle: ");
    scanf("%f", &base);
    printf("The area of triangle with dimensions %f and %f is: %f \n",height,base,0.5*(base*height));
}
