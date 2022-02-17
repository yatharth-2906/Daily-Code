#include<stdio.h>

int main(void)
{
    float radius, height, volume;
    printf("Enter the radius of cone: ");
    scanf("%f", &radius);
    printf("Enter the height of cone: ");
    scanf("%f", &height);
    volume = (3.1415*radius*radius*height)/3;
    printf("The Volume of cone whose dimensions are mentioned above is: %f",volume);
}
