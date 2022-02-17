#include<stdio.h>

int main(void)
{
    float base,height,triangular_area;
    printf("Enter the length of base of Triangle: ");
    scanf("%f", &base);
    printf("Enter the height of Triangle: ");
    scanf("%f", &height);
    triangular_area = 0.5*base*height;
    printf("The Area of the Triangle whose dimensions are mentioned above is: %f",triangular_area);
}
