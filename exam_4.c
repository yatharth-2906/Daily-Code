#include<stdio.h>
#include<math.h>

float ar(float a, float b, float c);
float perim(float a, float b, float c);

float main(void)
{
    float side1,side2,side3;
    puts("Enter the value of length of sides of triangle: ");
    scanf("%f %f %f", &side1, &side2, &side3);
    float area = ar(side1,side2,side3);
    printf("Area = %f \n",area);
    float perimeter = perim(side1,side2,side3);
    printf("Perimeter = %f", perimeter);
}

float ar(float a, float b, float c)
{
    float s = (a+b+c)/2;
    float area_t = s*(s-a)*(s-b)*(s-c);
    area_t = pow(area_t,0.5);
    return area_t;
}

float perim(float a, float b, float c)
{
    float p = a+b+c;
    return p;
}
