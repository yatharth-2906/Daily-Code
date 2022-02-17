#include<stdio.h>
#include<math.h>
int main(void)
{
    float x,y;
    printf("Enter The Value Of Sine Angle: ");
    scanf("%f", &x);
    y = (x - (pow(x,3)/6 ) +((pow(x,5)/120)) -((pow(x,7)/5040)) +((pow(x,9)/361880))) ;
    printf("The value of sin(x) is: %f",y);
}
