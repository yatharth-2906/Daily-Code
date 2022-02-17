#include<stdio.h>

int main(void)
{
    printf("The value of 5 divided by 2 is: %d \n", 5/2); // The value of 5/2 is 2.5 but since %d is used therefore integral value is returned.
    printf("The value of 5 divided by 2 is: %f \n", 5/2); //The value of 5/2 is equal to 2.5 and  since %f is used therefore decimal value is also returned.
    printf("The value of 5.0 divided by 2 is: %f \n", 5.0/2);
    printf("The value of 5.0 divided by 2 is: %d \n", 5.0/2);
    printf("The value of 5 divided by 2.0 is: %d \n", 5/2.0);
    printf("The value of 5 divided by 2.0 is: %f \n", 5/2.0);
    printf("The value of 5.0 divided by 2.0 is: %d \n", 5.0/2.0);
    printf("The value of 5.0 divided by 2.0 is: %f \n", 5.0/2.0);
    printf("The value of 2 divided by 5 is: %d \n", 2/5);
    printf("The value of 2 divided by 5 is: %f \n", 2/5);
    float a = 4.0/10;
    printf("The value of 4 divided by 10 is: %f \n",a);
    float b = 4/10;
    printf("The value of 4 divided by 10 is: %f \n",b);  //The float will return value of m/n as zero if m<n.
    float c = 4;
    printf("The value of c is: %f \n",c);
    float d = 4/2;
    printf("The value of c is: %f",d); //The float will return value of m/n if m>=n.
}
