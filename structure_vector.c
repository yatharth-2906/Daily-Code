#include<stdio.h>

typedef struct vector{
    float x;
    float y;
    float z;
} vect;

int main(void)
{
    vect a;;
    printf("Enter the value of projection of vector on X-Axis: ");
    scanf("%f", &a.x);
    printf("Enter the value of projection of vector on Y-Axis: ");
    scanf("%f", &a.y);
    printf("Enter the value of projection of vector on Z-Axis: ");
    scanf("%f", &a.z);
    printf("The vector entered by the user is: (%.2f)i+(%.2f)j+(%.2f)k",a.x,a.y,a.z);
}
