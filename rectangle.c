#include<stdio.h>

int main(void)
{
    float length, width;
    printf("Enter the length of rectangle: ");
    scanf("%f", &length);
    printf("Enter the width of rectangle: ");
    scanf("%f", &width);
    printf("The area of rectangle with dimensions %f and %f is: %f \n",length,width,length*width);
    printf("The perimeter of rectangle with dimensions %f and %f is: %f \n",length,width,2*(length+width));
}
