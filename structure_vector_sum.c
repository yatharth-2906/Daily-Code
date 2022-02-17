#include<stdio.h>

typedef struct vector{
    float x;
    float y;
    float z;
} vect;

int main(void)
{
    vect a,b,c;
    printf("Enter the value of projection of first vector on X-Axis: ");
    scanf("%f", &a.x);
    printf("Enter the value of projection of first vector on Y-Axis: ");
    scanf("%f", &a.y);
    printf("Enter the value of projection of first vector on Z-Axis: ");
    scanf("%f", &a.z);
    printf("\n\nEnter the value of projection of second vector on X-Axis: ");
    scanf("%f", &b.x);
    printf("Enter the value of projection of second vector on Y-Axis: ");
    scanf("%f", &b.y);
    printf("Enter the value of projection of second vector on Z-Axis: ");
    scanf("%f", &b.z);
    c.x = a.x + b.x;
    c.y = a.y + b.y;
    c.z = a.z + b.z;
    printf("The resultant vector is: (%.2f)i+(%.2f)j+(%.2f)k",c.x,c.y,c.z);
}
